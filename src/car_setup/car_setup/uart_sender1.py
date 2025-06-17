import car_core.uart_sender as us

import rclpy 


def main(args=None):
    rclpy.init(args=args)
    uartSender = us.UartSender("uart_sender1", "/dev/ttyS1", 115200)
    rclpy.spin(uartSender)
    uartSender.destroy_node()
    rclpy.shutdown()

