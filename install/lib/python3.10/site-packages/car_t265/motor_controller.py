import rclpy
from rclpy.node import Node
from car_t265_interface.srv import SendCommand
from car_t265_interface.msg import MotorCommand
from geometry_msgs.msg import Twist
import struct

class MotorController(Node):
    def __init__(self):
        super().__init__('motor_controller')
        
        # 服务客户端
        self.cmd_client = self.create_client(
            SendCommand,
            '/uart_driver/send_command'
        )
        
        # 等待服务上线
        while not self.cmd_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('UART 服务还未上线，请等待......')
        
        # 订阅Twist消息（兼容ROS标准）
        self.twist_sub = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.twist_callback,
            10
        )
        
        # 订阅自定义电机命令
        self.motor_sub = self.create_subscription(
            MotorCommand,
            '/motor_command',
            self.motor_callback,
            10
        )
        
        # 移除原有的cmd_map，改用速度直接发送
        self.last_linear = 0.0
        self.last_angular = 0.0
        
        self.get_logger().info('电机控制节点初始化成功！')
    
    def float_to_command(self, value, cmd_type):
        """
        将浮点数转换为4字节指令
        Args:
            value: 速度值 (float)，支持正负数
            cmd_type: 命令类型，0x60=线速度，0x70=角速度
        Returns:
            完整的串口指令字符串
        """
        # 将float转换为4字节，使用大端序
        speed_bytes = struct.pack('>f', value)
        # 转换字节为hex字符串
        speed_hex = ''.join([f'{b:02X}' for b in speed_bytes])
        
        # 数据长度为6字节（F2 + cmd_type + 4字节速度值）
        command = f"AA06F2{cmd_type:02X}{speed_hex}"
        
        self.get_logger().info(
            f"速度值: {value:>8.4f} -> hex: {speed_hex} -> 指令: {command}"
        )
        return command
        
    def twist_callback(self, msg):
        """处理Twist消息并发送到串口"""
        # 处理线速度
        if msg.linear.x != self.last_linear:
            cmd = self.float_to_command(msg.linear.x, 0x60)
            self.send_motor_command(cmd)
            self.last_linear = msg.linear.x
    
        # 处理角速度
        if msg.angular.z != self.last_angular:
            cmd = self.float_to_command(msg.angular.z, 0x70)
            self.send_motor_command(cmd)
            self.last_angular = msg.angular.z
            
    
    def motor_callback(self, msg):
        """处理自定义电机命令"""
        self.send_motor_command(msg.command)
    
    def send_motor_command(self, hex_cmd):
        """发送电机指令到串口"""
        req = SendCommand.Request()
        req.hex_command = hex_cmd
        future = self.cmd_client.call_async(req)
        future.add_done_callback(self.response_callback)
    
    def response_callback(self, future):
        """处理服务响应"""
        try:
            response = future.result()
            if not response.success:
                self.get_logger().warn(f"Command failed: {response.message}")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")

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