// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mecanumbot_msgs:msg/OpenCRState.idl
// generated code does not contain a copyright notice
#include "mecanumbot_msgs/msg/detail/open_cr_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mecanumbot_msgs__msg__OpenCRState__init(mecanumbot_msgs__msg__OpenCRState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mecanumbot_msgs__msg__OpenCRState__fini(msg);
    return false;
  }
  // cmd_vel_bl
  // cmd_vel_br
  // cmd_vel_fl
  // cmd_vel_fr
  // vel_bl
  // vel_br
  // vel_fl
  // vel_fr
  // pos_bl
  // pos_br
  // pos_fl
  // pos_fr
  // curr_bl
  // curr_br
  // curr_fl
  // curr_fr
  // acc_bl
  // acc_br
  // acc_fl
  // acc_fr
  // pos_n
  // pos_gl
  // pos_gr
  // battery_voltage
  // imu_angular_vel_x
  // imu_angular_vel_y
  // imu_angular_vel_z
  // imu_linear_acc_x
  // imu_linear_acc_y
  // imu_linear_acc_z
  // imu_magnetic_x
  // imu_magnetic_y
  // imu_magnetic_z
  // imu_orientation_w
  // imu_orientation_x
  // imu_orientation_y
  // imu_orientation_z
  return true;
}

void
mecanumbot_msgs__msg__OpenCRState__fini(mecanumbot_msgs__msg__OpenCRState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cmd_vel_bl
  // cmd_vel_br
  // cmd_vel_fl
  // cmd_vel_fr
  // vel_bl
  // vel_br
  // vel_fl
  // vel_fr
  // pos_bl
  // pos_br
  // pos_fl
  // pos_fr
  // curr_bl
  // curr_br
  // curr_fl
  // curr_fr
  // acc_bl
  // acc_br
  // acc_fl
  // acc_fr
  // pos_n
  // pos_gl
  // pos_gr
  // battery_voltage
  // imu_angular_vel_x
  // imu_angular_vel_y
  // imu_angular_vel_z
  // imu_linear_acc_x
  // imu_linear_acc_y
  // imu_linear_acc_z
  // imu_magnetic_x
  // imu_magnetic_y
  // imu_magnetic_z
  // imu_orientation_w
  // imu_orientation_x
  // imu_orientation_y
  // imu_orientation_z
}

