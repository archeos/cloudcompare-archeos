# Install script for directory: /home/monumentum/package/cc-upstream/plugins

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qEDL/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qCork/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qHPR/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qSRA/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qKinect/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qBlur/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qAnimation/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qPoissonRecon/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qSSAO/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qRANSAC_SD/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qPCV/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qGMMREG/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qFacets/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qPCL/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qDummyPlugin/cmake_install.cmake")
  INCLUDE("/home/monumentum/package/cc-upstream/build/plugins/qCSVMatrixIO/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)
