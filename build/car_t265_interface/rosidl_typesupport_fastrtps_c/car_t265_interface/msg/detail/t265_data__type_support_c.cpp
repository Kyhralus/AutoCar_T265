// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from car_t265_interface:msg/T265Data.idl
// generated code does not contain a copyright notice
#include "car_t265_interface/msg/detail/t265_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "car_t265_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "car_t265_interface/msg/detail/t265_data__struct.h"
#include "car_t265_interface/msg/detail/t265_data__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _T265Data__ros_msg_type = car_t265_interface__msg__T265Data;

static bool _T265Data__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _T265Data__ros_msg_type * ros_message = static_cast<const _T265Data__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_x
  {
    cdr << ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr << ros_message->pos_y;
  }

  // Field name: pos_z
  {
    cdr << ros_message->pos_z;
  }

  // Field name: confidence
  {
    cdr << ros_message->confidence;
  }

  // Field name: pos_orient_x
  {
    cdr << ros_message->pos_orient_x;
  }

  // Field name: pos_orient_y
  {
    cdr << ros_message->pos_orient_y;
  }

  // Field name: pos_orient_z
  {
    cdr << ros_message->pos_orient_z;
  }

  // Field name: pos_orient_w
  {
    cdr << ros_message->pos_orient_w;
  }

  // Field name: vel_linear_x
  {
    cdr << ros_message->vel_linear_x;
  }

  // Field name: vel_linear_y
  {
    cdr << ros_message->vel_linear_y;
  }

  // Field name: vel_linear_z
  {
    cdr << ros_message->vel_linear_z;
  }

  // Field name: vel_angular_x
  {
    cdr << ros_message->vel_angular_x;
  }

  // Field name: vel_angular_y
  {
    cdr << ros_message->vel_angular_y;
  }

  // Field name: vel_angular_z
  {
    cdr << ros_message->vel_angular_z;
  }

  // Field name: acc_linear_x
  {
    cdr << ros_message->acc_linear_x;
  }

  // Field name: acc_linear_y
  {
    cdr << ros_message->acc_linear_y;
  }

  // Field name: acc_linear_z
  {
    cdr << ros_message->acc_linear_z;
  }

  // Field name: acc_angular_x
  {
    cdr << ros_message->acc_angular_x;
  }

  // Field name: acc_angular_y
  {
    cdr << ros_message->acc_angular_y;
  }

  // Field name: acc_angular_z
  {
    cdr << ros_message->acc_angular_z;
  }

  return true;
}

static bool _T265Data__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _T265Data__ros_msg_type * ros_message = static_cast<_T265Data__ros_msg_type *>(untyped_ros_message);
  // Field name: pos_x
  {
    cdr >> ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr >> ros_message->pos_y;
  }

  // Field name: pos_z
  {
    cdr >> ros_message->pos_z;
  }

  // Field name: confidence
  {
    cdr >> ros_message->confidence;
  }

  // Field name: pos_orient_x
  {
    cdr >> ros_message->pos_orient_x;
  }

  // Field name: pos_orient_y
  {
    cdr >> ros_message->pos_orient_y;
  }

  // Field name: pos_orient_z
  {
    cdr >> ros_message->pos_orient_z;
  }

  // Field name: pos_orient_w
  {
    cdr >> ros_message->pos_orient_w;
  }

  // Field name: vel_linear_x
  {
    cdr >> ros_message->vel_linear_x;
  }

  // Field name: vel_linear_y
  {
    cdr >> ros_message->vel_linear_y;
  }

  // Field name: vel_linear_z
  {
    cdr >> ros_message->vel_linear_z;
  }

  // Field name: vel_angular_x
  {
    cdr >> ros_message->vel_angular_x;
  }

  // Field name: vel_angular_y
  {
    cdr >> ros_message->vel_angular_y;
  }

  // Field name: vel_angular_z
  {
    cdr >> ros_message->vel_angular_z;
  }

  // Field name: acc_linear_x
  {
    cdr >> ros_message->acc_linear_x;
  }

  // Field name: acc_linear_y
  {
    cdr >> ros_message->acc_linear_y;
  }

  // Field name: acc_linear_z
  {
    cdr >> ros_message->acc_linear_z;
  }

  // Field name: acc_angular_x
  {
    cdr >> ros_message->acc_angular_x;
  }

  // Field name: acc_angular_y
  {
    cdr >> ros_message->acc_angular_y;
  }

  // Field name: acc_angular_z
  {
    cdr >> ros_message->acc_angular_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_t265_interface
size_t get_serialized_size_car_t265_interface__msg__T265Data(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _T265Data__ros_msg_type * ros_message = static_cast<const _T265Data__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pos_x
  {
    size_t item_size = sizeof(ros_message->pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_y
  {
    size_t item_size = sizeof(ros_message->pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_z
  {
    size_t item_size = sizeof(ros_message->pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence
  {
    size_t item_size = sizeof(ros_message->confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_orient_x
  {
    size_t item_size = sizeof(ros_message->pos_orient_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_orient_y
  {
    size_t item_size = sizeof(ros_message->pos_orient_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_orient_z
  {
    size_t item_size = sizeof(ros_message->pos_orient_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_orient_w
  {
    size_t item_size = sizeof(ros_message->pos_orient_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_linear_x
  {
    size_t item_size = sizeof(ros_message->vel_linear_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_linear_y
  {
    size_t item_size = sizeof(ros_message->vel_linear_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_linear_z
  {
    size_t item_size = sizeof(ros_message->vel_linear_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_angular_x
  {
    size_t item_size = sizeof(ros_message->vel_angular_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_angular_y
  {
    size_t item_size = sizeof(ros_message->vel_angular_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_angular_z
  {
    size_t item_size = sizeof(ros_message->vel_angular_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_linear_x
  {
    size_t item_size = sizeof(ros_message->acc_linear_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_linear_y
  {
    size_t item_size = sizeof(ros_message->acc_linear_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_linear_z
  {
    size_t item_size = sizeof(ros_message->acc_linear_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_angular_x
  {
    size_t item_size = sizeof(ros_message->acc_angular_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_angular_y
  {
    size_t item_size = sizeof(ros_message->acc_angular_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_angular_z
  {
    size_t item_size = sizeof(ros_message->acc_angular_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _T265Data__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_car_t265_interface__msg__T265Data(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_car_t265_interface
size_t max_serialized_size_car_t265_interface__msg__T265Data(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pos_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_orient_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_orient_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_orient_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_orient_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_linear_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_linear_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_linear_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_angular_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_angular_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_angular_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_linear_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_linear_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_linear_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_angular_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_angular_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_angular_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = car_t265_interface__msg__T265Data;
    is_plain =
      (
      offsetof(DataType, acc_angular_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _T265Data__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_car_t265_interface__msg__T265Data(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_T265Data = {
  "car_t265_interface::msg",
  "T265Data",
  _T265Data__cdr_serialize,
  _T265Data__cdr_deserialize,
  _T265Data__get_serialized_size,
  _T265Data__max_serialized_size
};

static rosidl_message_type_support_t _T265Data__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_T265Data,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, car_t265_interface, msg, T265Data)() {
  return &_T265Data__type_support;
}

#if defined(__cplusplus)
}
#endif
