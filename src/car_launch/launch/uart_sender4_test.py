import os
import time
import serial

serial_port = "/dev/ttyS4"
baudrate = 115200   # 9600
sink_serial1 = serial.Serial(serial_port, baudrate)
print(sink_serial1)
# send t265 message

if sink_serial1.isOpen():

    sink_serial1.write("page2.t0.txt=\"12\"".encode("GB2312"))
    sink_serial1.write(bytes.fromhex('ff ff ff'))


   
