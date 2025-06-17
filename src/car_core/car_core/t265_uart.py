"""
    

"""
import car_core.utils_ros as ur
from car_interface.msg import T265Data

import rclpy                                      
from rclpy.node import Node                    
from std_srvs.srv import Empty


class T265Uart(Node):

    def __init__(self, name, data_header="58", data_eof="35", topic_stack=50):
        super().__init__(name)

        self.name = name
        self.data_header = data_header
        self.data_eof = data_eof
        self.topic_stack = topic_stack
        
        self.isOpen = False

        self.server_open = self.create_service(Empty, name + "_open_service", self.service_t265_uart_open_callback)  
        self.server_close = self.create_service(Empty, name + "_close_service", self.service_t265_uart_close_callback)                                                        

        ur.uart_sender3_init(self, topic_stack)

        self.sub_t265_data = self.create_subscription(T265Data, "t265_data_topic", self.topic_t265_data_callback, topic_stack)
        
        self.get_logger().warning(f"t265_uart initialize success!data_header:{data_header},data_eof:{data_eof},topic_stack:{topic_stack}")

    def topic_t265_data_callback(self, data):
        if self.isOpen:
            msg = ur.t265_data_to_uart_std(self, self.data_header, self.data_eof, data)
            ur.uart_sender3_send(self, msg)

    def service_t265_uart_open_callback(self, request, response):
        self.isOpen = True
        self.get_logger().warning(f'open t265_uart success')
        return response
    
    def service_t265_uart_close_callback(self, request, response):
        self.isOpen = False
        self.get_logger().warning(f'close t265_uart success')
        return response

