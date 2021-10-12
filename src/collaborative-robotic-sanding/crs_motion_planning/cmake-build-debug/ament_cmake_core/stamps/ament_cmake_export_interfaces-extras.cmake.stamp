# generated from ament_cmake_export_interfaces/cmake/ament_cmake_export_interfaces-extras.cmake.in

set(_exported_interfaces "-targets")

# include all exported interfaces
if(NOT _exported_interfaces STREQUAL "")
  foreach(_interface ${_exported_interfaces})
    include("${crs_motion_planning_DIR}/${_interface}Export.cmake")
    list(APPEND crs_motion_planning_INTERFACES "crs_motion_planning::${_interface}")
  endforeach()
endif()
