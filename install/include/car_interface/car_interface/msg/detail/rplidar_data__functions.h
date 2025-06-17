// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from car_interface:msg/RplidarData.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__FUNCTIONS_H_
#define CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "car_interface/msg/rosidl_generator_c__visibility_control.h"

#include "car_interface/msg/detail/rplidar_data__struct.h"

/// Initialize msg/RplidarData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * car_interface__msg__RplidarData
 * )) before or use
 * car_interface__msg__RplidarData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
bool
car_interface__msg__RplidarData__init(car_interface__msg__RplidarData * msg);

/// Finalize msg/RplidarData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
void
car_interface__msg__RplidarData__fini(car_interface__msg__RplidarData * msg);

/// Create msg/RplidarData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * car_interface__msg__RplidarData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
car_interface__msg__RplidarData *
car_interface__msg__RplidarData__create();

/// Destroy msg/RplidarData message.
/**
 * It calls
 * car_interface__msg__RplidarData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
void
car_interface__msg__RplidarData__destroy(car_interface__msg__RplidarData * msg);

/// Check for msg/RplidarData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
bool
car_interface__msg__RplidarData__are_equal(const car_interface__msg__RplidarData * lhs, const car_interface__msg__RplidarData * rhs);

/// Copy a msg/RplidarData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
bool
car_interface__msg__RplidarData__copy(
  const car_interface__msg__RplidarData * input,
  car_interface__msg__RplidarData * output);

/// Initialize array of msg/RplidarData messages.
/**
 * It allocates the memory for the number of elements and calls
 * car_interface__msg__RplidarData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
bool
car_interface__msg__RplidarData__Sequence__init(car_interface__msg__RplidarData__Sequence * array, size_t size);

/// Finalize array of msg/RplidarData messages.
/**
 * It calls
 * car_interface__msg__RplidarData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
void
car_interface__msg__RplidarData__Sequence__fini(car_interface__msg__RplidarData__Sequence * array);

/// Create array of msg/RplidarData messages.
/**
 * It allocates the memory for the array and calls
 * car_interface__msg__RplidarData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
car_interface__msg__RplidarData__Sequence *
car_interface__msg__RplidarData__Sequence__create(size_t size);

/// Destroy array of msg/RplidarData messages.
/**
 * It calls
 * car_interface__msg__RplidarData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
void
car_interface__msg__RplidarData__Sequence__destroy(car_interface__msg__RplidarData__Sequence * array);

/// Check for msg/RplidarData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
bool
car_interface__msg__RplidarData__Sequence__are_equal(const car_interface__msg__RplidarData__Sequence * lhs, const car_interface__msg__RplidarData__Sequence * rhs);

/// Copy an array of msg/RplidarData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interface
bool
car_interface__msg__RplidarData__Sequence__copy(
  const car_interface__msg__RplidarData__Sequence * input,
  car_interface__msg__RplidarData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__FUNCTIONS_H_
