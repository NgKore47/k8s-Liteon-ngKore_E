# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rhel/Liteon-ngKore_E/ninja

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rhel/Liteon-ngKore_E/ninja/build-cmake

# Include any dependencies generated for this target.
include CMakeFiles/ninja.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ninja.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ninja.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ninja.dir/flags.make

build/browse_py.h: ../src/inline.sh
build/browse_py.h: ../src/browse.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating build/browse_py.h"
	cd /home/rhel/Liteon-ngKore_E/ninja && /usr/bin/cmake -E make_directory /home/rhel/Liteon-ngKore_E/ninja/build-cmake/build
	cd /home/rhel/Liteon-ngKore_E/ninja && src/inline.sh kBrowsePy < src/browse.py > /home/rhel/Liteon-ngKore_E/ninja/build-cmake/build/browse_py.h

CMakeFiles/ninja.dir/src/ninja.cc.o: CMakeFiles/ninja.dir/flags.make
CMakeFiles/ninja.dir/src/ninja.cc.o: ../src/ninja.cc
CMakeFiles/ninja.dir/src/ninja.cc.o: CMakeFiles/ninja.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ninja.dir/src/ninja.cc.o"
	/opt/rh/gcc-toolset-11/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ninja.dir/src/ninja.cc.o -MF CMakeFiles/ninja.dir/src/ninja.cc.o.d -o CMakeFiles/ninja.dir/src/ninja.cc.o -c /home/rhel/Liteon-ngKore_E/ninja/src/ninja.cc

CMakeFiles/ninja.dir/src/ninja.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ninja.dir/src/ninja.cc.i"
	/opt/rh/gcc-toolset-11/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rhel/Liteon-ngKore_E/ninja/src/ninja.cc > CMakeFiles/ninja.dir/src/ninja.cc.i

CMakeFiles/ninja.dir/src/ninja.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ninja.dir/src/ninja.cc.s"
	/opt/rh/gcc-toolset-11/root/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rhel/Liteon-ngKore_E/ninja/src/ninja.cc -o CMakeFiles/ninja.dir/src/ninja.cc.s

CMakeFiles/ninja.dir/src/browse.cc.o: CMakeFiles/ninja.dir/flags.make
CMakeFiles/ninja.dir/src/browse.cc.o: ../src/browse.cc
CMakeFiles/ninja.dir/src/browse.cc.o: build/browse_py.h
CMakeFiles/ninja.dir/src/browse.cc.o: CMakeFiles/ninja.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ninja.dir/src/browse.cc.o"
	/opt/rh/gcc-toolset-11/root/usr/bin/c++ $(CXX_DEFINES) -DNINJA_PYTHON=\"python\" -I/home/rhel/Liteon-ngKore_E/ninja/build-cmake $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ninja.dir/src/browse.cc.o -MF CMakeFiles/ninja.dir/src/browse.cc.o.d -o CMakeFiles/ninja.dir/src/browse.cc.o -c /home/rhel/Liteon-ngKore_E/ninja/src/browse.cc

CMakeFiles/ninja.dir/src/browse.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ninja.dir/src/browse.cc.i"
	/opt/rh/gcc-toolset-11/root/usr/bin/c++ $(CXX_DEFINES) -DNINJA_PYTHON=\"python\" -I/home/rhel/Liteon-ngKore_E/ninja/build-cmake $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rhel/Liteon-ngKore_E/ninja/src/browse.cc > CMakeFiles/ninja.dir/src/browse.cc.i

CMakeFiles/ninja.dir/src/browse.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ninja.dir/src/browse.cc.s"
	/opt/rh/gcc-toolset-11/root/usr/bin/c++ $(CXX_DEFINES) -DNINJA_PYTHON=\"python\" -I/home/rhel/Liteon-ngKore_E/ninja/build-cmake $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rhel/Liteon-ngKore_E/ninja/src/browse.cc -o CMakeFiles/ninja.dir/src/browse.cc.s

