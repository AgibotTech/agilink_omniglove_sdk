// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omniglove_interfaces:msg/PoseEmf.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__TRAITS_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omniglove_interfaces/msg/detail/pose_emf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omniglove_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseEmf & msg,
  std::ostream & out)
{
  out << "{";
  // member: position_mm
  {
    if (msg.position_mm.size() == 0) {
      out << "position_mm: []";
    } else {
      out << "position_mm: [";
      size_t pending_items = msg.position_mm.size();
      for (auto item : msg.position_mm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yaw_pitch_roll_cdeg
  {
    if (msg.yaw_pitch_roll_cdeg.size() == 0) {
      out << "yaw_pitch_roll_cdeg: []";
    } else {
      out << "yaw_pitch_roll_cdeg: [";
      size_t pending_items = msg.yaw_pitch_roll_cdeg.size();
      for (auto item : msg.yaw_pitch_roll_cdeg) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confidence_milli
  {
    out << "confidence_milli: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_milli, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseEmf & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_mm.size() == 0) {
      out << "position_mm: []\n";
    } else {
      out << "position_mm:\n";
      for (auto item : msg.position_mm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yaw_pitch_roll_cdeg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yaw_pitch_roll_cdeg.size() == 0) {
      out << "yaw_pitch_roll_cdeg: []\n";
    } else {
      out << "yaw_pitch_roll_cdeg:\n";
      for (auto item : msg.yaw_pitch_roll_cdeg) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: confidence_milli
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_milli: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_milli, out);
    out << "\n";
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseEmf & msg, bool use_flow_style = false)
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
  const omniglove_interfaces::msg::PoseEmf & msg,
  std::ostream & out, size_t indentation = 0)
{
  omniglove_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omniglove_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const omniglove_interfaces::msg::PoseEmf & msg)
{
  return omniglove_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<omniglove_interfaces::msg::PoseEmf>()
{
  return "omniglove_interfaces::msg::PoseEmf";
}

template<>
inline const char * name<omniglove_interfaces::msg::PoseEmf>()
{
  return "omniglove_interfaces/msg/PoseEmf";
}

template<>
struct has_fixed_size<omniglove_interfaces::msg::PoseEmf>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omniglove_interfaces::msg::PoseEmf>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omniglove_interfaces::msg::PoseEmf>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__TRAITS_HPP_
