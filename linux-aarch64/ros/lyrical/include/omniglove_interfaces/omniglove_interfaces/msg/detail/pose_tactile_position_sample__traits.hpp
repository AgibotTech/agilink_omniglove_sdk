// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PoseTactilePositionSample.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omniglove_interfaces/msg/pose_tactile_position_sample.hpp"


#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose_tactile_position_sample__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
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

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, omniglove_interfaces::msg::PoseTactilePositionSample>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).metadata,
    std::forward<T>(msg).data,
    std::forward<T>(msg).tac_pos);
}

}  // namespace msg

}  // namespace omniglove_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<omniglove_interfaces::msg::PoseTactilePositionSample>()
{
  return "omniglove_interfaces::msg::PoseTactilePositionSample";
}

template<>
constexpr const char * name<omniglove_interfaces::msg::PoseTactilePositionSample>()
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

template<>
struct MessageTraits<omniglove_interfaces::msg::PoseTactilePositionSample>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "metadata",
    "data",
    "tac_pos",
  };
};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__TRAITS_HPP_
