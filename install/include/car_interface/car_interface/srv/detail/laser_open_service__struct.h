// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_interface:srv/LaserOpenService.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__STRUCT_H_
#define CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/LaserOpenService in the package car_interface.
typedef struct car_interface__srv__LaserOpenService_Request
{
  int64_t mode;
  int64_t count;
} car_interface__srv__LaserOpenService_Request;

// Struct for a sequence of car_interface__srv__LaserOpenService_Request.
typedef struct car_interface__srv__LaserOpenService_Request__Sequence
{
  car_interface__srv__LaserOpenService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interface__srv__LaserOpenService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/LaserOpenService in the package car_interface.
typedef struct car_interface__srv__LaserOpenService_Response
{
  uint8_t structure_needs_at_least_one_member;
} car_interface__srv__LaserOpenService_Response;

// Struct for a sequence of car_interface__srv__LaserOpenService_Response.
typedef struct car_interface__srv__LaserOpenService_Response__Sequence
{
  car_interface__srv__LaserOpenService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_interface__srv__LaserOpenService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__STRUCT_H_
