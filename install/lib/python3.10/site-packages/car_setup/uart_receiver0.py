import car_core.uart_receiver as ur

import rclpy                                      


def main(args=None):
    rclpy.init(args=args)
    uartReceiver = ur.UartReceiver("uart_receiver0", "/dev/ttyS0", 115200)
    uartReceiver.run()
    rclpy.spin(uartReceiver)
    uartReceiver.destroy_node()
    rclpy.shutdown()

