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
CMAKE_SOURCE_DIR = /home/ubuntu/MyCode/C++test2/P4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/MyCode/C++test2/P4/build

# Include any dependencies generated for this target.
include CMakeFiles/Hero.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Hero.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Hero.dir/flags.make

CMakeFiles/Hero.dir/Hero.cpp.o: CMakeFiles/Hero.dir/flags.make
CMakeFiles/Hero.dir/Hero.cpp.o: ../Hero.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/MyCode/C++test2/P4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Hero.dir/Hero.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hero.dir/Hero.cpp.o -c /home/ubuntu/MyCode/C++test2/P4/Hero.cpp

CMakeFiles/Hero.dir/Hero.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hero.dir/Hero.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/MyCode/C++test2/P4/Hero.cpp > CMakeFiles/Hero.dir/Hero.cpp.i

CMakeFiles/Hero.dir/Hero.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hero.dir/Hero.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/MyCode/C++test2/P4/Hero.cpp -o CMakeFiles/Hero.dir/Hero.cpp.s

# Object files for target Hero
Hero_OBJECTS = \
"CMakeFiles/Hero.dir/Hero.cpp.o"

# External object files for target Hero
Hero_EXTERNAL_OBJECTS =

Hero: CMakeFiles/Hero.dir/Hero.cpp.o
Hero: CMakeFiles/Hero.dir/build.make
Hero: CMakeFiles/Hero.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/MyCode/C++test2/P4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Hero"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Hero.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Hero.dir/build: Hero

.PHONY : CMakeFiles/Hero.dir/build

CMakeFiles/Hero.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Hero.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Hero.dir/clean

CMakeFiles/Hero.dir/depend:
	cd /home/ubuntu/MyCode/C++test2/P4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/MyCode/C++test2/P4 /home/ubuntu/MyCode/C++test2/P4 /home/ubuntu/MyCode/C++test2/P4/build /home/ubuntu/MyCode/C++test2/P4/build /home/ubuntu/MyCode/C++test2/P4/build/CMakeFiles/Hero.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Hero.dir/depend
