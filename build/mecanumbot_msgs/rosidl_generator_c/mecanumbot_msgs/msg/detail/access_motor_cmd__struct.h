// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mecanumbot_msgs:msg/AccessMotorCmd.idl
// generated code does not contain a copyright notice

#ifndef MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__STRUCT_H_
#define MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AccessMotorCmd in the package mecanumbot_msgs.
typedef struct mecanumbot_msgs__msg__AccessMotorCmd
{
  float n_pos;
  float gl_pos;
  float gr_pos;
} mecanumbot_msgs__msg__AccessMotorCmd;

// Struct for a sequence of mecanumbot_msgs__msg__AccessMotorCmd.
typedef struct mecanumbot_msgs__msg__AccessMotorCmd__Sequence
{
  mecanumbot_msgs__msg__AccessMotorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mecanumbot_msgs__msg__AccessMotorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECANUMBOT_MSGS__MSG__DETAIL__ACCESS_MOTOR_CMD__STRUCT_H_
