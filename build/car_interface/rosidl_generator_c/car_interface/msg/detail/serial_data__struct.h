// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interface:msg/SerialData.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__SERIAL_DATA__STRUCT_H_
#define CAR_INTERFACE__MSG__DETAIL__SERIAL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SerialData in the package car_interface.
/**
  * 这个串口消息是为uart_driver服务
  * car_interface/msg/SerialData.msg
 */
typedef struct car_interface__msg__SerialData
{
  /// 字节数据，ros2不支持bytes，故用uint8数组代替
  rosidl_runtime_c__uint8__Sequence data;
} car_interface__msg__SerialData;

// Struct for a sequence of car_interface__msg__SerialData.
typedef struct car_interface__msg__SerialData__Sequence
{
  car_interface__msg__SerialData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interface__msg__SerialData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACE__MSG__DETAIL__SERIAL_DATA__STRUCT_H_
