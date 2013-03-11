# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/romain/build/trunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/romain/build/trunk/build

# Include any dependencies generated for this target.
include libs/CCFbo/CMakeFiles/CC_FBO.dir/depend.make

# Include the progress variables for this target.
include libs/CCFbo/CMakeFiles/CC_FBO.dir/progress.make

# Include the compile flags for this target's objects.
include libs/CCFbo/CMakeFiles/CC_FBO.dir/flags.make

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO.dir/flags.make
libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o: ../libs/CCFbo/src/ccFrameBufferObject.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/romain/build/trunk/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o -c /home/romain/build/trunk/libs/CCFbo/src/ccFrameBufferObject.cpp

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.i"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/romain/build/trunk/libs/CCFbo/src/ccFrameBufferObject.cpp > CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.i

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.s"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/romain/build/trunk/libs/CCFbo/src/ccFrameBufferObject.cpp -o CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.s

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o.requires:
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o.requires

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o.provides: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o.requires
	$(MAKE) -f libs/CCFbo/CMakeFiles/CC_FBO.dir/build.make libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o.provides.build
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o.provides

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o.provides.build: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO.dir/flags.make
libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o: ../libs/CCFbo/src/ccBilateralFilter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/romain/build/trunk/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o -c /home/romain/build/trunk/libs/CCFbo/src/ccBilateralFilter.cpp

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.i"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/romain/build/trunk/libs/CCFbo/src/ccBilateralFilter.cpp > CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.i

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.s"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/romain/build/trunk/libs/CCFbo/src/ccBilateralFilter.cpp -o CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.s

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o.requires:
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o.requires

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o.provides: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o.requires
	$(MAKE) -f libs/CCFbo/CMakeFiles/CC_FBO.dir/build.make libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o.provides.build
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o.provides

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o.provides.build: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO.dir/flags.make
libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o: ../libs/CCFbo/src/ccFBOUtils.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/romain/build/trunk/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o -c /home/romain/build/trunk/libs/CCFbo/src/ccFBOUtils.cpp

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.i"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/romain/build/trunk/libs/CCFbo/src/ccFBOUtils.cpp > CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.i

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.s"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/romain/build/trunk/libs/CCFbo/src/ccFBOUtils.cpp -o CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.s

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o.requires:
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o.requires

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o.provides: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o.requires
	$(MAKE) -f libs/CCFbo/CMakeFiles/CC_FBO.dir/build.make libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o.provides.build
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o.provides

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o.provides.build: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o: libs/CCFbo/CMakeFiles/CC_FBO.dir/flags.make
libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o: ../libs/CCFbo/src/ccShader.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/romain/build/trunk/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o -c /home/romain/build/trunk/libs/CCFbo/src/ccShader.cpp

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CC_FBO.dir/src/ccShader.cpp.i"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/romain/build/trunk/libs/CCFbo/src/ccShader.cpp > CMakeFiles/CC_FBO.dir/src/ccShader.cpp.i

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CC_FBO.dir/src/ccShader.cpp.s"
	cd /home/romain/build/trunk/build/libs/CCFbo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/romain/build/trunk/libs/CCFbo/src/ccShader.cpp -o CMakeFiles/CC_FBO.dir/src/ccShader.cpp.s

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o.requires:
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o.requires

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o.provides: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o.requires
	$(MAKE) -f libs/CCFbo/CMakeFiles/CC_FBO.dir/build.make libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o.provides.build
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o.provides

libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o.provides.build: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o

# Object files for target CC_FBO
CC_FBO_OBJECTS = \
"CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o" \
"CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o" \
"CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o" \
"CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o"

# External object files for target CC_FBO
CC_FBO_EXTERNAL_OBJECTS =

libs/CCFbo/libCC_FBO.a: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o
libs/CCFbo/libCC_FBO.a: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o
libs/CCFbo/libCC_FBO.a: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o
libs/CCFbo/libCC_FBO.a: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o
libs/CCFbo/libCC_FBO.a: libs/CCFbo/CMakeFiles/CC_FBO.dir/build.make
libs/CCFbo/libCC_FBO.a: libs/CCFbo/CMakeFiles/CC_FBO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libCC_FBO.a"
	cd /home/romain/build/trunk/build/libs/CCFbo && $(CMAKE_COMMAND) -P CMakeFiles/CC_FBO.dir/cmake_clean_target.cmake
	cd /home/romain/build/trunk/build/libs/CCFbo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CC_FBO.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/CCFbo/CMakeFiles/CC_FBO.dir/build: libs/CCFbo/libCC_FBO.a
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/build

libs/CCFbo/CMakeFiles/CC_FBO.dir/requires: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFrameBufferObject.cpp.o.requires
libs/CCFbo/CMakeFiles/CC_FBO.dir/requires: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccBilateralFilter.cpp.o.requires
libs/CCFbo/CMakeFiles/CC_FBO.dir/requires: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccFBOUtils.cpp.o.requires
libs/CCFbo/CMakeFiles/CC_FBO.dir/requires: libs/CCFbo/CMakeFiles/CC_FBO.dir/src/ccShader.cpp.o.requires
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/requires

libs/CCFbo/CMakeFiles/CC_FBO.dir/clean:
	cd /home/romain/build/trunk/build/libs/CCFbo && $(CMAKE_COMMAND) -P CMakeFiles/CC_FBO.dir/cmake_clean.cmake
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/clean

libs/CCFbo/CMakeFiles/CC_FBO.dir/depend:
	cd /home/romain/build/trunk/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/romain/build/trunk /home/romain/build/trunk/libs/CCFbo /home/romain/build/trunk/build /home/romain/build/trunk/build/libs/CCFbo /home/romain/build/trunk/build/libs/CCFbo/CMakeFiles/CC_FBO.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/CCFbo/CMakeFiles/CC_FBO.dir/depend
