// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PoseTactilePositionSample.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/pose_tactile_position_sample__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PoseTactilePositionSample__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0xe2, 0x7e, 0x76, 0xac, 0x49, 0xb0, 0x42,
      0x12, 0x17, 0xc6, 0x03, 0x07, 0x3e, 0x07, 0xd1,
      0x70, 0x27, 0xa3, 0x18, 0x1b, 0x31, 0xf0, 0x70,
      0x13, 0x04, 0x47, 0x54, 0xd3, 0xc5, 0x31, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "omniglove_interfaces/msg/detail/pose_data__functions.h"
#include "omniglove_interfaces/msg/detail/pose_emf__functions.h"
#include "omniglove_interfaces/msg/detail/tactile_point_position__functions.h"
#include "omniglove_interfaces/msg/detail/tactile_position_data__functions.h"
#include "omniglove_interfaces/msg/detail/tactile_region__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "omniglove_interfaces/msg/detail/pose_imu__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "omniglove_interfaces/msg/detail/tactile_finger__functions.h"
#include "omniglove_interfaces/msg/detail/stream_metadata__functions.h"
#include "omniglove_interfaces/msg/detail/tactile_data__functions.h"
#include "omniglove_interfaces/msg/detail/pose_node__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PoseData__EXPECTED_HASH = {1, {
    0x24, 0x29, 0x57, 0xf8, 0xf3, 0x33, 0x25, 0x8f,
    0x1f, 0xf8, 0x26, 0xa4, 0x6f, 0xec, 0xa9, 0x46,
    0x52, 0x1c, 0x13, 0xfb, 0x0b, 0x56, 0xcf, 0xde,
    0xc8, 0xee, 0xf3, 0x0a, 0x5b, 0xcc, 0x24, 0xd8,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PoseEmf__EXPECTED_HASH = {1, {
    0x6f, 0xe2, 0x9f, 0x46, 0xd7, 0xcc, 0x82, 0x16,
    0x17, 0x48, 0xbf, 0x6a, 0x25, 0x2a, 0xba, 0x64,
    0xfd, 0x69, 0xdd, 0x52, 0x55, 0x62, 0xb9, 0x9c,
    0x7b, 0xc8, 0x22, 0x3b, 0xbc, 0xb5, 0x71, 0xa8,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PoseImu__EXPECTED_HASH = {1, {
    0x93, 0x58, 0xfc, 0x9c, 0x49, 0xee, 0xad, 0x2f,
    0x17, 0xb1, 0x5e, 0xcb, 0xa2, 0xc2, 0xbd, 0x18,
    0x54, 0x90, 0xe8, 0x77, 0x47, 0x17, 0xca, 0x5e,
    0x04, 0x54, 0x75, 0x2f, 0xe4, 0xd4, 0x3f, 0x3d,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PoseNode__EXPECTED_HASH = {1, {
    0x71, 0x8c, 0x18, 0xd1, 0xbe, 0x1b, 0xf7, 0xc3,
    0x64, 0x9c, 0xbe, 0x5d, 0x31, 0xa5, 0x1c, 0x9f,
    0x5a, 0xbd, 0x24, 0x55, 0x4e, 0x73, 0x9a, 0x6f,
    0x14, 0x58, 0x89, 0x5f, 0x83, 0x8e, 0xfa, 0x06,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__StreamMetadata__EXPECTED_HASH = {1, {
    0x5a, 0x8b, 0xef, 0x19, 0x9c, 0x78, 0x70, 0xfe,
    0x1c, 0x24, 0x5c, 0xe7, 0x55, 0x23, 0x9f, 0x60,
    0x4f, 0x4b, 0x0a, 0xf5, 0xe4, 0x8a, 0x08, 0x30,
    0xe2, 0xcd, 0x76, 0xda, 0xc0, 0x75, 0x48, 0x5d,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__TactileData__EXPECTED_HASH = {1, {
    0xbd, 0xb5, 0x31, 0x17, 0x5d, 0x91, 0x43, 0x98,
    0x5a, 0x3f, 0x54, 0xd7, 0xa0, 0x38, 0xd9, 0xa8,
    0xce, 0xed, 0xce, 0x11, 0xdf, 0xab, 0xdf, 0x62,
    0xca, 0x6c, 0x69, 0xc5, 0xd0, 0xfb, 0x03, 0xd3,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__TactileFinger__EXPECTED_HASH = {1, {
    0x4a, 0x2b, 0x4d, 0x6d, 0x9f, 0x43, 0x0c, 0xd8,
    0x01, 0x50, 0xa5, 0x2c, 0xf6, 0x58, 0xab, 0x44,
    0x7a, 0x04, 0xab, 0x14, 0x89, 0xe7, 0xc7, 0x59,
    0x3b, 0x30, 0x57, 0x4a, 0x8e, 0x8b, 0xf4, 0x7d,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__TactilePointPosition__EXPECTED_HASH = {1, {
    0x66, 0x50, 0x5d, 0x95, 0x33, 0xcb, 0x07, 0xb4,
    0x9b, 0x51, 0x0f, 0x06, 0x9e, 0x73, 0x77, 0x9b,
    0x90, 0x80, 0x36, 0xfa, 0x94, 0x2d, 0xfa, 0x19,
    0xf7, 0xe9, 0x4e, 0xb7, 0x67, 0x2f, 0x73, 0x23,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__TactilePositionData__EXPECTED_HASH = {1, {
    0x9a, 0x0d, 0xaf, 0x58, 0x3c, 0x36, 0x1a, 0xf1,
    0x14, 0x3e, 0x6e, 0xf6, 0x95, 0x86, 0xd9, 0xe4,
    0x94, 0x76, 0xf7, 0x91, 0x39, 0x69, 0xd2, 0x0f,
    0x40, 0x6a, 0x80, 0x19, 0x25, 0xaf, 0x61, 0x18,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__TactileRegion__EXPECTED_HASH = {1, {
    0x8b, 0xfa, 0x62, 0x16, 0x3b, 0x0a, 0x4d, 0xfc,
    0xbe, 0x2a, 0x46, 0x9d, 0xc3, 0x17, 0x76, 0x72,
    0x74, 0x95, 0x79, 0x59, 0x79, 0x1c, 0x13, 0xe8,
    0x85, 0x31, 0x41, 0x87, 0xea, 0xf4, 0xce, 0xe9,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char omniglove_interfaces__msg__PoseTactilePositionSample__TYPE_NAME[] = "omniglove_interfaces/msg/PoseTactilePositionSample";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char omniglove_interfaces__msg__PoseData__TYPE_NAME[] = "omniglove_interfaces/msg/PoseData";
static char omniglove_interfaces__msg__PoseEmf__TYPE_NAME[] = "omniglove_interfaces/msg/PoseEmf";
static char omniglove_interfaces__msg__PoseImu__TYPE_NAME[] = "omniglove_interfaces/msg/PoseImu";
static char omniglove_interfaces__msg__PoseNode__TYPE_NAME[] = "omniglove_interfaces/msg/PoseNode";
static char omniglove_interfaces__msg__StreamMetadata__TYPE_NAME[] = "omniglove_interfaces/msg/StreamMetadata";
static char omniglove_interfaces__msg__TactileData__TYPE_NAME[] = "omniglove_interfaces/msg/TactileData";
static char omniglove_interfaces__msg__TactileFinger__TYPE_NAME[] = "omniglove_interfaces/msg/TactileFinger";
static char omniglove_interfaces__msg__TactilePointPosition__TYPE_NAME[] = "omniglove_interfaces/msg/TactilePointPosition";
static char omniglove_interfaces__msg__TactilePositionData__TYPE_NAME[] = "omniglove_interfaces/msg/TactilePositionData";
static char omniglove_interfaces__msg__TactileRegion__TYPE_NAME[] = "omniglove_interfaces/msg/TactileRegion";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PoseTactilePositionSample__FIELD_NAME__metadata[] = "metadata";
static char omniglove_interfaces__msg__PoseTactilePositionSample__FIELD_NAME__data[] = "data";
static char omniglove_interfaces__msg__PoseTactilePositionSample__FIELD_NAME__tac_pos[] = "tac_pos";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PoseTactilePositionSample__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PoseTactilePositionSample__FIELD_NAME__metadata, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__StreamMetadata__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseTactilePositionSample__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PoseData__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseTactilePositionSample__FIELD_NAME__tac_pos, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__TactilePositionData__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__PoseTactilePositionSample__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseData__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseEmf__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseImu__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PoseNode__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__StreamMetadata__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileData__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileFinger__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactilePointPosition__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactilePositionData__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__TactileRegion__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__PoseTactilePositionSample__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PoseTactilePositionSample__TYPE_NAME, 50, 50},
      {omniglove_interfaces__msg__PoseTactilePositionSample__FIELDS, 3, 3},
    },
    {omniglove_interfaces__msg__PoseTactilePositionSample__REFERENCED_TYPE_DESCRIPTIONS, 12, 12},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PoseData__EXPECTED_HASH, omniglove_interfaces__msg__PoseData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = omniglove_interfaces__msg__PoseData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PoseEmf__EXPECTED_HASH, omniglove_interfaces__msg__PoseEmf__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = omniglove_interfaces__msg__PoseEmf__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PoseImu__EXPECTED_HASH, omniglove_interfaces__msg__PoseImu__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = omniglove_interfaces__msg__PoseImu__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PoseNode__EXPECTED_HASH, omniglove_interfaces__msg__PoseNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = omniglove_interfaces__msg__PoseNode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__StreamMetadata__EXPECTED_HASH, omniglove_interfaces__msg__StreamMetadata__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = omniglove_interfaces__msg__StreamMetadata__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__TactileData__EXPECTED_HASH, omniglove_interfaces__msg__TactileData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = omniglove_interfaces__msg__TactileData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__TactileFinger__EXPECTED_HASH, omniglove_interfaces__msg__TactileFinger__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = omniglove_interfaces__msg__TactileFinger__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__TactilePointPosition__EXPECTED_HASH, omniglove_interfaces__msg__TactilePointPosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = omniglove_interfaces__msg__TactilePointPosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__TactilePositionData__EXPECTED_HASH, omniglove_interfaces__msg__TactilePositionData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = omniglove_interfaces__msg__TactilePositionData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__TactileRegion__EXPECTED_HASH, omniglove_interfaces__msg__TactileRegion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = omniglove_interfaces__msg__TactileRegion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Copyright 2026 Agibot. SPDX-License-Identifier: MulanPSL-2.0\n"
  "\n"
  "StreamMetadata metadata\n"
  "PoseData data\n"
  "TactilePositionData tac_pos";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PoseTactilePositionSample__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PoseTactilePositionSample__TYPE_NAME, 50, 50},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 130, 130},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PoseTactilePositionSample__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[13];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 13, 13};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PoseTactilePositionSample__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omniglove_interfaces__msg__PoseData__get_individual_type_description_source(NULL);
    sources[3] = *omniglove_interfaces__msg__PoseEmf__get_individual_type_description_source(NULL);
    sources[4] = *omniglove_interfaces__msg__PoseImu__get_individual_type_description_source(NULL);
    sources[5] = *omniglove_interfaces__msg__PoseNode__get_individual_type_description_source(NULL);
    sources[6] = *omniglove_interfaces__msg__StreamMetadata__get_individual_type_description_source(NULL);
    sources[7] = *omniglove_interfaces__msg__TactileData__get_individual_type_description_source(NULL);
    sources[8] = *omniglove_interfaces__msg__TactileFinger__get_individual_type_description_source(NULL);
    sources[9] = *omniglove_interfaces__msg__TactilePointPosition__get_individual_type_description_source(NULL);
    sources[10] = *omniglove_interfaces__msg__TactilePositionData__get_individual_type_description_source(NULL);
    sources[11] = *omniglove_interfaces__msg__TactileRegion__get_individual_type_description_source(NULL);
    sources[12] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
