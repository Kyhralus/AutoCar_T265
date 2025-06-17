import os
import time
import serial

serial_port = "/dev/ttyS1"
baudrate = 115200
sink_serial1 = serial.Serial(serial_port, baudrate)
print(sink_serial1)
# 
# send rplidar message
while True:
    if sink_serial1.isOpen():
        # 将十六进制字符串转换为字节序列
        msg = bytes.fromhex("58 2B 31 35 37 37 39 2B 30 35 35 30 30 2B 30 35 35 30 30 35")
        print("发送的消息为：", msg)
        print("发送的消息十六进制为：", msg.hex())
        send_count = sink_serial1.write(msg)
        if send_count == len(msg):
            print("success")       
        else:
            print("fail")   
    time.sleep(0.2)
   
