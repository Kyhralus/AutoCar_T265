"""
    作用：发送控制指令给小车
    作者: Kyhraulus <alineyiee@shu.edu.cn>
    时间: 2025.6.12
"""

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from car_interface.srv import SendCommand
from car_interface.msg import MotorCommand
import time

class MotorController(Node):
    def __init__(self, name='motor_controller'):
        super().__init__(name)
        self.name = name

        # 服务客户端
        self.cmd_client = self.create_client(
            SendCommand,
            '/uart_driver/send_command'  # @TODO
        )
        
        # 等待服务上线
        while not self.cmd_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('UART service not available, waiting...')
        
        # 订阅控制话题
        self.cmd_sub = self.create_subscription(
            MotorCommand,
            '/motor_command',
            self.cmd_callback,
            10
        )
        
        # 指令映射表
        self.cmd_map = {
            MotorCommand.CMD_FORWARD: "AA02F210",
            MotorCommand.CMD_BACKWARD: "AA02F220",
            MotorCommand.CMD_STOP: "AA02F230",
            MotorCommand.CMD_TURN_LEFT: "AA02F240",
            MotorCommand.CMD_TURN_RIGHT: "AA02F250"
        }
        
        self.get_logger().info('Motor controller node initialized')
    
    def cmd_callback(self, msg):
        """处理控制命令并发送服务请求"""
        cmd_code = msg.command
        
        # 获取对应指令
        hex_cmd = self.cmd_map.get(cmd_code, "AA02F230")  # 默认停止
        
        # 发送服务请求
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

