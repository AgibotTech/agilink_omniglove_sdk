// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omniglove_interfaces:msg/PostData.idl
// generated code does not contain a copyright notice

#include "omniglove_interfaces/msg/detail/post_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
const rosidl_type_hash_t *
omniglove_interfaces__msg__PostData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0x38, 0x97, 0x1a, 0xb9, 0xe0, 0x54, 0xda,
      0x12, 0xc5, 0xfd, 0x15, 0x65, 0x4f, 0xbf, 0x6d,
      0xc8, 0x04, 0xed, 0x9b, 0xf8, 0x09, 0xce, 0xbc,
      0x5a, 0xb4, 0x50, 0x8b, 0x63, 0x16, 0x5d, 0xa3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "omniglove_interfaces/msg/detail/pose6__functions.h"
#include "omniglove_interfaces/msg/detail/post_finger__functions.h"
#include "omniglove_interfaces/msg/detail/post_finger_joints__functions.h"
#include "omniglove_interfaces/msg/detail/post_finger_landmarks__functions.h"
#include "omniglove_interfaces/msg/detail/post_thumb__functions.h"
#include "omniglove_interfaces/msg/detail/post_thumb_joints__functions.h"
#include "omniglove_interfaces/msg/detail/post_thumb_landmarks__functions.h"
#include "omniglove_interfaces/msg/detail/post_wrist__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t omniglove_interfaces__msg__Pose6__EXPECTED_HASH = {1, {
    0x3e, 0x39, 0xef, 0xc8, 0xd5, 0xc0, 0xbd, 0x8c,
    0xfd, 0xca, 0xee, 0x6a, 0xaf, 0xc3, 0x00, 0xe2,
    0xde, 0x62, 0x8f, 0x34, 0x74, 0x36, 0x7f, 0x1c,
    0xdb, 0xb0, 0xae, 0xf3, 0x8b, 0x81, 0x6c, 0x49,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PostFinger__EXPECTED_HASH = {1, {
    0x9a, 0xf8, 0x74, 0x73, 0xa1, 0xbe, 0xd9, 0x31,
    0xe6, 0xac, 0xa2, 0x62, 0x0c, 0xeb, 0x17, 0x88,
    0xba, 0xdf, 0x1c, 0x34, 0x83, 0x78, 0x0a, 0xc5,
    0xdd, 0x1d, 0xde, 0x92, 0xa5, 0x3f, 0x08, 0xbb,
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
static const rosidl_type_hash_t omniglove_interfaces__msg__PostThumb__EXPECTED_HASH = {1, {
    0xf4, 0x65, 0xc3, 0xcd, 0xdd, 0x65, 0xda, 0x74,
    0xaa, 0x54, 0x96, 0x18, 0x94, 0xd1, 0xc2, 0xaf,
    0xe4, 0x9d, 0xb9, 0x2e, 0x61, 0x88, 0x05, 0xd6,
    0x17, 0xd3, 0xd9, 0xcf, 0x80, 0x05, 0xa2, 0xb3,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PostThumbJoints__EXPECTED_HASH = {1, {
    0x87, 0x78, 0xe3, 0x2a, 0x15, 0x5d, 0x0f, 0xe0,
    0x52, 0xc1, 0xdd, 0x1e, 0x75, 0xaf, 0x1b, 0xad,
    0x21, 0xec, 0x38, 0xe4, 0x93, 0xbe, 0xea, 0x7f,
    0x2b, 0x08, 0x65, 0xc6, 0xb7, 0x84, 0xc2, 0x27,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PostThumbLandmarks__EXPECTED_HASH = {1, {
    0xac, 0x48, 0x2d, 0x8e, 0xa1, 0x3d, 0xfb, 0x65,
    0x35, 0x9d, 0x7a, 0x03, 0x28, 0x17, 0xd3, 0xfc,
    0xcb, 0xe7, 0x16, 0xc4, 0xd8, 0x8c, 0xcb, 0x26,
    0x3c, 0xcf, 0xd4, 0x7d, 0x35, 0x9e, 0x3f, 0xe7,
  }};
static const rosidl_type_hash_t omniglove_interfaces__msg__PostWrist__EXPECTED_HASH = {1, {
    0xe4, 0xdf, 0x42, 0x51, 0xa1, 0xe2, 0xbe, 0x87,
    0x84, 0x55, 0x5f, 0xad, 0xf4, 0xac, 0xb1, 0x50,
    0xc4, 0x3a, 0x64, 0xec, 0xda, 0x6e, 0xf8, 0x47,
    0xe0, 0xc2, 0xea, 0xf1, 0x2f, 0x91, 0x27, 0x0f,
  }};
#endif

static char omniglove_interfaces__msg__PostData__TYPE_NAME[] = "omniglove_interfaces/msg/PostData";
static char omniglove_interfaces__msg__Pose6__TYPE_NAME[] = "omniglove_interfaces/msg/Pose6";
static char omniglove_interfaces__msg__PostFinger__TYPE_NAME[] = "omniglove_interfaces/msg/PostFinger";
static char omniglove_interfaces__msg__PostFingerJoints__TYPE_NAME[] = "omniglove_interfaces/msg/PostFingerJoints";
static char omniglove_interfaces__msg__PostFingerLandmarks__TYPE_NAME[] = "omniglove_interfaces/msg/PostFingerLandmarks";
static char omniglove_interfaces__msg__PostThumb__TYPE_NAME[] = "omniglove_interfaces/msg/PostThumb";
static char omniglove_interfaces__msg__PostThumbJoints__TYPE_NAME[] = "omniglove_interfaces/msg/PostThumbJoints";
static char omniglove_interfaces__msg__PostThumbLandmarks__TYPE_NAME[] = "omniglove_interfaces/msg/PostThumbLandmarks";
static char omniglove_interfaces__msg__PostWrist__TYPE_NAME[] = "omniglove_interfaces/msg/PostWrist";

// Define type names, field names, and default values
static char omniglove_interfaces__msg__PostData__FIELD_NAME__mapped[] = "mapped";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__device_tick_ms[] = "device_tick_ms";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__flags[] = "flags";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__reserved[] = "reserved";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__frame_id[] = "frame_id";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__thumb[] = "thumb";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__index[] = "index";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__middle[] = "middle";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__ring[] = "ring";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__pinky[] = "pinky";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__wrist[] = "wrist";
static char omniglove_interfaces__msg__PostData__FIELD_NAME__unmapped_data[] = "unmapped_data";

static rosidl_runtime_c__type_description__Field omniglove_interfaces__msg__PostData__FIELDS[] = {
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__mapped, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__device_tick_ms, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__flags, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__reserved, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__frame_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__thumb, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PostThumb__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PostFinger__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__middle, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PostFinger__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__ring, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PostFinger__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__pinky, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PostFinger__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__wrist, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omniglove_interfaces__msg__PostWrist__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostData__FIELD_NAME__unmapped_data, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omniglove_interfaces__msg__PostData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {omniglove_interfaces__msg__Pose6__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostFinger__TYPE_NAME, 35, 35},
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
  {
    {omniglove_interfaces__msg__PostThumb__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostThumbJoints__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostThumbLandmarks__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {omniglove_interfaces__msg__PostWrist__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omniglove_interfaces__msg__PostData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omniglove_interfaces__msg__PostData__TYPE_NAME, 33, 33},
      {omniglove_interfaces__msg__PostData__FIELDS, 12, 12},
    },
    {omniglove_interfaces__msg__PostData__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&omniglove_interfaces__msg__Pose6__EXPECTED_HASH, omniglove_interfaces__msg__Pose6__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = omniglove_interfaces__msg__Pose6__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PostFinger__EXPECTED_HASH, omniglove_interfaces__msg__PostFinger__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = omniglove_interfaces__msg__PostFinger__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PostFingerJoints__EXPECTED_HASH, omniglove_interfaces__msg__PostFingerJoints__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = omniglove_interfaces__msg__PostFingerJoints__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PostFingerLandmarks__EXPECTED_HASH, omniglove_interfaces__msg__PostFingerLandmarks__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = omniglove_interfaces__msg__PostFingerLandmarks__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PostThumb__EXPECTED_HASH, omniglove_interfaces__msg__PostThumb__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = omniglove_interfaces__msg__PostThumb__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PostThumbJoints__EXPECTED_HASH, omniglove_interfaces__msg__PostThumbJoints__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = omniglove_interfaces__msg__PostThumbJoints__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PostThumbLandmarks__EXPECTED_HASH, omniglove_interfaces__msg__PostThumbLandmarks__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = omniglove_interfaces__msg__PostThumbLandmarks__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&omniglove_interfaces__msg__PostWrist__EXPECTED_HASH, omniglove_interfaces__msg__PostWrist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = omniglove_interfaces__msg__PostWrist__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool mapped\n"
  "uint32 device_tick_ms\n"
  "uint32 flags\n"
  "uint8 reserved\n"
  "uint32 frame_id\n"
  "PostThumb thumb\n"
  "PostFinger index\n"
  "PostFinger middle\n"
  "PostFinger ring\n"
  "PostFinger pinky\n"
  "PostWrist wrist\n"
  "uint8[] unmapped_data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omniglove_interfaces__msg__PostData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omniglove_interfaces__msg__PostData__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 200, 200},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omniglove_interfaces__msg__PostData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omniglove_interfaces__msg__PostData__get_individual_type_description_source(NULL),
    sources[1] = *omniglove_interfaces__msg__Pose6__get_individual_type_description_source(NULL);
    sources[2] = *omniglove_interfaces__msg__PostFinger__get_individual_type_description_source(NULL);
    sources[3] = *omniglove_interfaces__msg__PostFingerJoints__get_individual_type_description_source(NULL);
    sources[4] = *omniglove_interfaces__msg__PostFingerLandmarks__get_individual_type_description_source(NULL);
    sources[5] = *omniglove_interfaces__msg__PostThumb__get_individual_type_description_source(NULL);
    sources[6] = *omniglove_interfaces__msg__PostThumbJoints__get_individual_type_description_source(NULL);
    sources[7] = *omniglove_interfaces__msg__PostThumbLandmarks__get_individual_type_description_source(NULL);
    sources[8] = *omniglove_interfaces__msg__PostWrist__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
