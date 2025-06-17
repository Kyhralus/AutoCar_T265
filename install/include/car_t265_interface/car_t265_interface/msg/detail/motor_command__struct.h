// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_t265_interface:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CAR_T265_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define CAR_T265_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

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
  car_t265_interface__msg__MotorCommand__CMD_FORWARD = 1
};

/// Constant 'CMD_BACKWARD'.
enum
{
  car_t265_interface__msg__MotorCommand__CMD_BACKWARD = 2
};

/// Constant 'CMD_STOP'.
enum
{
  car_t265_interface__msg__MotorCommand__CMD_STOP = 3
};

/// Constant 'CMD_TURN_LEFT'.
enum
{
  car_t265_interface__msg__MotorCommand__CMD_TURN_LEFT = 4
};

/// Constant 'CMD_TURN_RIGHT'.
enum
{
  car_t265_interface__msg__MotorCommand__CMD_TURN_RIGHT = 5
};

/// Struct defined in msg/MotorCommand in the package car_t265_interface.
/**
  * 电机控制命令
 */
typedef struct car_t265_interface__msg__MotorCommand
{
  uint8_t command;
  /// 可选：速度控制
  float speed;
} car_t265_interface__msg__MotorCommand;

// Struct for a sequence of car_t265_interface__msg__MotorCommand.
typedef struct car_t265_interface__msg__MotorCommand__Sequence
{
  car_t265_interface__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_t265_interface__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_T265_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
