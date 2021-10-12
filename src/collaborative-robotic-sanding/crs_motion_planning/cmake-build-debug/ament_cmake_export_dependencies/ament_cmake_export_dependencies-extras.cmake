# generated from ament_cmake_export_dependencies/cmake/ament_cmake_export_dependencies-extras.cmake.in

set(_exported_dependencies "ament_cmake;ament_index_cpp;rosidl_default_generators;rclcpp;rclcpp_action;crs_msgs;control_msgs;tesseract_motion_planners;tesseract_rosutils;ur_ikfast_kinematics;descartes_light;descartes_ikfast;std_srvs;std_msgs;sensor_msgs;action_msgs;visualization_msgs;geometry_msgs;trajectory_msgs;tf2;tf2_ros;tf2_eigen;tf2_geometry_msgs;yaml_cpp_vendor;iterative_spline_parameterization")

find_package(ament_cmake_libraries QUIET REQUIRED)

# find_package() all dependencies
# and append their DEFINITIONS INCLUDE_DIRS, LIBRARIES, and LINK_FLAGS
# variables to crs_motion_planning_DEFINITIONS, crs_motion_planning_INCLUDE_DIRS,
# crs_motion_planning_LIBRARIES, and crs_motion_planning_LINK_FLAGS.
# Additionally collect the direct dependency names in
# crs_motion_planning_DEPENDENCIES as well as the recursive dependency names
# in crs_motion_planning_RECURSIVE_DEPENDENCIES.
if(NOT _exported_dependencies STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  set(crs_motion_planning_DEPENDENCIES ${_exported_dependencies})
  set(crs_motion_planning_RECURSIVE_DEPENDENCIES ${_exported_dependencies})
  set(_libraries)
  foreach(_dep ${_exported_dependencies})
    if(NOT ${_dep}_FOUND)
      find_package("${_dep}" QUIET REQUIRED)
    endif()
    if(${_dep}_DEFINITIONS)
      list_append_unique(crs_motion_planning_DEFINITIONS "${${_dep}_DEFINITIONS}")
    endif()
    if(${_dep}_INCLUDE_DIRS)
      list_append_unique(crs_motion_planning_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
    endif()
    if(${_dep}_LIBRARIES)
      list(APPEND _libraries "${${_dep}_LIBRARIES}")
    endif()
    if(${_dep}_LINK_FLAGS)
      list_append_unique(crs_motion_planning_LINK_FLAGS "${${_dep}_LINK_FLAGS}")
    endif()
    if(${_dep}_RECURSIVE_DEPENDENCIES)
      list_append_unique(crs_motion_planning_RECURSIVE_DEPENDENCIES "${${_dep}_RECURSIVE_DEPENDENCIES}")
    endif()
    if(_libraries)
      ament_libraries_deduplicate(_libraries "${_libraries}")
      list(APPEND crs_motion_planning_LIBRARIES "${_libraries}")
    endif()
  endforeach()
endif()
