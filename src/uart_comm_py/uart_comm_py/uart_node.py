#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from car_interface.msg import ProtocolFrame
import serial
import threading
import time
import struct
import queue

class UartNode(Node):
    def __init__(self):
        super().__init__('uart_node')
        
        # 声明参数
        self.declare_parameter('uart_port', '/dev/ttyS1')
        self.declare_parameter('baudrate', 115200)
        self.declare_parameter('timeout', 0.1)
        
        # 获取参数
        self.uart_port = self.get_parameter('uart_port').get_parameter_value().string_value
        self.baudrate = self.get_parameter('baudrate').get_parameter_value().integer_value
        self.timeout = self.get_parameter('timeout').get_parameter_value().double_value
        
        # 初始化串口
        self.uart = serial.Serial(
            port=self.uart_port,
            baudrate=self.baudrate,
            timeout=self.timeout
        )
        
        # 检查串口是否打开
        if self.uart.is_open:
            self.get_logger().info(f"UART opened: {self.uart_port}, baudrate: {self.baudrate}")
        else:
            self.get_logger().error(f"Failed to open UART: {self.uart_port}")
            return
        
        # 创建发布者和订阅者
        self.publisher_ = self.create_publisher(ProtocolFrame, 'uart_rx', 10)
        self.subscription = self.create_subscription(
            ProtocolFrame,
            'uart_tx',
            self.tx_callback,
            10)
        
        # 接收缓冲区
        self.rx_buffer = bytearray()
        self.frame_header = 0xAA
        
        # 启动接收线程
        self.rx_thread = threading.Thread(target=self.rx_loop)
        self.rx_thread.daemon = True
        self.rx_thread.start()
        
        # 发送队列
        self.tx_queue = queue.Queue()
        self.tx_thread = threading.Thread(target=self.tx_loop)
        self.tx_thread.daemon = True
        self.tx_thread.start()
        
        # 注册关闭回调
        self.add_on_shutdown_callback(self.shutdown_callback)
    
    def shutdown_callback(self):
        """节点关闭时调用"""
        self.get_logger().info("Shutting down UART node...")
        if self.uart.is_open:
            self.uart.close()
            self.get_logger().info("UART closed")
    
    def tx_callback(self, msg):
        """处理接收到的发送消息"""
        self.tx_queue.put(msg)
    
    def tx_loop(self):
        """发送线程"""
        while rclpy.ok():
            try:
                # 从队列获取消息，超时1秒
                msg = self.tx_queue.get(timeout=1.0)
                
                # 打包消息
                packet = self.pack_frame(msg)
                
                # 发送数据
                self.uart.write(packet)
                self.get_logger().debug(f"Sent packet: {self.bytes_to_hex(packet)}")
                
                # 标记任务完成
                self.tx_queue.task_done()
            except queue.Empty:
                # 队列为空，继续循环
                continue
            except Exception as e:
                self.get_logger().error(f"Error in TX loop: {str(e)}")
                time.sleep(0.1)
    
    def rx_loop(self):
        """接收线程"""
        while rclpy.ok():
            try:
                # 检查是否有数据可读
                if self.uart.in_waiting > 0:
                    # 读取数据
                    data = self.uart.read(self.uart.in_waiting)
                    
                    # 添加到接收缓冲区
                    self.rx_buffer.extend(data)
                    
                    # 解析帧
                    self.parse_frames()
                else:
                    # 没有数据，短暂休眠
                    time.sleep(0.01)
            except Exception as e:
                self.get_logger().error(f"Error in RX loop: {str(e)}")
                time.sleep(0.1)
    
    def parse_frames(self):
        """解析接收缓冲区中的帧"""
        while len(self.rx_buffer) >= 4:  # 至少需要帧头(1) + 帧长(2) + 功能码(1)
            
            # 查找帧头
            header_pos = self.rx_buffer.find(bytes([self.frame_header]))
            
            # 如果找不到帧头或帧头不在开始位置，移除无效数据
            if header_pos == -1:
                self.rx_buffer.clear()
                return
            elif header_pos > 0:
                self.rx_buffer = self.rx_buffer[header_pos:]
            
            # 检查是否有足够的数据来读取帧长和功能码
            if len(self.rx_buffer) < 4:
                return
            
            # 读取帧长（大端序）
            data_length = (self.rx_buffer[1] << 8) | self.rx_buffer[2]
            
            # 检查是否有足够的数据来读取完整的帧
            if len(self.rx_buffer) < 4 + data_length:
                return
            
            # 创建并填充消息
            msg = ProtocolFrame()
            msg.header = self.rx_buffer[0]
            msg.length = data_length
            msg.function = self.rx_buffer[3]
            msg.data = list(self.rx_buffer[4:4+data_length])
            
            # 发布消息
            self.publisher_.publish(msg)
            self.get_logger().debug(f"Received frame: header=0x{msg.header:02X}, "
                                   f"length={msg.length}, function=0x{msg.function:02X}, "
                                   f"data={self.bytes_to_hex(bytes(msg.data))}")
            
            # 从缓冲区中移除已处理的帧
            self.rx_buffer = self.rx_buffer[4+data_length:]
    
    def pack_frame(self, msg):
        """将消息打包为字节数组"""
        # 创建字节数组
        packet = bytearray()
        
        # 添加帧头
        packet.append(msg.header)
        
        # 添加帧长（大端序）
        packet.append((msg.length >> 8) & 0xFF)
        packet.append(msg.length & 0xFF)
        
        # 添加功能码
        packet.append(msg.function)
        
        # 添加数据
        packet.extend(msg.data)
        
        return packet
    
    def bytes_to_hex(self, data):
        """将字节数组转换为十六进制字符串"""
        return ' '.join([f'{b:02X}' for b in data])

def main(args=None):
    rclpy.init(args=args)
    node = UartNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()