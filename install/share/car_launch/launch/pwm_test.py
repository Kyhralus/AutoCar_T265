import time
import periphery
 
# 在这里选择合适的GPIO编号，这取决于你的硬件
# 例如，在BeagleBone Black上，P9_14和P9_16是PWM功能的引脚
pwm_pin = 1  # 在您的硬件上选择一个PWM引脚
pwm_channel = 0  # 通道0或1，这取决于您的硬件

pwm_duty_cycle = 0.93  # 占空比设置为50%
 
# 初始化PWM对象
pwm = periphery.PWM(pwm_pin, pwm_channel)
pwm.frequency = 50

pwm.duty_cycle = pwm_duty_cycle
# 开始PWM信号
pwm.enable()
print("start")
try:
    # 让PWM运行10秒
    time.sleep(0.75)
 
except KeyboardInterrupt:
    pass

print("close")
# 清理并关闭PWM信号
pwm.disable()


pwm.duty_cycle = 0.92
# 开始PWM信号
pwm.enable()
print("start")
try:
    # 让PWM运行10秒
    time.sleep(0.75)
 
except KeyboardInterrupt:
    pass

print("close")
# 清理并关闭PWM信号
pwm.disable()
pwm.close()