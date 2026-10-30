// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PoseTactilePositionSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/pose_tactile_position_sample__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'metadata'
#include "omniglove_interfaces/msg/detail/stream_metadata__traits.hpp"
// Member 'data'
#include "omniglove_interfaces/msg/detail/pose_data__traits.hpp"
// Member 'tac_pos'
#include "omniglove_interfaces/msg/detail/tactile_position_data__traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseTactilePositionSample & msg,
  std::ostream & out)
{
  out << "{";
  // member: metadata
  {
    out << "metadata: ";
    to_flow_style_yaml(msg.metadata, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
    out << ", ";
  }

  // member: tac_pos
  {
    out << "tac_pos: ";
    to_flow_style_yaml(msg.tac_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseTactilePositionSample & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "metadata:\n";
    to_block_style_yaml(msg.metadata, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }

  // member: tac_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tac_pos:\n";
    to_block_style_yaml(msg.tac_pos, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseTactilePositionSample & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use omniglove_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const omniglove_interfaces::msg::PoseTactilePositionSample & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::PoseTactilePositionSample & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::PoseTactilePositionSample>()
{
  return "omniglove_interfaces::msg::PoseTactilePositionSample";
}

template<>
inline const char * name<omniglove_interfaces::msg::PoseTactilePositionSample>()
{
  return "omniglove_interfaces/msg/PoseTactilePositionSample";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::PoseTactilePositionSample>
  : std::integral_constant<bool, has_fixed_size<omniglove_interfaces::msg::PoseData>::value && has_fixed_size<omniglove_interfaces::msg::StreamMetadata>::value && has_fixed_size<omniglove_interfaces::msg::TactilePositionData>::value> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::PoseTactilePositionSample>
  : std::integral_constant<bool, has_bounded_size<omniglove_interfaces::msg::PoseData>::value && has_bounded_size<omniglove_interfaces::msg::StreamMetadata>::value && has_bounded_size<omniglove_interfaces::msg::TactilePositionData>::value> {};

template<>
struct is_message<omniglove_interfaces::msg::PoseTactilePositionSample>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__TRAITS_HPP_
