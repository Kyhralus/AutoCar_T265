"""
转换网址: https://config.net.cn/tools/4Bytes-Hex-To-Float.html
"""

import rclpy
from rclpy.node import Node
from car_t265_interface.srv import SendCommand
import struct

class MotorController(Node):
    def __init__(self):
        super().__init__('motor_controller')
        self.cmd_client = self.create_client(SendCommand, '/uart_driver/send_command')
        while not self.cmd_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('UART 服务还未上线，请等待......')
        self.timer = self.create_timer(0.1, self.send_fixed_speed)
        self.get_logger().info('持续发送线速度0.5的指令')

    def float_to_command(self, value, cmd_type):
        speed_bytes = struct.pack('>f', value)
        speed_hex = ''.join([f'{b:02X}' for b in speed_bytes])
        command = f"AA06F2{cmd_type:02X}{speed_hex}"
        return command

    def send_fixed_speed(self):
        cmd = self.float_to_command(0.5, 0x60)
        req = SendCommand.Request()
        req.hex_command = cmd
        self.cmd_client.call_async(req)

def main(args=None):
    rclpy.init(args=args)
    node = MotorController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()