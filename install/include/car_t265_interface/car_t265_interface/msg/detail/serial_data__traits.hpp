// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_t265_interface:msg/SerialData.idl
// generated code does not contain a copyright notice

#ifndef CAR_T265_INTERFACE__MSG__DETAIL__SERIAL_DATA__TRAITS_HPP_
#define CAR_T265_INTERFACE__MSG__DETAIL__SERIAL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "car_t265_interface/msg/detail/serial_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace car_t265_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const SerialData & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SerialData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SerialData & msg, bool use_flow_style = false)
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

}  // namespace car_t265_interface

namespace rosidl_generator_traits
{

[[deprecated("use car_t265_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const car_t265_interface::msg::SerialData & msg,
  std::ostream & out, size_t indentation = 0)
{
  car_t265_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use car_t265_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const car_t265_interface::msg::SerialData & msg)
{
  return car_t265_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<car_t265_interface::msg::SerialData>()
{
  return "car_t265_interface::msg::SerialData";
}

template<>
inline const char * name<car_t265_interface::msg::SerialData>()
{
  return "car_t265_interface/msg/SerialData";
}

template<>
struct has_fixed_size<car_t265_interface::msg::SerialData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_t265_interface::msg::SerialData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_t265_interface::msg::SerialData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_T265_INTERFACE__MSG__DETAIL__SERIAL_DATA__TRAITS_HPP_
