# generated from ament_cmake_export_dependencies/cmake/ament_cmake_export_dependencies-extras.cmake.in

set(_exported_dependencies "sensor_msgs;std_msgs;geometry_msgs;trajectory_msgs;action_msgs;rosidl_default_runtime")

find_package(ament_cmake_libraries QUIET REQUIRED)

# find_package() all dependencies
# and append their DEFINITIONS INCLUDE_DIRS, LIBRARIES, and LINK_FLAGS
# variables to cartesian_trajectory_msgs_DEFINITIONS, cartesian_trajectory_msgs_INCLUDE_DIRS,
# cartesian_trajectory_msgs_LIBRARIES, and cartesian_trajectory_msgs_LINK_FLAGS.
# Additionally collect the direct dependency names in
# cartesian_trajectory_msgs_DEPENDENCIES as well as the recursive dependency names
# in cartesian_trajectory_msgs_RECURSIVE_DEPENDENCIES.
if(NOT _exported_dependencies STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  set(cartesian_trajectory_msgs_DEPENDENCIES ${_exported_dependencies})
  set(cartesian_trajectory_msgs_RECURSIVE_DEPENDENCIES ${_exported_dependencies})
  set(_libraries)
  foreach(_dep ${_exported_dependencies})
    if(NOT ${_dep}_FOUND)
      find_package("${_dep}" QUIET REQUIRED)
    endif()
    if(${_dep}_DEFINITIONS)
      list_append_unique(cartesian_trajectory_msgs_DEFINITIONS "${${_dep}_DEFINITIONS}")
    endif()
    if(${_dep}_INCLUDE_DIRS)
      list_append_unique(cartesian_trajectory_msgs_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
    endif()
    if(${_dep}_LIBRARIES)
      list(APPEND _libraries "${${_dep}_LIBRARIES}")
    endif()
    if(${_dep}_LINK_FLAGS)
      list_append_unique(cartesian_trajectory_msgs_LINK_FLAGS "${${_dep}_LINK_FLAGS}")
    endif()
    if(${_dep}_RECURSIVE_DEPENDENCIES)
      list_append_unique(cartesian_trajectory_msgs_RECURSIVE_DEPENDENCIES "${${_dep}_RECURSIVE_DEPENDENCIES}")
    endif()
    if(_libraries)
      ament_libraries_deduplicate(_libraries "${_libraries}")
      list(APPEND cartesian_trajectory_msgs_LIBRARIES "${_libraries}")
    endif()
  endforeach()
endif()
