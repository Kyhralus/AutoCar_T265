import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from example_interfaces.srv import SetBool, Trigger
from car_interface.srv import SendCommand
from car_interface.msg import SerialData
import serial
import threading
import time

class UARTDriver(Node):
    def __init__(self, name='uart_driver'):
        super().__init__(name)
        self.name = name # @TODO

        # 串口参数
        self.declare_parameter('port', '/dev/ttyS0')
        self.declare_parameter('baudrate', 115200)
        self.declare_parameter('timeout', 0.1)
        
        # 初始化串口
        self.serial_port = None
        self.init_serial()
        
        # 创建服务（同步命令）
        self.cmd_srv = self.create_service(
            SendCommand, 
            '~/send_command', 
            self.send_command_callback,
            callback_group=MutuallyExclusiveCallbackGroup()  # 确保线程安全
        )
        
        self.start_srv = self.create_service(
            SetBool, 
            '~/start', 
            self.start_callback
        )
        
        self.reset_srv = self.create_service(
            Trigger, 
            '~/reset', 
            self.reset_callback
        )
        
        # 创建发布者（接收数据）
        self.data_pub = self.create_publisher(
            SerialData, 
            '~/received_data', 
            10
        )
        
        # 启动接收线程
        self.running = False
        self.receiver_thread = None
        self.start_receiver()
        
        self.get_logger().info('UART driver node initialized')
    
    def init_serial(self):
        """初始化串口连接"""
        try:
            port = self.get_parameter('port').value
            baud = self.get_parameter('baudrate').value
            timeout = self.get_parameter('timeout').value
            
            self.serial_port = serial.Serial(
                port=port,
                baudrate=baud,
                timeout=timeout
            )
            self.get_logger().info(f"Serial port opened: {port} @ {baud}")
            return True
        except Exception as e:
            self.get_logger().error(f"Failed to open serial port: {e}")
            return False
    
    def send_command_callback(self, request, response):
        """服务回调：发送十六进制指令"""
        if not self.serial_port or not self.serial_port.is_open:
            response.success = False
            response.message = "Serial port not opened"
            return response
        
        try:
            # 转换为字节并发送
            bytes_cmd = bytes.fromhex(request.hex_command)
            self.serial_port.write(bytes_cmd)
            self.get_logger().info(f"Sent: {request.hex_command}")
            
            response.success = True
            response.message = "Command sent successfully"
            return response
        except Exception as e:
            response.success = False
            response.message = f"Error: {str(e)}"
            return response
    
    def start_callback(self, request, response):
        """服务回调：启动/停止接收线程"""
        if request.data:
            self.start_receiver()
            response.success = True
            response.message = "Receiver started"
        else:
            self.stop_receiver()
            response.success = True
            response.message = "Receiver stopped"
        return response
    
    def reset_callback(self, request, response):
        """服务回调：重置串口"""
        self.stop_receiver()
        
        if self.serial_port and self.serial_port.is_open:
            self.serial_port.close()
        
        if self.init_serial():
            self.start_receiver()
            response.success = True
            response.message = "Serial port reset successfully"
        else:
            response.success = False
            response.message = "Failed to reset serial port"
        
        return response
    
    def start_receiver(self):
        """启动接收线程"""
        if self.running:
            return
        
        self.running = True
        self.receiver_thread = threading.Thread(target=self.receive_data)
        self.receiver_thread.daemon = True
        self.receiver_thread.start()
    
    def stop_receiver(self):
        """停止接收线程"""
        self.running = False
        if self.receiver_thread:
            self.receiver_thread.join(timeout=1.0)
    
    def receive_data(self):
        """接收线程：持续读取串口数据"""
        buffer = bytearray()
        
        while self.running:
            try:
                if not self.serial_port or not self.serial_port.is_open:
                    time.sleep(0.5)
                    continue
                
                if self.serial_port.in_waiting > 0:
                    # 读取数据
                    data = self.serial_port.read(self.serial_port.in_waiting)
                    buffer.extend(data)
                    
                    # 这里可以添加帧解析逻辑
                    # 例如：查找帧头帧尾、校验和等
                    
                    # 发布接收到的数据
                    if buffer:
                        msg = SerialData()
                        msg.data = bytes(buffer)
                        self.data_pub.publish(msg)
                        buffer.clear()
                
                time.sleep(0.01)  # 避免CPU占用过高
            except Exception as e:
                self.get_logger().error(f"Receive error: {e}")
                time.sleep(0.5)
    
    def destroy_node(self):
        """节点关闭时清理资源"""
        self.stop_receiver()
        
        if self.serial_port and self.serial_port.is_open:
            self.serial_port.close()
        
        super().destroy_node()


