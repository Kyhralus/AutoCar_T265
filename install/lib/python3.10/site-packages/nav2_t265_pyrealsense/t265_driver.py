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
    
    # def publish_odometry(self):
    #     frames = self.pipeline.wait_for_frames()
    #     pose_frame = frames.get_pose_frame()
        
    #     if pose_frame:
    #         pose = pose_frame.get_pose_data()
    #         current_time = self.get_clock().now().to_msg()
            
    #         odom = Odometry()
    #         odom.header.stamp = current_time
    #         odom.header.frame_id = 'odom'
    #         odom.child_frame_id = 'base_link'
    #         odom.pose.pose.position.x = pose.translation.x
    #         odom.pose.pose.position.y = pose.translation.y
    #         odom.pose.pose.position.z = pose.translation.z
    #         odom.pose.pose.orientation.x = pose.rotation.x
    #         odom.pose.pose.orientation.y = pose.rotation.y
    #         odom.pose.pose.orientation.z = pose.rotation.z
    #         odom.pose.pose.orientation.w = pose.rotation.w
    #         odom.twist.twist.linear.x = pose.velocity.x
    #         odom.twist.twist.linear.y = pose.velocity.y
    #         odom.twist.twist.linear.z = pose.velocity.z
    #         odom.twist.twist.angular.x = pose.angular_velocity.x
    #         odom.twist.twist.angular.y = pose.angular_velocity.y
    #         odom.twist.twist.angular.z = pose.angular_velocity.z
    #         self.odom_pub.publish(odom)
            
    #         transform = TransformStamped()
    #         transform.header.stamp = current_time
    #         transform.header.frame_id = 'odom'
    #         transform.child_frame_id = 'base_link'
    #         transform.transform.translation.x = pose.translation.x
    #         transform.transform.translation.y = pose.translation.y
    #         transform.transform.translation.z = pose.translation.z
    #         transform.transform.rotation.x = pose.rotation.x
    #         transform.transform.rotation.y = pose.rotation.y
    #         transform.transform.rotation.z = pose.rotation.z
    #         transform.transform.rotation.w = pose.rotation.w
    #         self.tf_broadcaster.sendTransform(transform)
    #         # debug
    #         # self.get_logger().info('已发布odom!')
    # ...existing code...
    def publish_odometry(self):
        frames = self.pipeline.wait_for_frames()
        pose_frame = frames.get_pose_frame()
        if pose_frame:
            pose = pose_frame.get_pose_data()
            confidence = pose.tracker_confidence

            # 只在置信度为3时发布
            if confidence == 3:
                # 坐标转换
                pos_x = pose.translation.x * 1.07
                pos_z = pose.translation.z * (-1)
                pos_y = pos_z  # 先交换y和z
                pos_z = pose.translation.y * (-1)  # 交换后z为原y的反号

                # 创建 ROS2 时间戳
                current_time = self.get_clock().now().to_msg()

                # 创建并填充 Odometry 消息
                odom = Odometry()
                odom.header.stamp = current_time
                odom.header.frame_id = 'odom'
                odom.child_frame_id = 'base_link'

                # 位置
                odom.pose.pose.position.x = pos_x
                odom.pose.pose.position.y = pos_y
                odom.pose.pose.position.z = pos_z

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

                transform.transform.translation.x = pos_x
                transform.transform.translation.y = pos_y
                transform.transform.translation.z = pos_z

                transform.transform.rotation.x = pose.rotation.x
                transform.transform.rotation.y = pose.rotation.y
                transform.transform.rotation.z = pose.rotation.z
                transform.transform.rotation.w = pose.rotation.w

                self.tf_broadcaster.sendTransform(transform)

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


