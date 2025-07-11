// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_t265_interface:msg/SerialData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_t265_interface/msg/detail/serial_data__rosidl_typesupport_introspection_c.h"
#include "car_t265_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_t265_interface/msg/detail/serial_data__functions.h"
#include "car_t265_interface/msg/detail/serial_data__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_t265_interface__msg__SerialData__init(message_memory);
}

void car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_fini_function(void * message_memory)
{
  car_t265_interface__msg__SerialData__fini(message_memory);
}

size_t car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__size_function__SerialData__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__get_const_function__SerialData__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__get_function__SerialData__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__fetch_function__SerialData__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__get_const_function__SerialData__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__assign_function__SerialData__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__get_function__SerialData__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__resize_function__SerialData__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_t265_interface__msg__SerialData, data),  // bytes offset in struct
    NULL,  // default value
    car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__size_function__SerialData__data,  // size() function pointer
    car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__get_const_function__SerialData__data,  // get_const(index) function pointer
    car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__get_function__SerialData__data,  // get(index) function pointer
    car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__fetch_function__SerialData__data,  // fetch(index, &value) function pointer
    car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__assign_function__SerialData__data,  // assign(index, value) function pointer
    car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__resize_function__SerialData__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_message_members = {
  "car_t265_interface__msg",  // message namespace
  "SerialData",  // message name
  1,  // number of fields
  sizeof(car_t265_interface__msg__SerialData),
  car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_message_member_array,  // message members
  car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_init_function,  // function to initialize message memory (memory has to be allocated)
  car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_message_type_support_handle = {
  0,
  &car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_t265_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_t265_interface, msg, SerialData)() {
  if (!car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_message_type_support_handle.typesupport_identifier) {
    car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &car_t265_interface__msg__SerialData__rosidl_typesupport_introspection_c__SerialData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
