# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/cjshore12/Downloads/clion-2017.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/cjshore12/Downloads/clion-2017.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cjshore12/CLionProjects/Simulation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cjshore12/CLionProjects/Simulation

# Include any dependencies generated for this target.
include CMakeFiles/Simulation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Simulation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Simulation.dir/flags.make

CMakeFiles/Simulation.dir/src/main.cpp.o: CMakeFiles/Simulation.dir/flags.make
CMakeFiles/Simulation.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cjshore12/CLionProjects/Simulation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Simulation.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Simulation.dir/src/main.cpp.o -c /home/cjshore12/CLionProjects/Simulation/src/main.cpp

CMakeFiles/Simulation.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Simulation.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cjshore12/CLionProjects/Simulation/src/main.cpp > CMakeFiles/Simulation.dir/src/main.cpp.i

CMakeFiles/Simulation.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Simulation.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cjshore12/CLionProjects/Simulation/src/main.cpp -o CMakeFiles/Simulation.dir/src/main.cpp.s

CMakeFiles/Simulation.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/Simulation.dir/src/main.cpp.o.requires

CMakeFiles/Simulation.dir/src/main.cpp.o.provides: CMakeFiles/Simulation.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Simulation.dir/build.make CMakeFiles/Simulation.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/Simulation.dir/src/main.cpp.o.provides

CMakeFiles/Simulation.dir/src/main.cpp.o.provides.build: CMakeFiles/Simulation.dir/src/main.cpp.o


CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o: CMakeFiles/Simulation.dir/flags.make
CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o: src/MainSimulation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cjshore12/CLionProjects/Simulation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o -c /home/cjshore12/CLionProjects/Simulation/src/MainSimulation.cpp

CMakeFiles/Simulation.dir/src/MainSimulation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Simulation.dir/src/MainSimulation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cjshore12/CLionProjects/Simulation/src/MainSimulation.cpp > CMakeFiles/Simulation.dir/src/MainSimulation.cpp.i

CMakeFiles/Simulation.dir/src/MainSimulation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Simulation.dir/src/MainSimulation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cjshore12/CLionProjects/Simulation/src/MainSimulation.cpp -o CMakeFiles/Simulation.dir/src/MainSimulation.cpp.s

CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o.requires:

.PHONY : CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o.requires

CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o.provides: CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o.requires
	$(MAKE) -f CMakeFiles/Simulation.dir/build.make CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o.provides.build
.PHONY : CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o.provides

CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o.provides.build: CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o


CMakeFiles/Simulation.dir/src/Sprite.cpp.o: CMakeFiles/Simulation.dir/flags.make
CMakeFiles/Simulation.dir/src/Sprite.cpp.o: src/Sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cjshore12/CLionProjects/Simulation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Simulation.dir/src/Sprite.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Simulation.dir/src/Sprite.cpp.o -c /home/cjshore12/CLionProjects/Simulation/src/Sprite.cpp

CMakeFiles/Simulation.dir/src/Sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Simulation.dir/src/Sprite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cjshore12/CLionProjects/Simulation/src/Sprite.cpp > CMakeFiles/Simulation.dir/src/Sprite.cpp.i

CMakeFiles/Simulation.dir/src/Sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Simulation.dir/src/Sprite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cjshore12/CLionProjects/Simulation/src/Sprite.cpp -o CMakeFiles/Simulation.dir/src/Sprite.cpp.s

CMakeFiles/Simulation.dir/src/Sprite.cpp.o.requires:

.PHONY : CMakeFiles/Simulation.dir/src/Sprite.cpp.o.requires

CMakeFiles/Simulation.dir/src/Sprite.cpp.o.provides: CMakeFiles/Simulation.dir/src/Sprite.cpp.o.requires
	$(MAKE) -f CMakeFiles/Simulation.dir/build.make CMakeFiles/Simulation.dir/src/Sprite.cpp.o.provides.build
.PHONY : CMakeFiles/Simulation.dir/src/Sprite.cpp.o.provides

CMakeFiles/Simulation.dir/src/Sprite.cpp.o.provides.build: CMakeFiles/Simulation.dir/src/Sprite.cpp.o


CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o: CMakeFiles/Simulation.dir/flags.make
CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o: src/GLSLProgram.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cjshore12/CLionProjects/Simulation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o -c /home/cjshore12/CLionProjects/Simulation/src/GLSLProgram.cpp

CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cjshore12/CLionProjects/Simulation/src/GLSLProgram.cpp > CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.i

CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cjshore12/CLionProjects/Simulation/src/GLSLProgram.cpp -o CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.s

CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o.requires:

.PHONY : CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o.requires

CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o.provides: CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o.requires
	$(MAKE) -f CMakeFiles/Simulation.dir/build.make CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o.provides.build
.PHONY : CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o.provides

CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o.provides.build: CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o


# Object files for target Simulation
Simulation_OBJECTS = \
"CMakeFiles/Simulation.dir/src/main.cpp.o" \
"CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o" \
"CMakeFiles/Simulation.dir/src/Sprite.cpp.o" \
"CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o"

# External object files for target Simulation
Simulation_EXTERNAL_OBJECTS =

Simulation: CMakeFiles/Simulation.dir/src/main.cpp.o
Simulation: CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o
Simulation: CMakeFiles/Simulation.dir/src/Sprite.cpp.o
Simulation: CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o
Simulation: CMakeFiles/Simulation.dir/build.make
Simulation: /usr/lib/x86_64-linux-gnu/libGLEW.so
Simulation: /usr/lib/x86_64-linux-gnu/libGLU.so
Simulation: /usr/lib/x86_64-linux-gnu/libGL.so
Simulation: CMakeFiles/Simulation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cjshore12/CLionProjects/Simulation/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Simulation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Simulation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Simulation.dir/build: Simulation

.PHONY : CMakeFiles/Simulation.dir/build

CMakeFiles/Simulation.dir/requires: CMakeFiles/Simulation.dir/src/main.cpp.o.requires
CMakeFiles/Simulation.dir/requires: CMakeFiles/Simulation.dir/src/MainSimulation.cpp.o.requires
CMakeFiles/Simulation.dir/requires: CMakeFiles/Simulation.dir/src/Sprite.cpp.o.requires
CMakeFiles/Simulation.dir/requires: CMakeFiles/Simulation.dir/src/GLSLProgram.cpp.o.requires

.PHONY : CMakeFiles/Simulation.dir/requires

CMakeFiles/Simulation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Simulation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Simulation.dir/clean

CMakeFiles/Simulation.dir/depend:
	cd /home/cjshore12/CLionProjects/Simulation && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cjshore12/CLionProjects/Simulation /home/cjshore12/CLionProjects/Simulation /home/cjshore12/CLionProjects/Simulation /home/cjshore12/CLionProjects/Simulation /home/cjshore12/CLionProjects/Simulation/CMakeFiles/Simulation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Simulation.dir/depend

