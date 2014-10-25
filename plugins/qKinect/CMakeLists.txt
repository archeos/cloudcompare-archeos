cmake_minimum_required(VERSION 2.8)

# Eliminate a warning when building in Windows that relates
# to static linking of Qt executables to qtmain.lib.
# This policy was introduced in CMake version 2.8.11.
# CMake version 2.8.11.2 warns when the policy is not set
# and uses OLD behavior.
if(POLICY CMP0020)
  cmake_policy(SET CMP0020 OLD)
endif()

option( INSTALL_QKINECT_PLUGIN "Check to install qKINECT plugin" OFF )

if (INSTALL_QKINECT_PLUGIN)

#CloudCompare 'Kinect' plugin
project( QKINECT_PLUGIN )

# libfreenect is needed to build library
include( LibfreenectSupport.cmake )

include( ../CMakePluginTpl.cmake )

target_link_libfreenect( ${PROJECT_NAME} ${CLOUDCOMPARE_DEST_FOLDER} )

endif()
