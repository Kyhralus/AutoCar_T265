#!/usr/bin/env python3
"""
    T265 Odom坐标系发布
    功能： 1.订阅T265相机的位姿数据，并将其转换为ROS2的Odometry消息和TF变换。
           2. 主要用于navigation2的导航
    作者： Kyhralus <alineyiee@shu.edu.cn>
    时间： 2025.6.18
    

"""
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
import pyrealsense2 as rs
import numpy as np
import tf2_ros
from tf2_ros import TransformBroadcaster
import time

class T265Driver(Node):
    def __init__(self):
        super().__init__('t265_driver')
        
        # 创建发布者
        self.odom_pub = self.create_publisher(Odometry, '/t265/odom', 10)
        
        # 创建 TF 广 broadcast器
        self.tf_broadcaster = TransformBroadcaster(self)
        
        # 配置 T265 相机
        self.pipeline = rs.pipeline()
        self.config = rs.config()
        self.config.enable_stream(rs.stream.pose)
        
        # 尝试连接相机（添加重试机制）
        self.connected = False
        self.connect_camera()
        
        # 创建定时器，定期发布位姿数据
        self.timer = self.create_timer(0.05, self.publish_odometry)  # 20Hz
        
        self.get_logger().info('T265 已初始化')
    
    def connect_camera(self):
        """连接相机并处理可能的错误"""
        max_retries = 5
        retry_count = 0
        
        while retry_count < max_retries and not self.connected:
            try:
                self.pipeline.start(self.config)
                self.connected = True
                self.get_logger().info('成功连接到 T265 相机')
            except Exception as e:
                retry_count += 1
                self.get_logger().error(f'连接相机失败 ({retry_count}/{max_retries}): {e}')
                if retry_count < max_retries:
                    self.get_logger().info('5秒后重试...')
                    time.sleep(5)
        
        if not self.connected:
            self.get_logger().fatal('无法连接到 T265 相机，退出驱动程序')
            rclpy.shutdown()
    
    def publish_odometry(self):
        """发布位姿数据"""
        if not self.connected:
            return
        try:
            # 等待一帧数据
            frames = self.pipeline.wait_for_frames()
            pose_frame = frames.get_pose_frame()
            
            if pose_frame : 
                # 获取位姿数据
                pose = pose_frame.get_pose_data()
                if pose.tracker_confidence == 3: # 位姿数据置信度为 3 才采用 
                    # 创建 ROS2 时间戳
                    current_time = self.get_clock().now().to_msg()
                    
                    # 创建并填充 Odometry 消息
                    odom = Odometry()
                    odom.header.stamp = current_time
                    odom.header.frame_id = 'odom'
                    odom.child_frame_id = 'base_link'

                    # 设置位姿
                    # 根据T265的pose坐标系转换成符合习惯的坐标系
                    # 转换后的坐标系 以镜头为基准（树立安装）
                    # x --- 朝镜头前
                    # y --- 朝镜头右
                    # z --- 朝上
                    odom.pose.pose.position.x = - pose.translation.z
                    odom.pose.pose.position.y = pose.translation.x
                    odom.pose.pose.position.z = pose.translation.y
                    
                    # 设置方向（四元数）
                    # 根据T265的pose坐标系转换成符合习惯的坐标系
                    # 转换后的坐标系 以镜头为基准（树立安装）
                    # roll --- 镜头翻滚
                    # pitch --- 镜头俯仰旋转
                    # yaw --- 镜头左右旋转
                    odom.pose.pose.orientation.x = pose.rotation.z
                    odom.pose.pose.orientation.y = - pose.rotation.x
                    odom.pose.pose.orientation.z = pose.rotation.y
                    odom.pose.pose.orientation.w = pose.rotation.w                
                    
                    # 速度
                    # @TODO
                    # 可能存在问题
                    # 设置线速度
                    # 与位置映射保持一致：
                    # x = -z
                    # y = x
                    # z = y
                    odom.twist.twist.linear.x = - pose.velocity.z
                    odom.twist.twist.linear.y = pose.velocity.x
                    odom.twist.twist.linear.z = pose.velocity.y

                    # 设置角速度
                    # 与方向四元数映射保持一致：
                    # x = z
                    # y = -x
                    # z = y
                    odom.twist.twist.angular.x = pose.angular_velocity.z
                    odom.twist.twist.angular.y = - pose.angular_velocity.x
                    odom.twist.twist.angular.z = pose.angular_velocity.y
                    
                    # 发布 Odometry 消息
                    self.odom_pub.publish(odom)
                    
                    # 发布 TF 变换
                    transform = TransformStamped()
                    transform.header.stamp = current_time
                    transform.header.frame_id = 'odom'
                    transform.child_frame_id = 'base_link'
                    
                    # 设置位姿
                    # 根据T265的pose坐标系转换成符合习惯的坐标系
                    # 转换后的坐标系 以镜头为基准（树立安装）
                    # x --- 朝镜头前
                    # y --- 朝镜头右
                    # z --- 朝上
                    transform.transform.translation.x = pose.translation.z
                    transform.transform.translation.y = pose.translation.x
                    transform.transform.translation.z = pose.translation.y

                    # 设置方向（四元数）
                    # 根据T265的pose坐标系转换成符合习惯的坐标系
                    # 转换后的坐标系 以镜头为基准（树立安装）
                    # roll --- 镜头翻滚
                    # pitch --- 镜头俯仰旋转
                    # yaw --- 镜头左右旋转
                    transform.transform.rotation.x = pose.rotation.z
                    transform.transform.rotation.y = pose.rotation.x
                    transform.transform.rotation.z = pose.rotation.y
                    transform.transform.rotation.w = pose.rotation.w
                    
                    self.tf_broadcaster.sendTransform(transform)
                else:
                    self.get_logger().fatal('位姿数据置信度低，等待新数据...')
        
        except Exception as e:
            self.get_logger().error(f'处理位姿数据时出错: {e}')
            # 尝试重新连接
            self.connected = False
            self.get_logger().info('尝试重新连接相机...')
            self.connect_camera()
    
    def destroy_node(self):
        # 停止相机
        if self.connected:
            self.pipeline.stop()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    driver = T265Driver()
    try:
        rclpy.spin(driver)
    except KeyboardInterrupt:
        pass
    finally:
        driver.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()