bool
mecanumbot_msgs__msg__OpenCRState__are_equal(const mecanumbot_msgs__msg__OpenCRState * lhs, const mecanumbot_msgs__msg__OpenCRState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // cmd_vel_bl
  if (lhs->cmd_vel_bl != rhs->cmd_vel_bl) {
    return false;
  }
  // cmd_vel_br
  if (lhs->cmd_vel_br != rhs->cmd_vel_br) {
    return false;
  }
  // cmd_vel_fl
  if (lhs->cmd_vel_fl != rhs->cmd_vel_fl) {
    return false;
  }
  // cmd_vel_fr
  if (lhs->cmd_vel_fr != rhs->cmd_vel_fr) {
    return false;
  }
  // vel_bl
  if (lhs->vel_bl != rhs->vel_bl) {
    return false;
  }
  // vel_br
  if (lhs->vel_br != rhs->vel_br) {
    return false;
  }
  // vel_fl
  if (lhs->vel_fl != rhs->vel_fl) {
    return false;
  }
  // vel_fr
  if (lhs->vel_fr != rhs->vel_fr) {
    return false;
  }
  // pos_bl
  if (lhs->pos_bl != rhs->pos_bl) {
    return false;
  }
  // pos_br
  if (lhs->pos_br != rhs->pos_br) {
    return false;
  }
  // pos_fl
  if (lhs->pos_fl != rhs->pos_fl) {
    return false;
  }
  // pos_fr
  if (lhs->pos_fr != rhs->pos_fr) {
    return false;
  }
  // curr_bl
  if (lhs->curr_bl != rhs->curr_bl) {
    return false;
  }
  // curr_br
  if (lhs->curr_br != rhs->curr_br) {
    return false;
  }
  // curr_fl
  if (lhs->curr_fl != rhs->curr_fl) {
    return false;
  }
  // curr_fr
  if (lhs->curr_fr != rhs->curr_fr) {
    return false;
  }
  // acc_bl
  if (lhs->acc_bl != rhs->acc_bl) {
    return false;
  }
  // acc_br
  if (lhs->acc_br != rhs->acc_br) {
    return false;
  }
  // acc_fl
  if (lhs->acc_fl != rhs->acc_fl) {
    return false;
  }
  // acc_fr
  if (lhs->acc_fr != rhs->acc_fr) {
    return false;
  }
  // pos_n
  if (lhs->pos_n != rhs->pos_n) {
    return false;
  }
  // pos_gl
  if (lhs->pos_gl != rhs->pos_gl) {
    return false;
  }
  // pos_gr
  if (lhs->pos_gr != rhs->pos_gr) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // imu_angular_vel_x
  if (lhs->imu_angular_vel_x != rhs->imu_angular_vel_x) {
    return false;
  }
  // imu_angular_vel_y
  if (lhs->imu_angular_vel_y != rhs->imu_angular_vel_y) {
    return false;
  }
  // imu_angular_vel_z
  if (lhs->imu_angular_vel_z != rhs->imu_angular_vel_z) {
    return false;
  }
  // imu_linear_acc_x
  if (lhs->imu_linear_acc_x != rhs->imu_linear_acc_x) {
    return false;
  }
  // imu_linear_acc_y
  if (lhs->imu_linear_acc_y != rhs->imu_linear_acc_y) {
    return false;
  }
  // imu_linear_acc_z
  if (lhs->imu_linear_acc_z != rhs->imu_linear_acc_z) {
    return false;
  }
  // imu_magnetic_x
  if (lhs->imu_magnetic_x != rhs->imu_magnetic_x) {
    return false;
  }
  // imu_magnetic_y
  if (lhs->imu_magnetic_y != rhs->imu_magnetic_y) {
    return false;
  }
  // imu_magnetic_z
  if (lhs->imu_magnetic_z != rhs->imu_magnetic_z) {
    return false;
  }
  // imu_orientation_w
  if (lhs->imu_orientation_w != rhs->imu_orientation_w) {
    return false;
  }
  // imu_orientation_x
  if (lhs->imu_orientation_x != rhs->imu_orientation_x) {
    return false;
  }
  // imu_orientation_y
  if (lhs->imu_orientation_y != rhs->imu_orientation_y) {
    return false;
  }
  // imu_orientation_z
  if (lhs->imu_orientation_z != rhs->imu_orientation_z) {
    return false;
  }
  return true;
}

bool
mecanumbot_msgs__msg__OpenCRState__copy(
  const mecanumbot_msgs__msg__OpenCRState * input,
  mecanumbot_msgs__msg__OpenCRState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // cmd_vel_bl
  output->cmd_vel_bl = input->cmd_vel_bl;
  // cmd_vel_br
  output->cmd_vel_br = input->cmd_vel_br;
  // cmd_vel_fl
  output->cmd_vel_fl = input->cmd_vel_fl;
  // cmd_vel_fr
  output->cmd_vel_fr = input->cmd_vel_fr;
  // vel_bl
  output->vel_bl = input->vel_bl;
  // vel_br
  output->vel_br = input->vel_br;
  // vel_fl
  output->vel_fl = input->vel_fl;
  // vel_fr
  output->vel_fr = input->vel_fr;
  // pos_bl
  output->pos_bl = input->pos_bl;
  // pos_br
  output->pos_br = input->pos_br;
  // pos_fl
  output->pos_fl = input->pos_fl;
  // pos_fr
  output->pos_fr = input->pos_fr;
  // curr_bl
  output->curr_bl = input->curr_bl;
  // curr_br
  output->curr_br = input->curr_br;
  // curr_fl
  output->curr_fl = input->curr_fl;
  // curr_fr
  output->curr_fr = input->curr_fr;
  // acc_bl
  output->acc_bl = input->acc_bl;
  // acc_br
  output->acc_br = input->acc_br;
  // acc_fl
  output->acc_fl = input->acc_fl;
  // acc_fr
  output->acc_fr = input->acc_fr;
  // pos_n
  output->pos_n = input->pos_n;
  // pos_gl
  output->pos_gl = input->pos_gl;
  // pos_gr
  output->pos_gr = input->pos_gr;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // imu_angular_vel_x
  output->imu_angular_vel_x = input->imu_angular_vel_x;
  // imu_angular_vel_y
  output->imu_angular_vel_y = input->imu_angular_vel_y;
  // imu_angular_vel_z
  output->imu_angular_vel_z = input->imu_angular_vel_z;
  // imu_linear_acc_x
  output->imu_linear_acc_x = input->imu_linear_acc_x;
  // imu_linear_acc_y
  output->imu_linear_acc_y = input->imu_linear_acc_y;
  // imu_linear_acc_z
  output->imu_linear_acc_z = input->imu_linear_acc_z;
  // imu_magnetic_x
  output->imu_magnetic_x = input->imu_magnetic_x;
  // imu_magnetic_y
  output->imu_magnetic_y = input->imu_magnetic_y;
  // imu_magnetic_z
  output->imu_magnetic_z = input->imu_magnetic_z;
  // imu_orientation_w
  output->imu_orientation_w = input->imu_orientation_w;
  // imu_orientation_x
  output->imu_orientation_x = input->imu_orientation_x;
  // imu_orientation_y
  output->imu_orientation_y = input->imu_orientation_y;
  // imu_orientation_z
  output->imu_orientation_z = input->imu_orientation_z;
  return true;
}

