// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PoseTactilePositionSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose_tactile_position_sample__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseTactilePositionSample_tac_pos
{
public:
  explicit Init_PoseTactilePositionSample_tac_pos(::omniglove_interfaces::msg::PoseTactilePositionSample & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PoseTactilePositionSample tac_pos(::omniglove_interfaces::msg::PoseTactilePositionSample::_tac_pos_type arg)
  {
    msg_.tac_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseTactilePositionSample msg_;
};

class Init_PoseTactilePositionSample_data
{
public:
  explicit Init_PoseTactilePositionSample_data(::omniglove_interfaces::msg::PoseTactilePositionSample & msg)
  : msg_(msg)
  {}
  Init_PoseTactilePositionSample_tac_pos data(::omniglove_interfaces::msg::PoseTactilePositionSample::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_PoseTactilePositionSample_tac_pos(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseTactilePositionSample msg_;
};

class Init_PoseTactilePositionSample_metadata
{
public:
  Init_PoseTactilePositionSample_metadata()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseTactilePositionSample_data metadata(::omniglove_interfaces::msg::PoseTactilePositionSample::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_PoseTactilePositionSample_data(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseTactilePositionSample msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PoseTactilePositionSample>()
{
  return omniglove_interfaces::msg::builder::Init_PoseTactilePositionSample_metadata();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_TACTILE_POSITION_SAMPLE__BUILDER_HPP_
