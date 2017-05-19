// Generated by gencpp from file yeti_snowplow/turn.msg
// DO NOT EDIT!


#ifndef YETI_SNOWPLOW_MESSAGE_TURN_H
#define YETI_SNOWPLOW_MESSAGE_TURN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace yeti_snowplow
{
template <class ContainerAllocator>
struct turn_
{
  typedef turn_<ContainerAllocator> Type;

  turn_()
    : angle(0.0)
    , stop(false)  {
    }
  turn_(const ContainerAllocator& _alloc)
    : angle(0.0)
    , stop(false)  {
  (void)_alloc;
    }



   typedef float _angle_type;
  _angle_type angle;

   typedef uint8_t _stop_type;
  _stop_type stop;




  typedef boost::shared_ptr< ::yeti_snowplow::turn_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yeti_snowplow::turn_<ContainerAllocator> const> ConstPtr;

}; // struct turn_

typedef ::yeti_snowplow::turn_<std::allocator<void> > turn;

typedef boost::shared_ptr< ::yeti_snowplow::turn > turnPtr;
typedef boost::shared_ptr< ::yeti_snowplow::turn const> turnConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yeti_snowplow::turn_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yeti_snowplow::turn_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace yeti_snowplow

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'yeti_snowplow': ['/home/ben/Catkin/catkin_ws_argon/src/rover_manual/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::yeti_snowplow::turn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yeti_snowplow::turn_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yeti_snowplow::turn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yeti_snowplow::turn_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yeti_snowplow::turn_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yeti_snowplow::turn_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yeti_snowplow::turn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d13a914ba0846a78d8f6016249a48c2";
  }

  static const char* value(const ::yeti_snowplow::turn_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d13a914ba0846a7ULL;
  static const uint64_t static_value2 = 0x8d8f6016249a48c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::yeti_snowplow::turn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yeti_snowplow/turn";
  }

  static const char* value(const ::yeti_snowplow::turn_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yeti_snowplow::turn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 angle\n\
bool stop\n\
";
  }

  static const char* value(const ::yeti_snowplow::turn_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yeti_snowplow::turn_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angle);
      stream.next(m.stop);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct turn_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yeti_snowplow::turn_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yeti_snowplow::turn_<ContainerAllocator>& v)
  {
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stop);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YETI_SNOWPLOW_MESSAGE_TURN_H
