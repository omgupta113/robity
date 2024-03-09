# Install script for directory: /home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/om/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_arduino_msgs/msg" TYPE FILE FILES
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/msg/AnalogFloat.msg"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/msg/Analog.msg"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/msg/ArduinoConstants.msg"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/msg/Digital.msg"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/msg/SensorState.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_arduino_msgs/srv" TYPE FILE FILES
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/AnalogWrite.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/AnalogSensorWrite.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/AnalogFloatSensorWrite.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/AnalogPinMode.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/AnalogRead.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/AnalogSensorRead.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/AnalogFloatSensorRead.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/DigitalPinMode.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/DigitalRead.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/DigitalSensorRead.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/DigitalSetDirection.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/DigitalSensorPinMode.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/DigitalWrite.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/DigitalSensorWrite.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/Enable.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/Relax.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/AnalogSensorRead.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/ServoAttach.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/ServoDetach.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/ServoRead.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/ServoWrite.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/SetSpeed.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/SetServoSpeed.srv"
    "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/UpdatePID.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_arduino_msgs/cmake" TYPE FILE FILES "/home/om/catkin_ws/build/ros_arduino_bridge/ros_arduino_msgs/catkin_generated/installspace/ros_arduino_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/om/catkin_ws/devel/include/ros_arduino_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/om/catkin_ws/devel/share/roseus/ros/ros_arduino_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/om/catkin_ws/devel/share/common-lisp/ros/ros_arduino_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/om/catkin_ws/devel/share/gennodejs/ros/ros_arduino_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/om/catkin_ws/devel/lib/python2.7/dist-packages/ros_arduino_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/om/catkin_ws/devel/lib/python2.7/dist-packages/ros_arduino_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/om/catkin_ws/build/ros_arduino_bridge/ros_arduino_msgs/catkin_generated/installspace/ros_arduino_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_arduino_msgs/cmake" TYPE FILE FILES "/home/om/catkin_ws/build/ros_arduino_bridge/ros_arduino_msgs/catkin_generated/installspace/ros_arduino_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_arduino_msgs/cmake" TYPE FILE FILES
    "/home/om/catkin_ws/build/ros_arduino_bridge/ros_arduino_msgs/catkin_generated/installspace/ros_arduino_msgsConfig.cmake"
    "/home/om/catkin_ws/build/ros_arduino_bridge/ros_arduino_msgs/catkin_generated/installspace/ros_arduino_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ros_arduino_msgs" TYPE FILE FILES "/home/om/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/package.xml")
endif()

