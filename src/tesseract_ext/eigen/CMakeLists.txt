cmake_minimum_required(VERSION 3.5.0)
project(eigen)

find_package(Eigen3 QUIET)
if (NOT Eigen3_FOUND OR INSTALL_EIGEN)
  if (NOT INSTALL_EIGEN_TAG)
    set(INSTALL_EIGEN_TAG master)
  endif()

  include(ExternalProject)

  ExternalProject_Add(Eigen3
    GIT_REPOSITORY    https://gitlab.com/libeigen/eigen.git
    GIT_TAG           ${INSTALL_EIGEN_TAG}
    SOURCE_DIR        ${CMAKE_BINARY_DIR}/../tesseract_ext/Eigen3-src
    BINARY_DIR        ${CMAKE_BINARY_DIR}/../tesseract_ext/Eigen3-build
    CMAKE_CACHE_ARGS
            -DCMAKE_INSTALL_PREFIX:STRING=${CMAKE_INSTALL_PREFIX}
            -DCMAKE_BUILD_TYPE:STRING=Release
            -DBUILD_TESTING=OFF
  )

  install(FILES package.xml DESTINATION share/Eigen3)
else()
  install(FILES package.xml DESTINATION share/dummy RENAME eigen3.xml)
endif()

