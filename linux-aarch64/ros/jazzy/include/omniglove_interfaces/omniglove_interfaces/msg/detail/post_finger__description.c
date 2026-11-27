// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PostFinger.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/post_finger__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PostFinger__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0xf8, 0x74, 0x73, 0xa1, 0xbe, 0xd9, 0x31,
      0xe6, 0xac, 0xa2, 0x62, 0x0c, 0xeb, 0x17, 0x88,
      0xba, 0xdf, 0x1c, 0x34, 0x83, 0x78, 0x0a, 0xc5,
      0xdd, 0x1d, 0xde, 0x92, 0xa5, 0x3f, 0x08, 0xbb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "omniglove_interfaces/msg/detail/pose6__functions.h"
#include "omniglove_interfaces/msg/detail/post_finger_landmarks__functions.h"
#include "omniglove_interfaces/msg/detail/post_finger_joints__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t omniglove_interfaces__msg__Pose6__EXPECTED_HASH = {1, {
    0x3e, 0x39, 0xef, 0xc8, 0xd5, 0xc0, 0xbd, 0x8c,
    0xfd, 0xca, 0xee, 0x6a, 0xaf, 0xc3, 0x00, 0xe2,
    0xde, 0x62, 0x8f, 0x34, 0x74, 0x36, 0x7f, 0x1c,
    0xdb, 0xb0, 0xae, 0xf3, 0x8b, 0x81, 0x6c, 0x49,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PostFingerJoints__EXPECTED_HASH = {1, {
    0x17, 0x31, 0xb6, 0x1d, 0x7d, 0x96, 0xac, 0x17,
    0x17, 0xf1, 0xe6, 0x12, 0x6c, 0xd8, 0x70, 0x67,
    0x05, 0x04, 0x52, 0x9d, 0x26, 0xfc, 0x73, 0x5e,
    0xcc, 0x0e, 0x37, 0xe8, 0x40, 0x24, 0x01, 0x8b,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PostFingerLandmarks__EXPECTED_HASH = {1, {
    0x13, 0xb0, 0xa4, 0xad, 0x75, 0x47, 0xde, 0x55,
    0xc2, 0x16, 0xb7, 0x94, 0x5a, 0xb9, 0x3c, 0x48,
    0x8a, 0x56, 0xf2, 0x04, 0xea, 0x41, 0xd3, 0x2b,
    0x25, 0x10, 0x4e, 0xfa, 0x47, 0x96, 0xc3, 0x80,
  }};
#endif

static char omniglove_interfaces__msg__PostFinger__TYPE_NAME[] = "omniglove_interfaces/msg/PostFinger";
static char omniglove_interfaces__msg__Pose6__TYPE_NAME[] = "omniglove_interfaces/msg/Pose6";
static char omniglove_interfaces__msg__PostFingerJoints__TYPE_NAME[] = "omniglove_interfaces/msg/PostFingerJoints";
static char omniglove_interfaces__msg__PostFingerLandmarks__TYPE_NAME[] = "omniglove_interfaces/msg/PostFingerLandmarks";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PostFinger__FIELD_NAME__joints_rad[] = "joints_rad";
static char omniglove_interfaces__msg__PostFinger__FIELD_NAME__landmarks[] = "landmarks";
static char omniglove_interfaces__msg__PostFinger__FIELD_NAME__rx_tip_target[] = "rx_tip_target";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PostFinger__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PostFinger__FIELD_NAME__joints_rad, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PostFingerJoints__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostFinger__FIELD_NAME__landmarks, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PostFingerLandmarks__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostFinger__FIELD_NAME__rx_tip_target, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__PostFinger__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostFingerJoints__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostFingerLandmarks__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__PostFinger__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PostFinger__TYPE_NAME, 35, 35},
      {omniglove_interfaces__msg__PostFinger__FIELDS, 3, 3},
    },
    {omniglove_interfaces__msg__PostFinger__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&omniglove_interfaces__msg__Pose6__EXPECTED_HASH, omniglove_interfaces__msg__Pose6__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = omniglove_interfaces__msg__Pose6__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PostFingerJoints__EXPECTED_HASH, omniglove_interfaces__msg__PostFingerJoints__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = omniglove_interfaces__msg__PostFingerJoints__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PostFingerLandmarks__EXPECTED_HASH, omniglove_interfaces__msg__PostFingerLandmarks__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = omniglove_interfaces__msg__PostFingerLandmarks__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "PostFingerJoints joints_rad\n"
  "PostFingerLandmarks landmarks\n"
  "Pose6 rx_tip_target";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PostFinger__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PostFinger__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 78, 78},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PostFinger__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PostFinger__get_individual_type_description_source(NULL),
    sources[1] = *omniglove_interfaces__msg__Pose6__get_individual_type_description_source(NULL);
    sources[2] = *omniglove_interfaces__msg__PostFingerJoints__get_individual_type_description_source(NULL);
    sources[3] = *omniglove_interfaces__msg__PostFingerLandmarks__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
