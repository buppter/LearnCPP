# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sxt/Documents/CPP/Learn_CPP/operator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sxt/Documents/CPP/Learn_CPP/operator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/operator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/operator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/operator.dir/flags.make

CMakeFiles/operator.dir/01_arithmetic_operator.cpp.o: CMakeFiles/operator.dir/flags.make
CMakeFiles/operator.dir/01_arithmetic_operator.cpp.o: ../01_arithmetic_operator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sxt/Documents/CPP/Learn_CPP/operator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/operator.dir/01_arithmetic_operator.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/operator.dir/01_arithmetic_operator.cpp.o -c /Users/sxt/Documents/CPP/Learn_CPP/operator/01_arithmetic_operator.cpp

CMakeFiles/operator.dir/01_arithmetic_operator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/operator.dir/01_arithmetic_operator.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sxt/Documents/CPP/Learn_CPP/operator/01_arithmetic_operator.cpp > CMakeFiles/operator.dir/01_arithmetic_operator.cpp.i

CMakeFiles/operator.dir/01_arithmetic_operator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/operator.dir/01_arithmetic_operator.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sxt/Documents/CPP/Learn_CPP/operator/01_arithmetic_operator.cpp -o CMakeFiles/operator.dir/01_arithmetic_operator.cpp.s

# Object files for target operator
operator_OBJECTS = \
"CMakeFiles/operator.dir/01_arithmetic_operator.cpp.o"

# External object files for target operator
operator_EXTERNAL_OBJECTS =

operator: CMakeFiles/operator.dir/01_arithmetic_operator.cpp.o
operator: CMakeFiles/operator.dir/build.make
operator: CMakeFiles/operator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sxt/Documents/CPP/Learn_CPP/operator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable operator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/operator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/operator.dir/build: operator

.PHONY : CMakeFiles/operator.dir/build

CMakeFiles/operator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/operator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/operator.dir/clean

CMakeFiles/operator.dir/depend:
	cd /Users/sxt/Documents/CPP/Learn_CPP/operator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sxt/Documents/CPP/Learn_CPP/operator /Users/sxt/Documents/CPP/Learn_CPP/operator /Users/sxt/Documents/CPP/Learn_CPP/operator/cmake-build-debug /Users/sxt/Documents/CPP/Learn_CPP/operator/cmake-build-debug /Users/sxt/Documents/CPP/Learn_CPP/operator/cmake-build-debug/CMakeFiles/operator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/operator.dir/depend

