// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecanumbot_msgs:msg/OpenCRState.idl
// generated code does not contain a copyright notice

#ifndef MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__STRUCT_H_
#define MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/OpenCRState in the package mecanumbot_msgs.
typedef struct mecanumbot_msgs__msg__OpenCRState
{
  std_msgs__msg__Header header;
  /// goal velocities for wheels
  int16_t cmd_vel_bl;
  int16_t cmd_vel_br;
  int16_t cmd_vel_fl;
  int16_t cmd_vel_fr;
  /// measured velocities for wheels
  int16_t vel_bl;
  int16_t vel_br;
  int16_t vel_fl;
  int16_t vel_fr;
  /// measured positions for wheels
  int16_t pos_bl;
  int16_t pos_br;
  int16_t pos_fl;
  int16_t pos_fr;
  /// measured currents for wheels
  int16_t curr_bl;
  int16_t curr_br;
  int16_t curr_fl;
  int16_t curr_fr;
  /// measured accelerations for wheels
  int16_t acc_bl;
  int16_t acc_br;
  int16_t acc_fl;
  int16_t acc_fr;
  /// goal positions for neck and grabbers
  int16_t pos_n;
  int16_t pos_gl;
  int16_t pos_gr;
  /// sensory data
  /// IMU data
  float battery_voltage;
  float imu_angular_vel_x;
  float imu_angular_vel_y;
  float imu_angular_vel_z;
  float imu_linear_acc_x;
  float imu_linear_acc_y;
  float imu_linear_acc_z;
  float imu_magnetic_x;
  float imu_magnetic_y;
  float imu_magnetic_z;
  float imu_orientation_w;
  float imu_orientation_x;
  float imu_orientation_y;
  float imu_orientation_z;
} mecanumbot_msgs__msg__OpenCRState;

// Struct for a sequence of mecanumbot_msgs__msg__OpenCRState.
typedef struct mecanumbot_msgs__msg__OpenCRState__Sequence
{
  mecanumbot_msgs__msg__OpenCRState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecanumbot_msgs__msg__OpenCRState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECANUMBOT_MSGS__MSG__DETAIL__OPEN_CR_STATE__STRUCT_H_
