import rclpy
from rclpy.node import Node
from car_t265_interface.srv import SendCommand
from car_t265_interface.msg import MotorCommand
from geometry_msgs.msg import Twist

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
        
        # 指令映射表
        self.cmd_map = {
            MotorCommand.CMD_FORWARD: "AA02F210",
            MotorCommand.CMD_BACKWARD: "AA02F220",
            MotorCommand.CMD_STOP: "AA02F230",
            MotorCommand.CMD_TURN_LEFT: "AA02F240",
            MotorCommand.CMD_TURN_RIGHT: "AA02F250"
        }
        
        self.get_logger().info('电机控制节点初始化成功！')
    
    def twist_callback(self, msg):
        """处理Twist消息并转换为电机指令"""
        linear_x = msg.linear.x
        angular_z = msg.angular.z
        
        # 根据速度方向选择指令
        if linear_x > 0.1:  # 前进
            cmd_code = MotorCommand.CMD_FORWARD
            self.get_logger().info("前进")
        elif linear_x < -0.1:  # 后退
            cmd_code = MotorCommand.CMD_BACKWARD
            self.get_logger().info("后退")
        elif angular_z > 0.1:  # 左转
            cmd_code = MotorCommand.CMD_TURN_LEFT
            self.get_logger().info("左转")
        elif angular_z < -0.1:  # 右转
            cmd_code = MotorCommand.CMD_TURN_RIGHT
            self.get_logger().info("右转")
        else:  # 停止
            cmd_code = MotorCommand.CMD_STOP
            self.get_logger().info("停止")
        
        # 发送指令
        self.send_motor_command(cmd_code)
        
    
    def motor_callback(self, msg):
        """处理自定义电机命令"""
        self.send_motor_command(msg.command)
    
    def send_motor_command(self, cmd_code):
        """发送电机指令到串口"""
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