#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
import pyrealsense2 as rs
import numpy as np
import tf2_ros
from tf2_ros import TransformBroadcaster

# 测试可使用，但odom话题有问题
# class T265Driver(Node):
#     def __init__(self):
#         super().__init__('t265_driver')
        
#         # 创建发布者
#         self.odom_pub = self.create_publisher(Odometry, '/camera/odom/sample', 10)
        
#         # 创建 TF 广播器
#         self.tf_broadcaster = TransformBroadcaster(self)
        
#         # 配置 T265 相机
#         self.pipeline = rs.pipeline()
#         self.config = rs.config()
#         self.config.enable_stream(rs.stream.pose)
        
#         # 启动相机
#         self.pipeline.start(self.config)
        
#         # 创建定时器，定期发布位姿数据
#         self.timer = self.create_timer(0.05, self.publish_odometry)  # 20Hz
        
#         self.get_logger().info('T265 驱动已启动')
    
#     def publish_odometry(self):
#         # 等待一帧数据
#         frames = self.pipeline.wait_for_frames()
#         pose_frame = frames.get_pose_frame()
        
#         if pose_frame:
#             # 获取位姿数据
#             pose = pose_frame.get_pose_data()
            
#             # 创建 ROS2 时间戳
#             current_time = self.get_clock().now().to_msg()
            
#             # 创建并填充 Odometry 消息
#             odom = Odometry()
#             odom.header.stamp = current_time
#             odom.header.frame_id = 'odom'
#             odom.child_frame_id = 'base_link'
            
#             # 位置
#             odom.pose.pose.position.x = pose.translation.x
#             odom.pose.pose.position.y = pose.translation.y
#             odom.pose.pose.position.z = pose.translation.z
            
#             # 方向（四元数）
#             odom.pose.pose.orientation.x = pose.rotation.x
#             odom.pose.pose.orientation.y = pose.rotation.y
#             odom.pose.pose.orientation.z = pose.rotation.z
#             odom.pose.pose.orientation.w = pose.rotation.w
            
#             # 速度
#             odom.twist.twist.linear.x = pose.velocity.x
#             odom.twist.twist.linear.y = pose.velocity.y
#             odom.twist.twist.linear.z = pose.velocity.z
            
#             odom.twist.twist.angular.x = pose.angular_velocity.x
#             odom.twist.twist.angular.y = pose.angular_velocity.y
#             odom.twist.twist.angular.z = pose.angular_velocity.z
            
#             # 发布 Odometry 消息
#             self.odom_pub.publish(odom)
            
#             # 发布 TF 变换
#             transform = TransformStamped()
#             transform.header.stamp = current_time
#             transform.header.frame_id = 'odom'
#             transform.child_frame_id = 'base_link'
            
#             transform.transform.translation.x = pose.translation.x
#             transform.transform.translation.y = pose.translation.y
#             transform.transform.translation.z = pose.translation.z
            
#             transform.transform.rotation.x = pose.rotation.x
#             transform.transform.rotation.y = pose.rotation.y
#             transform.transform.rotation.z = pose.rotation.z
#             transform.transform.rotation.w = pose.rotation.w
            
#             self.tf_broadcaster.sendTransform(transform)
    
#     def destroy_node(self):
#         # 停止相机
#         self.pipeline.stop()
#         super().destroy_node()

# def main(args=None):
#     rclpy.init(args=args)
#     driver = T265Driver()
#     try:
#         rclpy.spin(driver)
#     except KeyboardInterrupt:
#         pass
#     finally:
#         driver.destroy_node()
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()


# 【问题】acml 缺失 map->odom变换
# ...existing code...
class T265Driver(Node):
    def __init__(self):
        super().__init__('t265_driver')
        
        # 直接发布到/odom
        self.odom_pub = self.create_publisher(Odometry, '/odom', 10)  # 不要加
        
        self.tf_broadcaster = TransformBroadcaster(self)
        
        self.pipeline = rs.pipeline()
        self.config = rs.config()
        self.config.enable_stream(rs.stream.pose)
        self.pipeline.start(self.config)
        
        self.timer = self.create_timer(0.05, self.publish_odometry)  # 20Hz -->10 Hz
        
        self.get_logger().info('T265 驱动已启动')
    
    def publish_odometry(self):
        frames = self.pipeline.wait_for_frames()
        pose_frame = frames.get_pose_frame()
        if pose_frame:
            pose_data = pose_frame.get_pose_data()
            confidence = pose_data.tracker_confidence

            # 只在置信度为3时发布
            if confidence == 3:
                # 创建 ROS2 时间戳
                current_time = self.get_clock().now().to_msg()

                # 创建并填充 Odometry 消息
                odom = Odometry()
                odom.header.stamp = current_time
                odom.header.frame_id = 'odom'
                odom.child_frame_id = 'base_link'
                # 设置位置
                # @TODO
                # 根据T265的pose坐标系转换成符合习惯的坐标系
                # 转换后的坐标系 以镜头为基准（树立安装）
                # x --- 朝镜头前
                # y --- 朝镜头右
                # z --- 朝上
                odom.pose.pose.position.x = - pose_data.translation.z
                odom.pose.pose.position.y = pose_data.translation.x
                odom.pose.pose.position.z = pose_data.translation.y
                
                # 设置方向（四元数）
                # @TODO
                # 根据T265的pose坐标系转换成符合习惯的坐标系
                # 转换后的坐标系 以镜头为基准（树立安装）
                # roll --- 镜头翻滚
                # pitch --- 镜头俯仰旋转
                # yaw --- 镜头左右旋转
                odom.pose.pose.orientation.x = pose_data.rotation.z
                odom.pose.pose.orientation.y = - pose_data.rotation.x
                odom.pose.pose.orientation.z = pose_data.rotation.y
                odom.pose.pose.orientation.w = pose_data.rotation.w

                # 速度
                odom.twist.twist.linear.x = - pose_data.velocity.z
                odom.twist.twist.linear.y = pose_data.velocity.x
                odom.twist.twist.linear.z = pose_data.velocity.y

                odom.twist.twist.angular.x = pose_data.angular_velocity.z
                odom.twist.twist.angular.y = - pose_data.angular_velocity.x
                odom.twist.twist.angular.z = pose_data.angular_velocity.y

                # 发布 Odometry 消息
                self.odom_pub.publish(odom)

                # 发布 TF 变换
                transform = TransformStamped()
                transform.header.stamp = current_time
                transform.header.frame_id = 'odom'
                transform.child_frame_id = 'base_link'

                transform.transform.translation.x = - pose_data.translation.z
                transform.transform.translation.y = pose_data.velocity.x
                transform.transform.translation.z = pose_data.translation.y

                transform.transform.rotation.x = pose_data.rotation.z
                transform.transform.rotation.y = - pose_data.rotation.x
                transform.transform.rotation.z = pose_data.rotation.y
                transform.transform.rotation.w = pose_data.rotation.w

                self.tf_broadcaster.sendTransform(transform)

                # debug
                self.get_logger().info(f"发布odom: 坐标:({odom.pose.pose.orientation.x}, "
                                      f"{odom.pose.pose.orientation.y}, "
                                      f"{odom.pose.pose.orientation.z}), "
                                      f"方向:({odom.pose.pose.orientation.x}, "
                                      f"{odom.pose.pose.orientation.y}, "
                                      f"{odom.pose.pose.orientation.z}, "
                                      f"{odom.pose.pose.orientation.w})")

    def destroy_node(self):
        try:
            self.pipeline.stop()
        except Exception as e:
            self.get_logger().warn(f"Pipeline stop error: {e}")
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


