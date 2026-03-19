// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecanumbot_msgs:msg/AccessMotorCmd.idl
// generated code does not contain a copyright notice
#include "mecanumbot_msgs/msg/detail/access_motor_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mecanumbot_msgs__msg__AccessMotorCmd__init(mecanumbot_msgs__msg__AccessMotorCmd * msg)
{
  if (!msg) {
    return false;
  }
  // n_pos
  // gl_pos
  // gr_pos
  return true;
}

void
mecanumbot_msgs__msg__AccessMotorCmd__fini(mecanumbot_msgs__msg__AccessMotorCmd * msg)
{
  if (!msg) {
    return;
  }
  // n_pos
  // gl_pos
  // gr_pos
}

bool
mecanumbot_msgs__msg__AccessMotorCmd__are_equal(const mecanumbot_msgs__msg__AccessMotorCmd * lhs, const mecanumbot_msgs__msg__AccessMotorCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // n_pos
  if (lhs->n_pos != rhs->n_pos) {
    return false;
  }
  // gl_pos
  if (lhs->gl_pos != rhs->gl_pos) {
    return false;
  }
  // gr_pos
  if (lhs->gr_pos != rhs->gr_pos) {
    return false;
  }
  return true;
}

bool
mecanumbot_msgs__msg__AccessMotorCmd__copy(
  const mecanumbot_msgs__msg__AccessMotorCmd * input,
  mecanumbot_msgs__msg__AccessMotorCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // n_pos
  output->n_pos = input->n_pos;
  // gl_pos
  output->gl_pos = input->gl_pos;
  // gr_pos
  output->gr_pos = input->gr_pos;
  return true;
}

mecanumbot_msgs__msg__AccessMotorCmd *
mecanumbot_msgs__msg__AccessMotorCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecanumbot_msgs__msg__AccessMotorCmd * msg = (mecanumbot_msgs__msg__AccessMotorCmd *)allocator.allocate(sizeof(mecanumbot_msgs__msg__AccessMotorCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecanumbot_msgs__msg__AccessMotorCmd));
  bool success = mecanumbot_msgs__msg__AccessMotorCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecanumbot_msgs__msg__AccessMotorCmd__destroy(mecanumbot_msgs__msg__AccessMotorCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecanumbot_msgs__msg__AccessMotorCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecanumbot_msgs__msg__AccessMotorCmd__Sequence__init(mecanumbot_msgs__msg__AccessMotorCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecanumbot_msgs__msg__AccessMotorCmd * data = NULL;

  if (size) {
    data = (mecanumbot_msgs__msg__AccessMotorCmd *)allocator.zero_allocate(size, sizeof(mecanumbot_msgs__msg__AccessMotorCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecanumbot_msgs__msg__AccessMotorCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecanumbot_msgs__msg__AccessMotorCmd__fini(&data[i - 1]);
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
mecanumbot_msgs__msg__AccessMotorCmd__Sequence__fini(mecanumbot_msgs__msg__AccessMotorCmd__Sequence * array)
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
      mecanumbot_msgs__msg__AccessMotorCmd__fini(&array->data[i]);
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

mecanumbot_msgs__msg__AccessMotorCmd__Sequence *
mecanumbot_msgs__msg__AccessMotorCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecanumbot_msgs__msg__AccessMotorCmd__Sequence * array = (mecanumbot_msgs__msg__AccessMotorCmd__Sequence *)allocator.allocate(sizeof(mecanumbot_msgs__msg__AccessMotorCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecanumbot_msgs__msg__AccessMotorCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecanumbot_msgs__msg__AccessMotorCmd__Sequence__destroy(mecanumbot_msgs__msg__AccessMotorCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecanumbot_msgs__msg__AccessMotorCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecanumbot_msgs__msg__AccessMotorCmd__Sequence__are_equal(const mecanumbot_msgs__msg__AccessMotorCmd__Sequence * lhs, const mecanumbot_msgs__msg__AccessMotorCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecanumbot_msgs__msg__AccessMotorCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecanumbot_msgs__msg__AccessMotorCmd__Sequence__copy(
  const mecanumbot_msgs__msg__AccessMotorCmd__Sequence * input,
  mecanumbot_msgs__msg__AccessMotorCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecanumbot_msgs__msg__AccessMotorCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecanumbot_msgs__msg__AccessMotorCmd * data =
      (mecanumbot_msgs__msg__AccessMotorCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecanumbot_msgs__msg__AccessMotorCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecanumbot_msgs__msg__AccessMotorCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecanumbot_msgs__msg__AccessMotorCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
