// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PostThumbLandmarks.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/post_thumb_landmarks__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PostThumbLandmarks__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x48, 0x2d, 0x8e, 0xa1, 0x3d, 0xfb, 0x65,
      0x35, 0x9d, 0x7a, 0x03, 0x28, 0x17, 0xd3, 0xfc,
      0xcb, 0xe7, 0x16, 0xc4, 0xd8, 0x8c, 0xcb, 0x26,
      0x3c, 0xcf, 0xd4, 0x7d, 0x35, 0x9e, 0x3f, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "omniglove_interfaces/msg/detail/pose6__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t omniglove_interfaces__msg__Pose6__EXPECTED_HASH = {1, {
    0x3e, 0x39, 0xef, 0xc8, 0xd5, 0xc0, 0xbd, 0x8c,
    0xfd, 0xca, 0xee, 0x6a, 0xaf, 0xc3, 0x00, 0xe2,
    0xde, 0x62, 0x8f, 0x34, 0x74, 0x36, 0x7f, 0x1c,
    0xdb, 0xb0, 0xae, 0xf3, 0x8b, 0x81, 0x6c, 0x49,
  }};
#endif

static char omniglove_interfaces__msg__PostThumbLandmarks__TYPE_NAME[] = "omniglove_interfaces/msg/PostThumbLandmarks";
static char omniglove_interfaces__msg__Pose6__TYPE_NAME[] = "omniglove_interfaces/msg/Pose6";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PostThumbLandmarks__FIELD_NAME__cmc[] = "cmc";
static char omniglove_interfaces__msg__PostThumbLandmarks__FIELD_NAME__mcp[] = "mcp";
static char omniglove_interfaces__msg__PostThumbLandmarks__FIELD_NAME__ip[] = "ip";
static char omniglove_interfaces__msg__PostThumbLandmarks__FIELD_NAME__tip[] = "tip";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PostThumbLandmarks__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PostThumbLandmarks__FIELD_NAME__cmc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostThumbLandmarks__FIELD_NAME__mcp, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostThumbLandmarks__FIELD_NAME__ip, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostThumbLandmarks__FIELD_NAME__tip, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__PostThumbLandmarks__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__PostThumbLandmarks__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PostThumbLandmarks__TYPE_NAME, 43, 43},
      {omniglove_interfaces__msg__PostThumbLandmarks__FIELDS, 4, 4},
    },
    {omniglove_interfaces__msg__PostThumbLandmarks__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&omniglove_interfaces__msg__Pose6__EXPECTED_HASH, omniglove_interfaces__msg__Pose6__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = omniglove_interfaces__msg__Pose6__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Pose6 cmc\n"
  "Pose6 mcp\n"
  "Pose6 ip\n"
  "Pose6 tip";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PostThumbLandmarks__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PostThumbLandmarks__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PostThumbLandmarks__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PostThumbLandmarks__get_individual_type_description_source(NULL),
    sources[1] = *omniglove_interfaces__msg__Pose6__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
