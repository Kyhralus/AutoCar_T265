// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_t265_interface:srv/SendCommand.idl
// generated code does not contain a copyright notice

#ifndef CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__STRUCT_H_
#define CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'hex_command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendCommand in the package car_t265_interface.
typedef struct car_t265_interface__srv__SendCommand_Request
{
  /// 十六进制命令
  rosidl_runtime_c__String hex_command;
} car_t265_interface__srv__SendCommand_Request;

// Struct for a sequence of car_t265_interface__srv__SendCommand_Request.
typedef struct car_t265_interface__srv__SendCommand_Request__Sequence
{
  car_t265_interface__srv__SendCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_t265_interface__srv__SendCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendCommand in the package car_t265_interface.
typedef struct car_t265_interface__srv__SendCommand_Response
{
  /// 是否成功
  bool success;
  /// 消息
  rosidl_runtime_c__String message;
} car_t265_interface__srv__SendCommand_Response;

// Struct for a sequence of car_t265_interface__srv__SendCommand_Response.
typedef struct car_t265_interface__srv__SendCommand_Response__Sequence
{
  car_t265_interface__srv__SendCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_t265_interface__srv__SendCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__STRUCT_H_
