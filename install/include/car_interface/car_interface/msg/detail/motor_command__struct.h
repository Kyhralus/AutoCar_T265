// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interface:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define CAR_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CMD_FORWARD'.
enum
{
  car_interface__msg__MotorCommand__CMD_FORWARD = 1
};

/// Constant 'CMD_BACKWARD'.
enum
{
  car_interface__msg__MotorCommand__CMD_BACKWARD = 2
};

/// Constant 'CMD_STOP'.
enum
{
  car_interface__msg__MotorCommand__CMD_STOP = 3
};

/// Constant 'CMD_TURN_LEFT'.
enum
{
  car_interface__msg__MotorCommand__CMD_TURN_LEFT = 4
};

/// Constant 'CMD_TURN_RIGHT'.
enum
{
  car_interface__msg__MotorCommand__CMD_TURN_RIGHT = 5
};

/// Struct defined in msg/MotorCommand in the package car_interface.
/**
  * 这个消息是为 motor_controller 服务
  * car_interface/msg/MotorCommand.msg
 */
typedef struct car_interface__msg__MotorCommand
{
  uint8_t command;
  /// 可选：速度参数
  float speed;
} car_interface__msg__MotorCommand;

// Struct for a sequence of car_interface__msg__MotorCommand.
typedef struct car_interface__msg__MotorCommand__Sequence
{
  car_interface__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interface__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
