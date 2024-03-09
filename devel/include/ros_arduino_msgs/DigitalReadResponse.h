// Generated by gencpp from file ros_arduino_msgs/DigitalReadResponse.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_DIGITALREADRESPONSE_H
#define ROS_ARDUINO_MSGS_MESSAGE_DIGITALREADRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_arduino_msgs
{
template <class ContainerAllocator>
struct DigitalReadResponse_
{
  typedef DigitalReadResponse_<ContainerAllocator> Type;

  DigitalReadResponse_()
    : value(false)  {
    }
  DigitalReadResponse_(const ContainerAllocator& _alloc)
    : value(false)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DigitalReadResponse_

typedef ::ros_arduino_msgs::DigitalReadResponse_<std::allocator<void> > DigitalReadResponse;

typedef boost::shared_ptr< ::ros_arduino_msgs::DigitalReadResponse > DigitalReadResponsePtr;
typedef boost::shared_ptr< ::ros_arduino_msgs::DigitalReadResponse const> DigitalReadResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_arduino_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe431d687bf4b2c65ULL;
  static const uint64_t static_value2 = 0xfbd94b12ae0cb5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_msgs/DigitalReadResponse";
  }

  static const char* value(const ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool value\n"
"\n"
;
  }

  static const char* value(const ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DigitalReadResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_arduino_msgs::DigitalReadResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_DIGITALREADRESPONSE_H