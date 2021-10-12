cmake_minimum_required(VERSION 3.5.0)

include(ExternalProject)

find_package(SWIG QUIET)
message("Swig version found: " ${SWIG_VERSION})
if(NOT SWIG_FOUND OR SWIG_VERSION VERSION_LESS "4.0.0")
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(FCL_C_FLAGS "-w")

    ExternalProject_Add(swig
      GIT_REPOSITORY    https://github.com/swig/swig.git
      GIT_TAG           rel-4.0.1
      SOURCE_DIR        ${CMAKE_BINARY_DIR}/../tesseract_ext/swig-src
      BUILD_IN_SOURCE   true
      CONFIGURE_COMMAND bash autogen.sh
      COMMAND           bash configure --prefix=${CMAKE_INSTALL_PREFIX}
      BUILD_COMMAND     make -j8
      INSTALL_COMMAND   make install
      COMMAND           ln -f -s ${CMAKE_INSTALL_PREFIX}/bin/swig ${CMAKE_INSTALL_PREFIX}/bin/swig4.0
      COMMAND           ln -f -s ${CMAKE_INSTALL_PREFIX}/bin/ccache-swig ${CMAKE_INSTALL_PREFIX}/bin/ccache-swig4.0
    )
    install(FILES package.xml DESTINATION share/swig)
  elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    message("Install swig on windows using 'choco install swig'")
    install(FILES package.xml DESTINATION share/dummy RENAME swig.xml)
  endif()
else()
  install(FILES package.xml DESTINATION share/dummy RENAME swig.xml)
endif()

