// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interface:msg/RplidarData.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__STRUCT_H_
#define CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RplidarData in the package car_interface.
typedef struct car_interface__msg__RplidarData
{
  double dist;
  double theta;
} car_interface__msg__RplidarData;

// Struct for a sequence of car_interface__msg__RplidarData.
typedef struct car_interface__msg__RplidarData__Sequence
{
  car_interface__msg__RplidarData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interface__msg__RplidarData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__STRUCT_H_
