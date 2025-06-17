import os
import time
import serial

serial_port = "/dev/ttyS3"
baudrate = 57600   # 9600
sink_serial1 = serial.Serial(serial_port, baudrate)
print(sink_serial1)
# send t265 message
while True:
    if sink_serial1.isOpen():
        msg = bytes.fromhex("58 2B 31 35 37 37 39 2B 30 35 35 30 30 2B 30 35 35 30 30 35")
        send_count = sink_serial1.write(msg)
        if send_count == len(msg):
            print("success")       
        else:
            print("fail")   
    time.sleep(2)
   
