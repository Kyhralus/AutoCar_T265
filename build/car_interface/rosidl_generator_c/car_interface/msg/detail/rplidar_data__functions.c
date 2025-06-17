// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interface:msg/RplidarData.idl
// generated code does not contain a copyright notice
#include "car_interface/msg/detail/rplidar_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
car_interface__msg__RplidarData__init(car_interface__msg__RplidarData * msg)
{
  if (!msg) {
    return false;
  }
  // dist
  // theta
  return true;
}

void
car_interface__msg__RplidarData__fini(car_interface__msg__RplidarData * msg)
{
  if (!msg) {
    return;
  }
  // dist
  // theta
}

bool
car_interface__msg__RplidarData__are_equal(const car_interface__msg__RplidarData * lhs, const car_interface__msg__RplidarData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dist
  if (lhs->dist != rhs->dist) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
car_interface__msg__RplidarData__copy(
  const car_interface__msg__RplidarData * input,
  car_interface__msg__RplidarData * output)
{
  if (!input || !output) {
    return false;
  }
  // dist
  output->dist = input->dist;
  // theta
  output->theta = input->theta;
  return true;
}

car_interface__msg__RplidarData *
car_interface__msg__RplidarData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interface__msg__RplidarData * msg = (car_interface__msg__RplidarData *)allocator.allocate(sizeof(car_interface__msg__RplidarData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interface__msg__RplidarData));
  bool success = car_interface__msg__RplidarData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
car_interface__msg__RplidarData__destroy(car_interface__msg__RplidarData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    car_interface__msg__RplidarData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
car_interface__msg__RplidarData__Sequence__init(car_interface__msg__RplidarData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interface__msg__RplidarData * data = NULL;

  if (size) {
    data = (car_interface__msg__RplidarData *)allocator.zero_allocate(size, sizeof(car_interface__msg__RplidarData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interface__msg__RplidarData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interface__msg__RplidarData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
car_interface__msg__RplidarData__Sequence__fini(car_interface__msg__RplidarData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      car_interface__msg__RplidarData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

car_interface__msg__RplidarData__Sequence *
car_interface__msg__RplidarData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interface__msg__RplidarData__Sequence * array = (car_interface__msg__RplidarData__Sequence *)allocator.allocate(sizeof(car_interface__msg__RplidarData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = car_interface__msg__RplidarData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
car_interface__msg__RplidarData__Sequence__destroy(car_interface__msg__RplidarData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    car_interface__msg__RplidarData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
car_interface__msg__RplidarData__Sequence__are_equal(const car_interface__msg__RplidarData__Sequence * lhs, const car_interface__msg__RplidarData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interface__msg__RplidarData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interface__msg__RplidarData__Sequence__copy(
  const car_interface__msg__RplidarData__Sequence * input,
  car_interface__msg__RplidarData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interface__msg__RplidarData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    car_interface__msg__RplidarData * data =
      (car_interface__msg__RplidarData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interface__msg__RplidarData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          car_interface__msg__RplidarData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!car_interface__msg__RplidarData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
