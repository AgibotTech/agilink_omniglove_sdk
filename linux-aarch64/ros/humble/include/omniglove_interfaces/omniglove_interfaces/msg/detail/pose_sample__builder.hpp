// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PoseSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_SAMPLE__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_SAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/pose_sample__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseSample_data
{
public:
  explicit Init_PoseSample_data(::omniglove_interfaces::msg::PoseSample & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PoseSample data(::omniglove_interfaces::msg::PoseSample::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseSample msg_;
};

class Init_PoseSample_metadata
{
public:
  Init_PoseSample_metadata()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseSample_data metadata(::omniglove_interfaces::msg::PoseSample::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_PoseSample_data(msg_);
  }

private:
  ::omniglove_interfaces::msg::PoseSample msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PoseSample>()
{
  return omniglove_interfaces::msg::builder::Init_PoseSample_metadata();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE_SAMPLE__BUILDER_HPP_
