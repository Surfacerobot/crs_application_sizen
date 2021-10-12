cmake_minimum_required(VERSION 3.5)
project(ur_dashboard_msgs)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(std_msgs REQUIRED)

set(FILES
  msg/ProgramState.msg
  msg/RobotMode.msg
  msg/SafetyMode.msg
  srv/AddToLog.srv
  srv/GetLoadedProgram.srv
  srv/GetProgramState.srv
  srv/GetRobotMode.srv
  srv/GetSafetyMode.srv
  srv/IsProgramRunning.srv
  srv/IsProgramSaved.srv
  srv/Load.srv
  srv/Popup.srv
  srv/RawRequest.srv
  action/SetMode.action
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${FILES}
  DEPENDENCIES std_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
