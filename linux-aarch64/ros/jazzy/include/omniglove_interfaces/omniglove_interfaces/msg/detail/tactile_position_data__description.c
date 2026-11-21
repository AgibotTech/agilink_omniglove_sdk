// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/TactilePositionData.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/tactile_position_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__TactilePositionData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x0d, 0xaf, 0x58, 0x3c, 0x36, 0x1a, 0xf1,
      0x14, 0x3e, 0x6e, 0xf6, 0x95, 0x86, 0xd9, 0xe4,
      0x94, 0x76, 0xf7, 0x91, 0x39, 0x69, 0xd2, 0x0f,
      0x40, 0x6a, 0x80, 0x19, 0x25, 0xaf, 0x61, 0x18,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "omniglove_interfaces/msg/detail/tactile_point_position__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t omniglove_interfaces__msg__TactilePointPosition__EXPECTED_HASH = {1, {
    0x66, 0x50, 0x5d, 0x95, 0x33, 0xcb, 0x07, 0xb4,
    0x9b, 0x51, 0x0f, 0x06, 0x9e, 0x73, 0x77, 0x9b,
    0x90, 0x80, 0x36, 0xfa, 0x94, 0x2d, 0xfa, 0x19,
    0xf7, 0xe9, 0x4e, 0xb7, 0x67, 0x2f, 0x73, 0x23,
  }};
#endif

static char omniglove_interfaces__msg__TactilePositionData__TYPE_NAME[] = "omniglove_interfaces/msg/TactilePositionData";
static char omniglove_interfaces__msg__TactilePointPosition__TYPE_NAME[] = "omniglove_interfaces/msg/TactilePointPosition";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__TactilePositionData__FIELD_NAME__count[] = "count";
static char omniglove_interfaces__msg__TactilePositionData__FIELD_NAME__coordinate_frame[] = "coordinate_frame";
static char omniglove_interfaces__msg__TactilePositionData__FIELD_NAME__unit[] = "unit";
static char omniglove_interfaces__msg__TactilePositionData__FIELD_NAME__points[] = "points";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__TactilePositionData__FIELDS[] = {
  {
    {omniglove_interfaces__msg__TactilePositionData__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactilePositionData__FIELD_NAME__coordinate_frame, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactilePositionData__FIELD_NAME__unit, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactilePositionData__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {omniglove_interfaces__msg__TactilePointPosition__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__TactilePositionData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {omniglove_interfaces__msg__TactilePointPosition__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__TactilePositionData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__TactilePositionData__TYPE_NAME, 44, 44},
      {omniglove_interfaces__msg__TactilePositionData__FIELDS, 4, 4},
    },
    {omniglove_interfaces__msg__TactilePositionData__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&omniglove_interfaces__msg__TactilePointPosition__EXPECTED_HASH, omniglove_interfaces__msg__TactilePointPosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = omniglove_interfaces__msg__TactilePointPosition__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0\n"
  "\n"
  "uint32 FRAME_WRIST=1\n"
  "uint32 UNIT_METER=1\n"
  "\n"
  "uint32 count\n"
  "uint32 coordinate_frame\n"
  "uint32 unit\n"
  "TactilePointPosition[] points";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__TactilePositionData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__TactilePositionData__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 185, 185},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__TactilePositionData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__TactilePositionData__get_individual_type_description_source(NULL),
    sources[1] = *omniglove_interfaces__msg__TactilePointPosition__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
