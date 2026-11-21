// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/TactileData.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/tactile_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__TactileData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0xb5, 0x31, 0x17, 0x5d, 0x91, 0x43, 0x98,
      0x5a, 0x3f, 0x54, 0xd7, 0xa0, 0x38, 0xd9, 0xa8,
      0xce, 0xed, 0xce, 0x11, 0xdf, 0xab, 0xdf, 0x62,
      0xca, 0x6c, 0x69, 0xc5, 0xd0, 0xfb, 0x03, 0xd3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "omniglove_interfaces/msg/detail/tactile_finger__functions.h"
#include "omniglove_interfaces/msg/detail/tactile_region__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t omniglove_interfaces__msg__TactileFinger__EXPECTED_HASH = {1, {
    0x4a, 0x2b, 0x4d, 0x6d, 0x9f, 0x43, 0x0c, 0xd8,
    0x01, 0x50, 0xa5, 0x2c, 0xf6, 0x58, 0xab, 0x44,
    0x7a, 0x04, 0xab, 0x14, 0x89, 0xe7, 0xc7, 0x59,
    0x3b, 0x30, 0x57, 0x4a, 0x8e, 0x8b, 0xf4, 0x7d,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__TactileRegion__EXPECTED_HASH = {1, {
    0x8b, 0xfa, 0x62, 0x16, 0x3b, 0x0a, 0x4d, 0xfc,
    0xbe, 0x2a, 0x46, 0x9d, 0xc3, 0x17, 0x76, 0x72,
    0x74, 0x95, 0x79, 0x59, 0x79, 0x1c, 0x13, 0xe8,
    0x85, 0x31, 0x41, 0x87, 0xea, 0xf4, 0xce, 0xe9,
  }};
#endif

static char omniglove_interfaces__msg__TactileData__TYPE_NAME[] = "omniglove_interfaces/msg/TactileData";
static char omniglove_interfaces__msg__TactileFinger__TYPE_NAME[] = "omniglove_interfaces/msg/TactileFinger";
static char omniglove_interfaces__msg__TactileRegion__TYPE_NAME[] = "omniglove_interfaces/msg/TactileRegion";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__TactileData__FIELD_NAME__mapped[] = "mapped";
static char omniglove_interfaces__msg__TactileData__FIELD_NAME__count[] = "count";
static char omniglove_interfaces__msg__TactileData__FIELD_NAME__thumb[] = "thumb";
static char omniglove_interfaces__msg__TactileData__FIELD_NAME__index[] = "index";
static char omniglove_interfaces__msg__TactileData__FIELD_NAME__middle[] = "middle";
static char omniglove_interfaces__msg__TactileData__FIELD_NAME__ring[] = "ring";
static char omniglove_interfaces__msg__TactileData__FIELD_NAME__pinky[] = "pinky";
static char omniglove_interfaces__msg__TactileData__FIELD_NAME__palm_surface[] = "palm_surface";
static char omniglove_interfaces__msg__TactileData__FIELD_NAME__unmapped_data[] = "unmapped_data";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__TactileData__FIELDS[] = {
  {
    {omniglove_interfaces__msg__TactileData__FIELD_NAME__mapped, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileData__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileData__FIELD_NAME__thumb, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileFinger__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileData__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileFinger__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileData__FIELD_NAME__middle, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileFinger__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileData__FIELD_NAME__ring, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileFinger__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileData__FIELD_NAME__pinky, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileFinger__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileData__FIELD_NAME__palm_surface, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileData__FIELD_NAME__unmapped_data, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__TactileData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {omniglove_interfaces__msg__TactileFinger__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__TactileData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__TactileData__TYPE_NAME, 36, 36},
      {omniglove_interfaces__msg__TactileData__FIELDS, 9, 9},
    },
    {omniglove_interfaces__msg__TactileData__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&omniglove_interfaces__msg__TactileFinger__EXPECTED_HASH, omniglove_interfaces__msg__TactileFinger__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = omniglove_interfaces__msg__TactileFinger__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__TactileRegion__EXPECTED_HASH, omniglove_interfaces__msg__TactileRegion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = omniglove_interfaces__msg__TactileRegion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool mapped\n"
  "uint32 count\n"
  "TactileFinger thumb\n"
  "TactileFinger index\n"
  "TactileFinger middle\n"
  "TactileFinger ring\n"
  "TactileFinger pinky\n"
  "TactileRegion palm_surface\n"
  "uint8[] unmapped_data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__TactileData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__TactileData__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 174, 174},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__TactileData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__TactileData__get_individual_type_description_source(NULL),
    sources[1] = *omniglove_interfaces__msg__TactileFinger__get_individual_type_description_source(NULL);
    sources[2] = *omniglove_interfaces__msg__TactileRegion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
