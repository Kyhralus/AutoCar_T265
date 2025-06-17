import os
import time
import serial

serial_port = "/dev/ttyS1"
baudrate = 115200
sink_serial1 = serial.Serial(serial_port, baudrate)
print(sink_serial1)
while True:
    if sink_serial1.isOpen():
        serial_data_length = sink_serial1.inWaiting()
        if serial_data_length:
            serial_data = sink_serial1.read(serial_data_length)
            print("接收到的数据：",serial_data)
            print("接收到的数据的十六进制：", serial_data.hex())
