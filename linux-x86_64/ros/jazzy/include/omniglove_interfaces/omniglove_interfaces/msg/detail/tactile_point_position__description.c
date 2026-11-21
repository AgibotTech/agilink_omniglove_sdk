// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/TactilePointPosition.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/tactile_point_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__TactilePointPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x50, 0x5d, 0x95, 0x33, 0xcb, 0x07, 0xb4,
      0x9b, 0x51, 0x0f, 0x06, 0x9e, 0x73, 0x77, 0x9b,
      0x90, 0x80, 0x36, 0xfa, 0x94, 0x2d, 0xfa, 0x19,
      0xf7, 0xe9, 0x4e, 0xb7, 0x67, 0x2f, 0x73, 0x23,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char omniglove_interfaces__msg__TactilePointPosition__TYPE_NAME[] = "omniglove_interfaces/msg/TactilePointPosition";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__TactilePointPosition__FIELD_NAME__x[] = "x";
static char omniglove_interfaces__msg__TactilePointPosition__FIELD_NAME__y[] = "y";
static char omniglove_interfaces__msg__TactilePointPosition__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__TactilePointPosition__FIELDS[] = {
  {
    {omniglove_interfaces__msg__TactilePointPosition__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactilePointPosition__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactilePointPosition__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__TactilePointPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__TactilePointPosition__TYPE_NAME, 45, 45},
      {omniglove_interfaces__msg__TactilePointPosition__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0\n"
  "\n"
  "float32 x\n"
  "float32 y\n"
  "float32 z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__TactilePointPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__TactilePointPosition__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 94, 94},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__TactilePointPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__TactilePointPosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
