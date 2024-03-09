// Generated by gencpp from file ros_arduino_msgs/ServoAttach.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_SERVOATTACH_H
#define ROS_ARDUINO_MSGS_MESSAGE_SERVOATTACH_H

#include <ros/service_traits.h>


#include <ros_arduino_msgs/ServoAttachRequest.h>
#include <ros_arduino_msgs/ServoAttachResponse.h>


namespace ros_arduino_msgs
{

struct ServoAttach
{

typedef ServoAttachRequest Request;
typedef ServoAttachResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ServoAttach
} // namespace ros_arduino_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_arduino_msgs::ServoAttach > {
  static const char* value()
  {
    return "541b98e964705918fa8eb206b65347b3";
  }

  static const char* value(const ::ros_arduino_msgs::ServoAttach&) { return value(); }
};

template<>
struct DataType< ::ros_arduino_msgs::ServoAttach > {
  static const char* value()
  {
    return "ros_arduino_msgs/ServoAttach";
  }

  static const char* value(const ::ros_arduino_msgs::ServoAttach&) { return value(); }
};


// service_traits::MD5Sum< ::ros_arduino_msgs::ServoAttachRequest> should match
// service_traits::MD5Sum< ::ros_arduino_msgs::ServoAttach >
template<>
struct MD5Sum< ::ros_arduino_msgs::ServoAttachRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::ServoAttach >::value();
  }
  static const char* value(const ::ros_arduino_msgs::ServoAttachRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::ServoAttachRequest> should match
// service_traits::DataType< ::ros_arduino_msgs::ServoAttach >
template<>
struct DataType< ::ros_arduino_msgs::ServoAttachRequest>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::ServoAttach >::value();
  }
  static const char* value(const ::ros_arduino_msgs::ServoAttachRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_arduino_msgs::ServoAttachResponse> should match
// service_traits::MD5Sum< ::ros_arduino_msgs::ServoAttach >
template<>
struct MD5Sum< ::ros_arduino_msgs::ServoAttachResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::ServoAttach >::value();
  }
  static const char* value(const ::ros_arduino_msgs::ServoAttachResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::ServoAttachResponse> should match
// service_traits::DataType< ::ros_arduino_msgs::ServoAttach >
template<>
struct DataType< ::ros_arduino_msgs::ServoAttachResponse>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::ServoAttach >::value();
  }
  static const char* value(const ::ros_arduino_msgs::ServoAttachResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_SERVOATTACH_H
