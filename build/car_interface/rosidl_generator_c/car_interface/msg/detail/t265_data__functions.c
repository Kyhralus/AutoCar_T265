// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_interface:msg/T265Data.idl
// generated code does not contain a copyright notice
#include "car_interface/msg/detail/t265_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
car_interface__msg__T265Data__init(car_interface__msg__T265Data * msg)
{
  if (!msg) {
    return false;
  }
  // pos_x
  // pos_y
  // pos_z
  // confidence
  // pos_orient_x
  // pos_orient_y
  // pos_orient_z
  // pos_orient_w
  // vel_linear_x
  // vel_linear_y
  // vel_linear_z
  // vel_angular_x
  // vel_angular_y
  // vel_angular_z
  // acc_linear_x
  // acc_linear_y
  // acc_linear_z
  // acc_angular_x
  // acc_angular_y
  // acc_angular_z
  return true;
}

void
car_interface__msg__T265Data__fini(car_interface__msg__T265Data * msg)
{
  if (!msg) {
    return;
  }
  // pos_x
  // pos_y
  // pos_z
  // confidence
  // pos_orient_x
  // pos_orient_y
  // pos_orient_z
  // pos_orient_w
  // vel_linear_x
  // vel_linear_y
  // vel_linear_z
  // vel_angular_x
  // vel_angular_y
  // vel_angular_z
  // acc_linear_x
  // acc_linear_y
  // acc_linear_z
  // acc_angular_x
  // acc_angular_y
  // acc_angular_z
}

bool
car_interface__msg__T265Data__are_equal(const car_interface__msg__T265Data * lhs, const car_interface__msg__T265Data * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_x
  if (lhs->pos_x != rhs->pos_x) {
    return false;
  }
  // pos_y
  if (lhs->pos_y != rhs->pos_y) {
    return false;
  }
  // pos_z
  if (lhs->pos_z != rhs->pos_z) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // pos_orient_x
  if (lhs->pos_orient_x != rhs->pos_orient_x) {
    return false;
  }
  // pos_orient_y
  if (lhs->pos_orient_y != rhs->pos_orient_y) {
    return false;
  }
  // pos_orient_z
  if (lhs->pos_orient_z != rhs->pos_orient_z) {
    return false;
  }
  // pos_orient_w
  if (lhs->pos_orient_w != rhs->pos_orient_w) {
    return false;
  }
  // vel_linear_x
  if (lhs->vel_linear_x != rhs->vel_linear_x) {
    return false;
  }
  // vel_linear_y
  if (lhs->vel_linear_y != rhs->vel_linear_y) {
    return false;
  }
  // vel_linear_z
  if (lhs->vel_linear_z != rhs->vel_linear_z) {
    return false;
  }
  // vel_angular_x
  if (lhs->vel_angular_x != rhs->vel_angular_x) {
    return false;
  }
  // vel_angular_y
  if (lhs->vel_angular_y != rhs->vel_angular_y) {
    return false;
  }
  // vel_angular_z
  if (lhs->vel_angular_z != rhs->vel_angular_z) {
    return false;
  }
  // acc_linear_x
  if (lhs->acc_linear_x != rhs->acc_linear_x) {
    return false;
  }
  // acc_linear_y
  if (lhs->acc_linear_y != rhs->acc_linear_y) {
    return false;
  }
  // acc_linear_z
  if (lhs->acc_linear_z != rhs->acc_linear_z) {
    return false;
  }
  // acc_angular_x
  if (lhs->acc_angular_x != rhs->acc_angular_x) {
    return false;
  }
  // acc_angular_y
  if (lhs->acc_angular_y != rhs->acc_angular_y) {
    return false;
  }
  // acc_angular_z
  if (lhs->acc_angular_z != rhs->acc_angular_z) {
    return false;
  }
  return true;
}

bool
car_interface__msg__T265Data__copy(
  const car_interface__msg__T265Data * input,
  car_interface__msg__T265Data * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_x
  output->pos_x = input->pos_x;
  // pos_y
  output->pos_y = input->pos_y;
  // pos_z
  output->pos_z = input->pos_z;
  // confidence
  output->confidence = input->confidence;
  // pos_orient_x
  output->pos_orient_x = input->pos_orient_x;
  // pos_orient_y
  output->pos_orient_y = input->pos_orient_y;
  // pos_orient_z
  output->pos_orient_z = input->pos_orient_z;
  // pos_orient_w
  output->pos_orient_w = input->pos_orient_w;
  // vel_linear_x
  output->vel_linear_x = input->vel_linear_x;
  // vel_linear_y
  output->vel_linear_y = input->vel_linear_y;
  // vel_linear_z
  output->vel_linear_z = input->vel_linear_z;
  // vel_angular_x
  output->vel_angular_x = input->vel_angular_x;
  // vel_angular_y
  output->vel_angular_y = input->vel_angular_y;
  // vel_angular_z
  output->vel_angular_z = input->vel_angular_z;
  // acc_linear_x
  output->acc_linear_x = input->acc_linear_x;
  // acc_linear_y
  output->acc_linear_y = input->acc_linear_y;
  // acc_linear_z
  output->acc_linear_z = input->acc_linear_z;
  // acc_angular_x
  output->acc_angular_x = input->acc_angular_x;
  // acc_angular_y
  output->acc_angular_y = input->acc_angular_y;
  // acc_angular_z
  output->acc_angular_z = input->acc_angular_z;
  return true;
}

car_interface__msg__T265Data *
car_interface__msg__T265Data__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interface__msg__T265Data * msg = (car_interface__msg__T265Data *)allocator.allocate(sizeof(car_interface__msg__T265Data), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_interface__msg__T265Data));
  bool success = car_interface__msg__T265Data__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
car_interface__msg__T265Data__destroy(car_interface__msg__T265Data * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    car_interface__msg__T265Data__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
car_interface__msg__T265Data__Sequence__init(car_interface__msg__T265Data__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interface__msg__T265Data * data = NULL;

  if (size) {
    data = (car_interface__msg__T265Data *)allocator.zero_allocate(size, sizeof(car_interface__msg__T265Data), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_interface__msg__T265Data__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_interface__msg__T265Data__fini(&data[i - 1]);
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
car_interface__msg__T265Data__Sequence__fini(car_interface__msg__T265Data__Sequence * array)
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
      car_interface__msg__T265Data__fini(&array->data[i]);
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

car_interface__msg__T265Data__Sequence *
car_interface__msg__T265Data__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_interface__msg__T265Data__Sequence * array = (car_interface__msg__T265Data__Sequence *)allocator.allocate(sizeof(car_interface__msg__T265Data__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = car_interface__msg__T265Data__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
car_interface__msg__T265Data__Sequence__destroy(car_interface__msg__T265Data__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    car_interface__msg__T265Data__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
car_interface__msg__T265Data__Sequence__are_equal(const car_interface__msg__T265Data__Sequence * lhs, const car_interface__msg__T265Data__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_interface__msg__T265Data__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_interface__msg__T265Data__Sequence__copy(
  const car_interface__msg__T265Data__Sequence * input,
  car_interface__msg__T265Data__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_interface__msg__T265Data);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    car_interface__msg__T265Data * data =
      (car_interface__msg__T265Data *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_interface__msg__T265Data__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          car_interface__msg__T265Data__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!car_interface__msg__T265Data__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
