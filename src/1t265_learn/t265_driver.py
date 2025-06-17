#!/usr/bin/env python3
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
        self.odom_pub = self.create_publisher(Odometry, '/camera/odom/sample', 10)
        
        # 创建 TF 广播器
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
        
        self.get_logger().info('T265 驱动已启动')
    
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
            
            if pose_frame:
                # 获取位姿数据
                pose = pose_frame.get_pose_data()
                
                # 创建 ROS2 时间戳
                current_time = self.get_clock().now().to_msg()
                
                # 创建并填充 Odometry 消息
                odom = Odometry()
                odom.header.stamp = current_time
                odom.header.frame_id = 'odom'
                odom.child_frame_id = 'base_link'
                
                # 位置
                odom.pose.pose.position.x = pose.translation.x
                odom.pose.pose.position.y = pose.translation.y
                odom.pose.pose.position.z = pose.translation.z
                
                # 方向（四元数）
                odom.pose.pose.orientation.x = pose.rotation.x
                odom.pose.pose.orientation.y = pose.rotation.y
                odom.pose.pose.orientation.z = pose.rotation.z
                odom.pose.pose.orientation.w = pose.rotation.w
                
                # 速度
                odom.twist.twist.linear.x = pose.velocity.x
                odom.twist.twist.linear.y = pose.velocity.y
                odom.twist.twist.linear.z = pose.velocity.z
                
                odom.twist.twist.angular.x = pose.angular_velocity.x
                odom.twist.twist.angular.y = pose.angular_velocity.y
                odom.twist.twist.angular.z = pose.angular_velocity.z
                
                # 发布 Odometry 消息
                self.odom_pub.publish(odom)
                
                # 发布 TF 变换
                transform = TransformStamped()
                transform.header.stamp = current_time
                transform.header.frame_id = 'odom'
                transform.child_frame_id = 'base_link'
                
                transform.transform.translation.x = pose.translation.x
                transform.transform.translation.y = pose.translation.y
                transform.transform.translation.z = pose.translation.z
                
                transform.transform.rotation.x = pose.rotation.x
                transform.transform.rotation.y = pose.rotation.y
                transform.transform.rotation.z = pose.rotation.z
                transform.transform.rotation.w = pose.rotation.w
                
                self.tf_broadcaster.sendTransform(transform)
        
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