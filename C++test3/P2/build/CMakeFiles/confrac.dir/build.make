# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/MyCode/C++test3/P2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/MyCode/C++test3/P2/build

# Include any dependencies generated for this target.
include CMakeFiles/confrac.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/confrac.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/confrac.dir/flags.make

CMakeFiles/confrac.dir/confrac.cpp.o: CMakeFiles/confrac.dir/flags.make
CMakeFiles/confrac.dir/confrac.cpp.o: ../confrac.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/MyCode/C++test3/P2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/confrac.dir/confrac.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confrac.dir/confrac.cpp.o -c /home/ubuntu/MyCode/C++test3/P2/confrac.cpp

CMakeFiles/confrac.dir/confrac.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confrac.dir/confrac.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/MyCode/C++test3/P2/confrac.cpp > CMakeFiles/confrac.dir/confrac.cpp.i

CMakeFiles/confrac.dir/confrac.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confrac.dir/confrac.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/MyCode/C++test3/P2/confrac.cpp -o CMakeFiles/confrac.dir/confrac.cpp.s

# Object files for target confrac
confrac_OBJECTS = \
"CMakeFiles/confrac.dir/confrac.cpp.o"

# External object files for target confrac
confrac_EXTERNAL_OBJECTS =

confrac: CMakeFiles/confrac.dir/confrac.cpp.o
confrac: CMakeFiles/confrac.dir/build.make
confrac: CMakeFiles/confrac.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/MyCode/C++test3/P2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable confrac"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/confrac.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/confrac.dir/build: confrac

.PHONY : CMakeFiles/confrac.dir/build

CMakeFiles/confrac.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/confrac.dir/cmake_clean.cmake
.PHONY : CMakeFiles/confrac.dir/clean

CMakeFiles/confrac.dir/depend:
	cd /home/ubuntu/MyCode/C++test3/P2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/MyCode/C++test3/P2 /home/ubuntu/MyCode/C++test3/P2 /home/ubuntu/MyCode/C++test3/P2/build /home/ubuntu/MyCode/C++test3/P2/build /home/ubuntu/MyCode/C++test3/P2/build/CMakeFiles/confrac.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/confrac.dir/depend

