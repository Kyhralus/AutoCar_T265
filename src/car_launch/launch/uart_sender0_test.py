import os
import time
import serial

serial_port = "/dev/ttyS1"
baudrate = 115200
sink_serial1 = serial.Serial(serial_port, baudrate)
print(sink_serial1)
# 
# send rplidar message

if sink_serial1.isOpen():
    msg = bytes.fromhex("97")
    send_count = sink_serial1.write(msg)
    if send_count == len(msg):
        print("success")       
    else:
        print("fail")   

