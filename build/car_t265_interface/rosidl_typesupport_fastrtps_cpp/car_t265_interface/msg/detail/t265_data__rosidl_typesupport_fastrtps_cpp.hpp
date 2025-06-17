// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from car_t265_interface:msg/T265Data.idl
// generated code does not contain a copyright notice

#ifndef CAR_T265_INTERFACE__MSG__DETAIL__T265_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CAR_T265_INTERFACE__MSG__DETAIL__T265_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "car_t265_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "car_t265_interface/msg/detail/t265_data__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace car_t265_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_t265_interface
cdr_serialize(
  const car_t265_interface::msg::T265Data & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_t265_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  car_t265_interface::msg::T265Data & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_t265_interface
get_serialized_size(
  const car_t265_interface::msg::T265Data & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_t265_interface
max_serialized_size_T265Data(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace car_t265_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_car_t265_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, car_t265_interface, msg, T265Data)();

#ifdef __cplusplus
}
#endif

#endif  // CAR_T265_INTERFACE__MSG__DETAIL__T265_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
