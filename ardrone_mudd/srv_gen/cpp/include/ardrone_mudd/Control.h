/* Auto-generated by genmsg_cpp for file /home/zdodds/Desktop/AlistairSummer/workspace/ardrone_mudd/srv/Control.srv */
#ifndef ARDRONE_MUDD_SERVICE_CONTROL_H
#define ARDRONE_MUDD_SERVICE_CONTROL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace ardrone_mudd
{
template <class ContainerAllocator>
struct ControlRequest_ {
  typedef ControlRequest_<ContainerAllocator> Type;

  ControlRequest_()
  : command()
  {
  }

  ControlRequest_(const ContainerAllocator& _alloc)
  : command(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  command;


private:
  static const char* __s_getDataType_() { return "ardrone_mudd/ControlRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "cba5e21e920a3a2b7b375cb65b64cdea"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "2fb3aa2736d70ecbfc297d3d9b879661"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string command\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, command);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, command);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(command);
    return size;
  }

  typedef boost::shared_ptr< ::ardrone_mudd::ControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_mudd::ControlRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ControlRequest
typedef  ::ardrone_mudd::ControlRequest_<std::allocator<void> > ControlRequest;

typedef boost::shared_ptr< ::ardrone_mudd::ControlRequest> ControlRequestPtr;
typedef boost::shared_ptr< ::ardrone_mudd::ControlRequest const> ControlRequestConstPtr;


template <class ContainerAllocator>
struct ControlResponse_ {
  typedef ControlResponse_<ContainerAllocator> Type;

  ControlResponse_()
  : result(false)
  {
  }

  ControlResponse_(const ContainerAllocator& _alloc)
  : result(false)
  {
  }

  typedef uint8_t _result_type;
  uint8_t result;


private:
  static const char* __s_getDataType_() { return "ardrone_mudd/ControlResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "eb13ac1f1354ccecb7941ee8fa2192e8"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "2fb3aa2736d70ecbfc297d3d9b879661"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "bool result\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, result);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, result);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(result);
    return size;
  }

  typedef boost::shared_ptr< ::ardrone_mudd::ControlResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_mudd::ControlResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ControlResponse
typedef  ::ardrone_mudd::ControlResponse_<std::allocator<void> > ControlResponse;

typedef boost::shared_ptr< ::ardrone_mudd::ControlResponse> ControlResponsePtr;
typedef boost::shared_ptr< ::ardrone_mudd::ControlResponse const> ControlResponseConstPtr;

struct Control
{

typedef ControlRequest Request;
typedef ControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Control
} // namespace ardrone_mudd

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ardrone_mudd::ControlRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ardrone_mudd::ControlRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ardrone_mudd::ControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const  ::ardrone_mudd::ControlRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xcba5e21e920a3a2bULL;
  static const uint64_t static_value2 = 0x7b375cb65b64cdeaULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_mudd::ControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ardrone_mudd/ControlRequest";
  }

  static const char* value(const  ::ardrone_mudd::ControlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ardrone_mudd::ControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string command\n\
\n\
";
  }

  static const char* value(const  ::ardrone_mudd::ControlRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ardrone_mudd::ControlResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ardrone_mudd::ControlResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ardrone_mudd::ControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const  ::ardrone_mudd::ControlResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_mudd::ControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ardrone_mudd/ControlResponse";
  }

  static const char* value(const  ::ardrone_mudd::ControlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ardrone_mudd::ControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool result\n\
\n\
\n\
";
  }

  static const char* value(const  ::ardrone_mudd::ControlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ardrone_mudd::ControlResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ardrone_mudd::ControlRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.command);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ControlRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ardrone_mudd::ControlResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ControlResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<ardrone_mudd::Control> {
  static const char* value() 
  {
    return "2fb3aa2736d70ecbfc297d3d9b879661";
  }

  static const char* value(const ardrone_mudd::Control&) { return value(); } 
};

template<>
struct DataType<ardrone_mudd::Control> {
  static const char* value() 
  {
    return "ardrone_mudd/Control";
  }

  static const char* value(const ardrone_mudd::Control&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ardrone_mudd::ControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2fb3aa2736d70ecbfc297d3d9b879661";
  }

  static const char* value(const ardrone_mudd::ControlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ardrone_mudd::ControlRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ardrone_mudd/Control";
  }

  static const char* value(const ardrone_mudd::ControlRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ardrone_mudd::ControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2fb3aa2736d70ecbfc297d3d9b879661";
  }

  static const char* value(const ardrone_mudd::ControlResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ardrone_mudd::ControlResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ardrone_mudd/Control";
  }

  static const char* value(const ardrone_mudd::ControlResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ARDRONE_MUDD_SERVICE_CONTROL_H

