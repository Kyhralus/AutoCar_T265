import rclpy
from rclpy.node import Node
from car_t265_interface.srv import SendCommand
from car_t265_interface.msg import SerialData
import serial
import threading
import time

class UARTDriver(Node):
    def __init__(self):
        super().__init__('uart_driver')
        
        # 串口参数
        self.declare_parameter('port', '/dev/ttyS0')
        self.declare_parameter('baudrate', 115200)
        self.declare_parameter('timeout', 0.1)
        
        # 初始化串口
        self.serial_port = None
        self.init_serial()
        
        # 创建服务
        self.cmd_srv = self.create_service(
            SendCommand, 
            '~/send_command', 
            self.send_command_callback
        )
        
        # 创建发布者
        self.data_pub = self.create_publisher(
            SerialData, 
            '~/received_data', 
            10
        )
        
        # 启动接收线程
        self.running = False
        self.start_receiver()
        
        self.get_logger().info('UART driver 节点已启动！')
    
    def init_serial(self):
        """初始化串口连接"""
        try:
            port = self.get_parameter('port').value
            baud = self.get_parameter('baudrate').value
            timeout = self.get_parameter('timeout').value
            
            self.serial_port = serial.Serial(
                port=port,
                baudrate=baud,
                timeout=timeout,
                write_timeout=1
            )
            self.get_logger().info(f"串口开启： {port} @ {baud}")
            return True
        except Exception as e:
            self.get_logger().error(f"串口开启失败： {e}")
            return False
    
    def send_command_callback(self, request, response):
        """服务回调：发送十六进制指令"""
        if not self.serial_port or not self.serial_port.is_open:
            response.success = False
            response.message = "串口未开启！"
            return response
        
        try:
            bytes_cmd = bytes.fromhex(request.hex_command)
            self.serial_port.write(bytes_cmd)  # 写入数据
            # self.serial_port.flush()           # 立即刷新缓冲区
            
            self.get_logger().info(f"发送指令: {request.hex_command}")
            
            response.success = True
            response.message = "指令发送成功！"
            return response
        except Exception as e:
            response.success = False
            response.message = f"错误: {str(e)}"
            return response
    
    def start_receiver(self):
        """启动接收线程"""
        if self.running:
            return
        
        self.running = True
        self.receiver_thread = threading.Thread(target=self.receive_data)
        self.receiver_thread.daemon = True
        self.receiver_thread.start()
    
    def receive_data(self):
        """接收线程：持续读取串口数据"""
        while self.running:
            try:
                if self.serial_port and self.serial_port.in_waiting > 0:
                    data = self.serial_port.read(self.serial_port.in_waiting)
                    self.get_logger().info(f"收到数据: {data.hex(' ')}")
                    
                    # 发布接收到的数据
                    msg = SerialData()
                    msg.data = data
                    self.data_pub.publish(msg)
            except Exception as e:
                self.get_logger().error(f"收到错误: {e}")
            time.sleep(0.01)
    
    def destroy_node(self):
        """节点关闭时清理资源"""
        self.running = False
        if self.receiver_thread:
            self.receiver_thread.join(timeout=1.0)
        
        if self.serial_port and self.serial_port.is_open:
            self.serial_port.close()
        
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = UARTDriver()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()