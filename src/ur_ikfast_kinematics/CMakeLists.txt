cmake_minimum_required(VERSION 3.5)

project(ur_ikfast_kinematics VERSION 0.1.0 LANGUAGES CXX)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra)
endif()

find_package(descartes_ikfast REQUIRED)

add_library(ur10e_ikfast SHARED
    #src/descartes_ikfast_ur10e.cpp
	#src/fanuc_ikfast_m20ia.cpp
    	src/fanuc_ikfast_r2000ic.cpp
	#src/abb_ikfast_irb6700.cpp
	)
target_link_libraries(ur10e_ikfast PUBLIC
    descartes::descartes_ikfast
    )
if(CXX_FEATURE_FOUND EQUAL "-1")
    target_compile_options(ur10e_ikfast PRIVATE -std=c++14)
else()
    target_compile_features(ur10e_ikfast PRIVATE cxx_std_14)
endif()
target_include_directories(ur10e_ikfast PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
    "$<INSTALL_INTERFACE:include>")
add_dependencies(ur10e_ikfast descartes::descartes_ikfast)
list (APPEND PACKAGE_LIBRARIES ur10e_ikfast)

install(TARGETS ${PACKAGE_LIBRARIES} EXPORT ${PROJECT_NAME}-targets DESTINATION lib)
install(EXPORT ${PROJECT_NAME}-targets NAMESPACE ur_ikfast_kinematics:: DESTINATION lib/cmake/${PROJECT_NAME})

install(DIRECTORY include/${PROJECT_NAME}
  DESTINATION include
  FILES_MATCHING PATTERN "*.h*"
  PATTERN ".svn" EXCLUDE
 )

 # Create cmake config files
 include(CMakePackageConfigHelpers)
 configure_package_config_file(${CMAKE_CURRENT_LIST_DIR}/cmake/${PROJECT_NAME}-config.cmake.in
   ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake
   INSTALL_DESTINATION lib/cmake/${PROJECT_NAME}
   NO_CHECK_REQUIRED_COMPONENTS_MACRO)

 write_basic_package_version_file(${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake
   VERSION ${PROJECT_VERSION} COMPATIBILITY ExactVersion)

 install(FILES
   "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
   "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake"
   DESTINATION lib/cmake/${PROJECT_NAME})

 export(EXPORT ${PROJECT_NAME}-targets FILE ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-targets.cmake)
