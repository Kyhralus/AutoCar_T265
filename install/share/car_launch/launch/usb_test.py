import usb.core
import usb.util
import sys
from ctypes import *
import types  
import struct
import time

all_devs = usb.core.find(find_all = True)
for dev in all_devs:
	print(dev)


write_buffer=[0x02,0x64]

class Point(Union):
    _fields_ = [ ('charx',  c_char*8),('double',  c_double)]


def Init_usb_hid_device(vid,pid):
	dev=usb.core.find(idVendor= vid, idProduct= pid)
	if(dev==None):
		return None
	else:
		# Attach and detach the usb,must use this code ahead 
		if dev.is_kernel_driver_active(0):
			dev.detach_kernel_driver(0)
		dev.set_configuration()
		return dev

def hid_get_adc_volt():
	global volt
	hid_dev.write(0x01,write_buffer,1000)
	receive_buffer=hid_dev.read(0x82,64,1000)
	test_2 = (c_char*4)()
	test_2[0]=receive_buffer[1]
	test_2[1]=receive_buffer[2]
	test_2[2]=receive_buffer[3]
	test_2[3]=receive_buffer[4]
	print(struct.unpack('f',bytes(test_2)))
	time.sleep(0.5)




hid_dev=Init_usb_hid_device(0x0483,0xa010)
if(hid_dev!=None):
	while(1):	
		hid_get_adc_volt()
	
else:
	print("HID device not found!")
