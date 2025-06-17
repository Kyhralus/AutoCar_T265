// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from car_t265_interface:msg/SerialData.idl
// generated code does not contain a copyright notice

#ifndef CAR_T265_INTERFACE__MSG__DETAIL__SERIAL_DATA__FUNCTIONS_H_
#define CAR_T265_INTERFACE__MSG__DETAIL__SERIAL_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "car_t265_interface/msg/rosidl_generator_c__visibility_control.h"

#include "car_t265_interface/msg/detail/serial_data__struct.h"

/// Initialize msg/SerialData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * car_t265_interface__msg__SerialData
 * )) before or use
 * car_t265_interface__msg__SerialData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
bool
car_t265_interface__msg__SerialData__init(car_t265_interface__msg__SerialData * msg);

/// Finalize msg/SerialData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
void
car_t265_interface__msg__SerialData__fini(car_t265_interface__msg__SerialData * msg);

/// Create msg/SerialData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * car_t265_interface__msg__SerialData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
car_t265_interface__msg__SerialData *
car_t265_interface__msg__SerialData__create();

/// Destroy msg/SerialData message.
/**
 * It calls
 * car_t265_interface__msg__SerialData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
void
car_t265_interface__msg__SerialData__destroy(car_t265_interface__msg__SerialData * msg);

/// Check for msg/SerialData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
bool
car_t265_interface__msg__SerialData__are_equal(const car_t265_interface__msg__SerialData * lhs, const car_t265_interface__msg__SerialData * rhs);

/// Copy a msg/SerialData message.
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
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
bool
car_t265_interface__msg__SerialData__copy(
  const car_t265_interface__msg__SerialData * input,
  car_t265_interface__msg__SerialData * output);

/// Initialize array of msg/SerialData messages.
/**
 * It allocates the memory for the number of elements and calls
 * car_t265_interface__msg__SerialData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
bool
car_t265_interface__msg__SerialData__Sequence__init(car_t265_interface__msg__SerialData__Sequence * array, size_t size);

/// Finalize array of msg/SerialData messages.
/**
 * It calls
 * car_t265_interface__msg__SerialData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
void
car_t265_interface__msg__SerialData__Sequence__fini(car_t265_interface__msg__SerialData__Sequence * array);

/// Create array of msg/SerialData messages.
/**
 * It allocates the memory for the array and calls
 * car_t265_interface__msg__SerialData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
car_t265_interface__msg__SerialData__Sequence *
car_t265_interface__msg__SerialData__Sequence__create(size_t size);

/// Destroy array of msg/SerialData messages.
/**
 * It calls
 * car_t265_interface__msg__SerialData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
void
car_t265_interface__msg__SerialData__Sequence__destroy(car_t265_interface__msg__SerialData__Sequence * array);

/// Check for msg/SerialData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
bool
car_t265_interface__msg__SerialData__Sequence__are_equal(const car_t265_interface__msg__SerialData__Sequence * lhs, const car_t265_interface__msg__SerialData__Sequence * rhs);

/// Copy an array of msg/SerialData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_car_t265_interface
bool
car_t265_interface__msg__SerialData__Sequence__copy(
  const car_t265_interface__msg__SerialData__Sequence * input,
  car_t265_interface__msg__SerialData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAR_T265_INTERFACE__MSG__DETAIL__SERIAL_DATA__FUNCTIONS_H_
