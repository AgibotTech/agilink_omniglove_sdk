// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/TactileFinger.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/tactile_finger__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__TactileFinger__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x2b, 0x4d, 0x6d, 0x9f, 0x43, 0x0c, 0xd8,
      0x01, 0x50, 0xa5, 0x2c, 0xf6, 0x58, 0xab, 0x44,
      0x7a, 0x04, 0xab, 0x14, 0x89, 0xe7, 0xc7, 0x59,
      0x3b, 0x30, 0x57, 0x4a, 0x8e, 0x8b, 0xf4, 0x7d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "omniglove_interfaces/msg/detail/tactile_region__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t omniglove_interfaces__msg__TactileRegion__EXPECTED_HASH = {1, {
    0x8b, 0xfa, 0x62, 0x16, 0x3b, 0x0a, 0x4d, 0xfc,
    0xbe, 0x2a, 0x46, 0x9d, 0xc3, 0x17, 0x76, 0x72,
    0x74, 0x95, 0x79, 0x59, 0x79, 0x1c, 0x13, 0xe8,
    0x85, 0x31, 0x41, 0x87, 0xea, 0xf4, 0xce, 0xe9,
  }};
#endif

static char omniglove_interfaces__msg__TactileFinger__TYPE_NAME[] = "omniglove_interfaces/msg/TactileFinger";
static char omniglove_interfaces__msg__TactileRegion__TYPE_NAME[] = "omniglove_interfaces/msg/TactileRegion";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__TactileFinger__FIELD_NAME__tip[] = "tip";
static char omniglove_interfaces__msg__TactileFinger__FIELD_NAME__pad[] = "pad";
static char omniglove_interfaces__msg__TactileFinger__FIELD_NAME__middle[] = "middle";
static char omniglove_interfaces__msg__TactileFinger__FIELD_NAME__root[] = "root";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__TactileFinger__FIELDS[] = {
  {
    {omniglove_interfaces__msg__TactileFinger__FIELD_NAME__tip, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileFinger__FIELD_NAME__pad, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileFinger__FIELD_NAME__middle, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileFinger__FIELD_NAME__root, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__TactileFinger__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__TactileFinger__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__TactileFinger__TYPE_NAME, 38, 38},
      {omniglove_interfaces__msg__TactileFinger__FIELDS, 4, 4},
    },
    {omniglove_interfaces__msg__TactileFinger__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&omniglove_interfaces__msg__TactileRegion__EXPECTED_HASH, omniglove_interfaces__msg__TactileRegion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = omniglove_interfaces__msg__TactileRegion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "TactileRegion tip\n"
  "TactileRegion pad\n"
  "TactileRegion middle\n"
  "TactileRegion root";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__TactileFinger__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__TactileFinger__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 76, 76},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__TactileFinger__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__TactileFinger__get_individual_type_description_source(NULL),
    sources[1] = *omniglove_interfaces__msg__TactileRegion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
