// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interface:msg/T265Data.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__T265_DATA__STRUCT_H_
#define CAR_INTERFACE__MSG__DETAIL__T265_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/T265Data in the package car_interface.
/**
  * t265 消息类型
 */
typedef struct car_interface__msg__T265Data
{
  /// 基础的 position 信息
  double pos_x;
  double pos_y;
  double pos_z;
  /// 置信度
  int64_t confidence;
  /// pose position
  double pos_orient_x;
  double pos_orient_y;
  double pos_orient_z;
  double pos_orient_w;
  /// 速度信息
  /// 线速度
  double vel_linear_x;
  double vel_linear_y;
  double vel_linear_z;
  /// 角速度
  double vel_angular_x;
  double vel_angular_y;
  double vel_angular_z;
  /// 加速度信息
  /// 线加速度
  double acc_linear_x;
  double acc_linear_y;
  double acc_linear_z;
  /// 角加速度
  double acc_angular_x;
  double acc_angular_y;
  double acc_angular_z;
} car_interface__msg__T265Data;

// Struct for a sequence of car_interface__msg__T265Data.
typedef struct car_interface__msg__T265Data__Sequence
{
  car_interface__msg__T265Data * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interface__msg__T265Data__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACE__MSG__DETAIL__T265_DATA__STRUCT_H_
