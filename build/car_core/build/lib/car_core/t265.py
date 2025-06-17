from car_interface.msg import T265Data

import rclpy
from rclpy.node import Node

import pyrealsense2 as rs 

from std_msgs.msg import String 
from std_srvs.srv import Empty


class T265(Node):

    def __init__(self, name, pub_cycle = 0.02, start_header = "52", topic_stack = 50):
        super().__init__(name)

        self.name = name
        self.pub_cycle = pub_cycle
        self.start_header = start_header # use in uart to notify ShuFly
        self.topic_stack = topic_stack

        self.server_t265_open = self.create_service(Empty, name + '_open_service', self.service_t265_open_callback)   
        self.server_t265_close = self.create_service(Empty, name + '_close_service', self.service_t265_close_callback)                                                      
        
        self.pub_data = self.create_publisher(T265Data, name + '_data_topic', topic_stack)
        self.pub_uart_send = self.create_publisher(String, 'uart_sender3_data_topic', 5)  

        self.pipe = None
        self.cfg = None
        
        self.timer_pub_t265 = None

    def service_t265_open_callback(self, request, response):
        if self.timer_pub_t265 is not None:
            self.get_logger().warning("t265 has already been started!Check for safety use!")   
            return response
        
        self.timer_pub_t265 = self.create_timer(self.pub_cycle, self.timer_pub_t265_callback)
        self.pipe = rs.pipeline()
        self.cfg = rs.config()
        self.cfg.enable_stream(rs.stream.pose)
        
        self.pipe.start(self.cfg)

        start_msg = String()
        start_msg.data = self.start_header + " "
        self.pub_uart_send.publish(start_msg)
        self.get_logger().warning("start pub t265 success")   
        return response
    
    def service_t265_close_callback(self, request, response):
        if self.timer_pub_t265 is not None:
            self.timer_pub_t265.cancel()
            self.timer_pub_t265 = None
        self.pipe.stop()
        self.pipe = None
        self.cfg = None
        self.get_logger().warning(f't265 close success!')
        return response
    

    def timer_pub_t265_callback(self):
        """
            funcntion: 作为一个服务回调，允许外部节点通过 ROS2 服务请求来控制 T265 相机的启动。
                1. 从 T265 获取位置追踪数据
                2. 将数据转换为 ROS2 消息格式
                3. 通过 ROS2 话题发布位置、速度、姿态等信息
        """
        frames = self.pipe.wait_for_frames()
        pose = frames.get_pose_frame()
        if pose:
            data = pose.get_pose_data()      

            msg = T265Data()
            msg.pos_x = data.translation.x
            msg.pos_y = data.translation.y
            msg.pos_z = data.translation.z
            msg.confidence = data.tracker_confidence
            

            msg = self.data_process(msg)
            self.get_logger().info(f'[{msg.confidence}]:(x: {msg.pos_x}, y: {msg.pos_y}, z:{msg.pos_z})')

            if msg.confidence == 3:
                self.pub_data.publish(msg)

            # msg.pos_orient_x = data.rotation.x
            # msg.pos_orient_y = data.rotation.y
            # msg.pos_orient_z = data.rotation.z
            # msg.pos_orient_w = data.rotation.w

            # msg.vel_linear_x = data.velocity.x
            # msg.vel_linear_y = data.velocity.y
            # msg.vel_linear_z = data.velocity.z
            # msg.vel_angular_x = data.angular_velocity.x
            # msg.vel_angular_y = data.    
            # msg.vel_angular_y = data.angular_velocity.y
            # msg.vel_angular_z = data.angular_velocity.z

            # msg.acc_linear_x = data.acceleration.x
            # msg.acc_linear_y = data.acceleration.y
            # msg.acc_linear_z = data.acceleration.z
            # msg.acc_angular_x = data.angular_acceleration.x
            # msg.acc_angular_y = data.angular_acceleration.y
            # msg.acc_angular_z = data.angular_acceleration.z

            # msg.frame_id = "t265_camera"
            # msg.stamp = self.get_clock().now().to_msg()

    def data_process(self, msg):
        # z should be reverse
        msg.pos_z = msg.pos_z * (-1)
        # swap y and z
        tmp = msg.pos_y
        msg.pos_y = msg.pos_z
        msg.pos_z = tmp
        msg.pos_x = msg.pos_x * 1.07
        return msg


