# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/federicoladereche/Documents/katas/coding_interviews/min_stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_min_stack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test_min_stack.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_min_stack.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_min_stack.dir/flags.make

tests/CMakeFiles/test_min_stack.dir/test_min_stack.cc.o: tests/CMakeFiles/test_min_stack.dir/flags.make
tests/CMakeFiles/test_min_stack.dir/test_min_stack.cc.o: /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/tests/test_min_stack.cc
tests/CMakeFiles/test_min_stack.dir/test_min_stack.cc.o: tests/CMakeFiles/test_min_stack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_min_stack.dir/test_min_stack.cc.o"
	cd /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test_min_stack.dir/test_min_stack.cc.o -MF CMakeFiles/test_min_stack.dir/test_min_stack.cc.o.d -o CMakeFiles/test_min_stack.dir/test_min_stack.cc.o -c /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/tests/test_min_stack.cc

tests/CMakeFiles/test_min_stack.dir/test_min_stack.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_min_stack.dir/test_min_stack.cc.i"
	cd /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/tests/test_min_stack.cc > CMakeFiles/test_min_stack.dir/test_min_stack.cc.i

tests/CMakeFiles/test_min_stack.dir/test_min_stack.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_min_stack.dir/test_min_stack.cc.s"
	cd /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/tests/test_min_stack.cc -o CMakeFiles/test_min_stack.dir/test_min_stack.cc.s

# Object files for target test_min_stack
test_min_stack_OBJECTS = \
"CMakeFiles/test_min_stack.dir/test_min_stack.cc.o"

# External object files for target test_min_stack
test_min_stack_EXTERNAL_OBJECTS =

tests/test_min_stack: tests/CMakeFiles/test_min_stack.dir/test_min_stack.cc.o
tests/test_min_stack: tests/CMakeFiles/test_min_stack.dir/build.make
tests/test_min_stack: libmin_stack.a
tests/test_min_stack: tests/CMakeFiles/test_min_stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_min_stack"
	cd /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_min_stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_min_stack.dir/build: tests/test_min_stack
.PHONY : tests/CMakeFiles/test_min_stack.dir/build

tests/CMakeFiles/test_min_stack.dir/clean:
	cd /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_min_stack.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_min_stack.dir/clean

tests/CMakeFiles/test_min_stack.dir/depend:
	cd /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/federicoladereche/Documents/katas/coding_interviews/min_stack /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/tests /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build/tests /Users/federicoladereche/Documents/katas/coding_interviews/min_stack/build/tests/CMakeFiles/test_min_stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_min_stack.dir/depend

