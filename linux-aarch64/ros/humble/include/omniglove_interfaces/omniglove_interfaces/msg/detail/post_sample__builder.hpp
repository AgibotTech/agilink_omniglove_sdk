// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omniglove_interfaces:msg/PostSample.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_SAMPLE__BUILDER_HPP_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_SAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omniglove_interfaces/msg/detail/post_sample__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omniglove_interfaces
{

namespace msg
{

namespace builder
{

class Init_PostSample_data
{
public:
  explicit Init_PostSample_data(::omniglove_interfaces::msg::PostSample & msg)
  : msg_(msg)
  {}
  ::omniglove_interfaces::msg::PostSample data(::omniglove_interfaces::msg::PostSample::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostSample msg_;
};

class Init_PostSample_metadata
{
public:
  Init_PostSample_metadata()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostSample_data metadata(::omniglove_interfaces::msg::PostSample::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_PostSample_data(msg_);
  }

private:
  ::omniglove_interfaces::msg::PostSample msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::omniglove_interfaces::msg::PostSample>()
{
  return omniglove_interfaces::msg::builder::Init_PostSample_metadata();
}

}  // namespace omniglove_interfaces

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POST_SAMPLE__BUILDER_HPP_