mecanumbot_msgs__msg__OpenCRState *
mecanumbot_msgs__msg__OpenCRState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecanumbot_msgs__msg__OpenCRState * msg = (mecanumbot_msgs__msg__OpenCRState *)allocator.allocate(sizeof(mecanumbot_msgs__msg__OpenCRState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mecanumbot_msgs__msg__OpenCRState));
  bool success = mecanumbot_msgs__msg__OpenCRState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mecanumbot_msgs__msg__OpenCRState__destroy(mecanumbot_msgs__msg__OpenCRState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mecanumbot_msgs__msg__OpenCRState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mecanumbot_msgs__msg__OpenCRState__Sequence__init(mecanumbot_msgs__msg__OpenCRState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecanumbot_msgs__msg__OpenCRState * data = NULL;

  if (size) {
    data = (mecanumbot_msgs__msg__OpenCRState *)allocator.zero_allocate(size, sizeof(mecanumbot_msgs__msg__OpenCRState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mecanumbot_msgs__msg__OpenCRState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mecanumbot_msgs__msg__OpenCRState__fini(&data[i - 1]);
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
mecanumbot_msgs__msg__OpenCRState__Sequence__fini(mecanumbot_msgs__msg__OpenCRState__Sequence * array)
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
      mecanumbot_msgs__msg__OpenCRState__fini(&array->data[i]);
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

mecanumbot_msgs__msg__OpenCRState__Sequence *
mecanumbot_msgs__msg__OpenCRState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mecanumbot_msgs__msg__OpenCRState__Sequence * array = (mecanumbot_msgs__msg__OpenCRState__Sequence *)allocator.allocate(sizeof(mecanumbot_msgs__msg__OpenCRState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mecanumbot_msgs__msg__OpenCRState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mecanumbot_msgs__msg__OpenCRState__Sequence__destroy(mecanumbot_msgs__msg__OpenCRState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mecanumbot_msgs__msg__OpenCRState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mecanumbot_msgs__msg__OpenCRState__Sequence__are_equal(const mecanumbot_msgs__msg__OpenCRState__Sequence * lhs, const mecanumbot_msgs__msg__OpenCRState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mecanumbot_msgs__msg__OpenCRState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mecanumbot_msgs__msg__OpenCRState__Sequence__copy(
  const mecanumbot_msgs__msg__OpenCRState__Sequence * input,
  mecanumbot_msgs__msg__OpenCRState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mecanumbot_msgs__msg__OpenCRState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mecanumbot_msgs__msg__OpenCRState * data =
      (mecanumbot_msgs__msg__OpenCRState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mecanumbot_msgs__msg__OpenCRState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mecanumbot_msgs__msg__OpenCRState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mecanumbot_msgs__msg__OpenCRState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
