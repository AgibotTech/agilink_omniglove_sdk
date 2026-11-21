// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/TactileRegion.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/tactile_region__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__TactileRegion__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0xfa, 0x62, 0x16, 0x3b, 0x0a, 0x4d, 0xfc,
      0xbe, 0x2a, 0x46, 0x9d, 0xc3, 0x17, 0x76, 0x72,
      0x74, 0x95, 0x79, 0x59, 0x79, 0x1c, 0x13, 0xe8,
      0x85, 0x31, 0x41, 0x87, 0xea, 0xf4, 0xce, 0xe9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char omniglove_interfaces__msg__TactileRegion__TYPE_NAME[] = "omniglove_interfaces/msg/TactileRegion";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__TactileRegion__FIELD_NAME__rows[] = "rows";
static char omniglove_interfaces__msg__TactileRegion__FIELD_NAME__columns[] = "columns";
static char omniglove_interfaces__msg__TactileRegion__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__TactileRegion__FIELDS[] = {
  {
    {omniglove_interfaces__msg__TactileRegion__FIELD_NAME__rows, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileRegion__FIELD_NAME__columns, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileRegion__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__TactileRegion__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
      {omniglove_interfaces__msg__TactileRegion__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 rows\n"
  "uint32 columns\n"
  "uint8[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__TactileRegion__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__TactileRegion__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__TactileRegion__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
