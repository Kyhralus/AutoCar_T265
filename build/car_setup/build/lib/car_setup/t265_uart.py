"""
    t265串口发送程序，将数据发向指定串口
"""

import car_core.t265_uart as tu
import rclpy


def main(args=None):
    rclpy.init(args=args)                                  
    t265_uart = tu.T265Uart("t265_uart")                                
    rclpy.spin(t265_uart)                                     
    t265_uart.destroy_node()                                   
    rclpy.shutdown()  