# Object files for target ninja
ninja_OBJECTS = \
"CMakeFiles/ninja.dir/src/ninja.cc.o" \
"CMakeFiles/ninja.dir/src/browse.cc.o"

# External object files for target ninja
ninja_EXTERNAL_OBJECTS = \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/build_log.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/build.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/clean.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/clparser.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/dyndep.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/dyndep_parser.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/debug_flags.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/deps_log.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/disk_interface.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/edit_distance.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/eval_env.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/graph.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/graphviz.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/json.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/line_printer.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/manifest_parser.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/metrics.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/missing_deps.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/parser.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/state.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/status.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/string_piece_util.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/util.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/version.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja.dir/src/subprocess-posix.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja-re2c.dir/src/depfile_parser.cc.o" \
"/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/libninja-re2c.dir/src/lexer.cc.o"

ninja: CMakeFiles/ninja.dir/src/ninja.cc.o
ninja: CMakeFiles/ninja.dir/src/browse.cc.o
ninja: CMakeFiles/libninja.dir/src/build_log.cc.o
ninja: CMakeFiles/libninja.dir/src/build.cc.o
ninja: CMakeFiles/libninja.dir/src/clean.cc.o
ninja: CMakeFiles/libninja.dir/src/clparser.cc.o
ninja: CMakeFiles/libninja.dir/src/dyndep.cc.o
ninja: CMakeFiles/libninja.dir/src/dyndep_parser.cc.o
ninja: CMakeFiles/libninja.dir/src/debug_flags.cc.o
ninja: CMakeFiles/libninja.dir/src/deps_log.cc.o
ninja: CMakeFiles/libninja.dir/src/disk_interface.cc.o
ninja: CMakeFiles/libninja.dir/src/edit_distance.cc.o
ninja: CMakeFiles/libninja.dir/src/eval_env.cc.o
ninja: CMakeFiles/libninja.dir/src/graph.cc.o
ninja: CMakeFiles/libninja.dir/src/graphviz.cc.o
ninja: CMakeFiles/libninja.dir/src/json.cc.o
ninja: CMakeFiles/libninja.dir/src/line_printer.cc.o
ninja: CMakeFiles/libninja.dir/src/manifest_parser.cc.o
ninja: CMakeFiles/libninja.dir/src/metrics.cc.o
ninja: CMakeFiles/libninja.dir/src/missing_deps.cc.o
ninja: CMakeFiles/libninja.dir/src/parser.cc.o
ninja: CMakeFiles/libninja.dir/src/state.cc.o
ninja: CMakeFiles/libninja.dir/src/status.cc.o
ninja: CMakeFiles/libninja.dir/src/string_piece_util.cc.o
ninja: CMakeFiles/libninja.dir/src/util.cc.o
ninja: CMakeFiles/libninja.dir/src/version.cc.o
ninja: CMakeFiles/libninja.dir/src/subprocess-posix.cc.o
ninja: CMakeFiles/libninja-re2c.dir/src/depfile_parser.cc.o
ninja: CMakeFiles/libninja-re2c.dir/src/lexer.cc.o
ninja: CMakeFiles/ninja.dir/build.make
ninja: CMakeFiles/ninja.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ninja"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ninja.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ninja.dir/build: ninja
.PHONY : CMakeFiles/ninja.dir/build

CMakeFiles/ninja.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ninja.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ninja.dir/clean

CMakeFiles/ninja.dir/depend: build/browse_py.h
	cd /home/rhel/Liteon-ngKore_E/ninja/build-cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rhel/Liteon-ngKore_E/ninja /home/rhel/Liteon-ngKore_E/ninja /home/rhel/Liteon-ngKore_E/ninja/build-cmake /home/rhel/Liteon-ngKore_E/ninja/build-cmake /home/rhel/Liteon-ngKore_E/ninja/build-cmake/CMakeFiles/ninja.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ninja.dir/depend

