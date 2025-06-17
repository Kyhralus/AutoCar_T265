# t265 消息类型

# 基础的 position 信息
float64 pos_x
float64 pos_y
float64 pos_z
int64 confidence   # 置信度

# pose position 
float64 pos_orient_x
float64 pos_orient_y 
float64 pos_orient_z
float64 pos_orient_w 

# 速度信息 
# 线速度
float64 vel_linear_x
float64 vel_linear_y 
float64 vel_linear_z
# 角速度
float64 vel_angular_x 
float64 vel_angular_y 
float64 vel_angular_z 

# 加速度信息
# 线加速度
float64 acc_linear_x 
float64 acc_linear_y 
float64 acc_linear_z
# 角加速度 
float64 acc_angular_x 
float64 acc_angular_y 
float64 acc_angular_z 

# # 坐标系
# frame_id
# # 时间戳
# stamp