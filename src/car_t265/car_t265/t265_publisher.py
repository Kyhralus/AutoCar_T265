import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Twist
from car_t265_interface.msg import T265Data
import pyrealsense2 as rs
import numpy as np
import threading
from scipy.spatial.transform import Rotation as R

class T265Publisher(Node):
    def __init__(self):
        super().__init__('t265_publisher')
        
        # 声明参数
        self.declare_parameter('frame_id', 't265_pose_frame')
        # @TODO
        
        # 创建发布者
        self.pose_pub = self.create_publisher(PoseStamped, '~/pose', 200)
        
        # 配置T265相机
        self.pipeline = rs.pipeline()
        self.config = rs.config()
        self.config.enable_stream(rs.stream.pose)

        # 启动相机线程
        self.running = False
        self.camera_thread = None
        self.start_camera()
        
        self.get_logger().info('T265 发布方初始化！')
    
    def start_camera(self):
        """启动相机线程"""
        if self.running:
            return
        
        self.running = True
        self.camera_thread = threading.Thread(target=self.camera_loop)
        self.camera_thread.daemon = True
        self.camera_thread.start()
    
    def camera_loop(self):
        """相机数据采集循环"""
        try:
            # 启动相机
            profile = self.pipeline.start(self.config)
            self.get_logger().info('T265 启动成功！')

            while self.running:
                # 等待一帧数据
                frames = self.pipeline.wait_for_frames()
                
                # 处理位姿数据
                pose_frame = frames.get_pose_frame()
                if pose_frame:
                    self.publish_pose(pose_frame)
        
        except Exception as e:
            self.get_logger().error(f"相机错误: {e}")
        finally:
            # 停止相机
            # if self.running:
            #     self.pipeline.stop()
            #     self.running = False
            print("关闭T265相机")
    
    def publish_pose(self, pose_frame):
        """发布位姿数据"""
        pose_data = pose_frame.get_pose_data()
        data_confidence = pose_data.tracker_confidence # 消息置信度

        # 创建位姿消息
        msg = PoseStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.get_parameter('frame_id').value
        
        
        # 设置位置
        # @TODO
        # 根据T265的pose坐标系转换成符合习惯的坐标系
        # 转换后的坐标系 以镜头为基准（树立安装）
        # x --- 朝镜头前
        # y --- 朝镜头右
        # z --- 朝上
        msg.pose.position.x =  - pose_data.translation.z
        
        msg.pose.position.y = pose_data.translation.x
        msg.pose.position.z = pose_data.translation.y
        
        # 设置方向（四元数）
        # @TODO
        # 根据T265的pose坐标系转换成符合习惯的坐标系
        # 转换后的坐标系 以镜头为基准（树立安装）
        # roll --- 镜头翻滚
        # pitch --- 镜头俯仰旋转
        # yaw --- 镜头左右旋转
        msg.pose.orientation.x = pose_data.rotation.z
        msg.pose.orientation.y = - pose_data.rotation.x
        msg.pose.orientation.z = pose_data.rotation.y
        msg.pose.orientation.w = pose_data.rotation.w
        # 解算欧拉角
        quat = [
            msg.pose.orientation.x,
            msg.pose.orientation.y,
            msg.pose.orientation.z,
            msg.pose.orientation.w
        ]
        r = R.from_quat(quat)
        roll, pitch, yaw = r.as_euler('xyz', degrees=True)  # 角度制

        # self.get_logger().info(
        #     f'发布朝向[{data_confidence}]: roll={roll:.2f}°, pitch={pitch:.2f}°, yaw={yaw:.2f}°'
        # )
        # msg = self.data_process(msg) # 处理数据
        self.get_logger().info(f'发布位姿[{data_confidence}]:(x: {msg.pose.position.x:.4f}, y: {msg.pose.position.y:.4f}, z:{msg.pose.position.z:.4f})')
        # self.get_logger().info(f'发布朝向[{data_confidence}]:(x: {msg.pose.orientation.x:.4f}, y: {msg.pose.orientation.y:.4f}, z:{msg.pose.orientation.z:.4f}), w:{msg.pose.orientation.w:.4f})')
        # 高置信度位姿信息才发布
        if data_confidence == 3:
            # 发布消息
            self.pose_pub.publish(msg)
            # self.get_logger().info("发布成功")
        

    def data_process(self, msg):
        # z should be reverse
        msg.pose.position.z = msg.pose.position.z * (-1)
        # swap y and z
        tmp = msg.pose.position.y
        msg.pose.position.y = msg.pose.position.z
        msg.pose.position.z = tmp
        msg.pose.position.x = msg.pose.position.x * 1.07
        return msg

    def destroy_node(self):
        """节点关闭时清理资源"""
        self.running = False
        if self.camera_thread:
            self.camera_thread.join(timeout=1.0)
        
        try:
            self.pipeline.stop()
        except Exception:
            pass
        
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = T265Publisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()