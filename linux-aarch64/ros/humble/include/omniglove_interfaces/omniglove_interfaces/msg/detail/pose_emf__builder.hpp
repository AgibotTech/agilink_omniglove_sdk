// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PoseEmf.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose_emf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseEmf_valid
{
public:
  explicit Init_PoseEmf_valid(::omniglove_interfaces::msg::PoseEmf & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PoseEmf valid(::omniglove_interfaces::msg::PoseEmf::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseEmf msg_;
};

class Init_PoseEmf_confidence_milli
{
public:
  explicit Init_PoseEmf_confidence_milli(::omniglove_interfaces::msg::PoseEmf & msg)
  : msg_(msg)
  {}
  Init_PoseEmf_valid confidence_milli(::omniglove_interfaces::msg::PoseEmf::_confidence_milli_type arg)
  {
    msg_.confidence_milli = std::move(arg);
    return Init_PoseEmf_valid(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseEmf msg_;
};

class Init_PoseEmf_yaw_pitch_roll_cdeg
{
public:
  explicit Init_PoseEmf_yaw_pitch_roll_cdeg(::omniglove_interfaces::msg::PoseEmf & msg)
  : msg_(msg)
  {}
  Init_PoseEmf_confidence_milli yaw_pitch_roll_cdeg(::omniglove_interfaces::msg::PoseEmf::_yaw_pitch_roll_cdeg_type arg)
  {
    msg_.yaw_pitch_roll_cdeg = std::move(arg);
    return Init_PoseEmf_confidence_milli(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseEmf msg_;
};

class Init_PoseEmf_position_mm
{
public:
  Init_PoseEmf_position_mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseEmf_yaw_pitch_roll_cdeg position_mm(::omniglove_interfaces::msg::PoseEmf::_position_mm_type arg)
  {
    msg_.position_mm = std::move(arg);
    return Init_PoseEmf_yaw_pitch_roll_cdeg(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseEmf msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PoseEmf>()
{
  return omniglove_interfaces::msg::builder::Init_PoseEmf_position_mm();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_EMF__BUILDER_HPP_
