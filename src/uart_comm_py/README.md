# 更新环境
source install/setup.bash

# 启动节点（使用默认参数）
ros2 launch uart_comm_py uart_launch.py

# 或者指定串口设备和波特率
ros2 launch uart_comm_py uart_launch.py uart_port:=/dev/ttyS0 baudrate:=9600


# 发送测试消息
ros2 topic pub --once /uart_tx uart_comm_py/ProtocolFrame "{header: 170, length: 2, function: 1, data: [1, 2]}"

# 查看接收的消息
ros2 topic echo /uart_rx