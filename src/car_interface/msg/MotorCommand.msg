# 这个消息是为 motor_controller 服务
# car_interface/msg/MotorCommand.msg
uint8 CMD_FORWARD = 1
uint8 CMD_BACKWARD = 2
uint8 CMD_STOP = 3
uint8 CMD_TURN_LEFT = 4
uint8 CMD_TURN_RIGHT = 5

uint8 command
float32 speed  # 可选：速度参数
