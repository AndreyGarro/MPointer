# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /snap/clion/39/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/39/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ortegajosant/CLionProjects/MServidor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ortegajosant/CLionProjects/MServidor/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled4.dir/flags.make

CMakeFiles/untitled4.dir/main.cpp.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ortegajosant/CLionProjects/MServidor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled4.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled4.dir/main.cpp.o -c /home/ortegajosant/CLionProjects/MServidor/main.cpp

CMakeFiles/untitled4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled4.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ortegajosant/CLionProjects/MServidor/main.cpp > CMakeFiles/untitled4.dir/main.cpp.i

CMakeFiles/untitled4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled4.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ortegajosant/CLionProjects/MServidor/main.cpp -o CMakeFiles/untitled4.dir/main.cpp.s

CMakeFiles/untitled4.dir/Server/Server.cpp.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/Server/Server.cpp.o: ../Server/Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ortegajosant/CLionProjects/MServidor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled4.dir/Server/Server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled4.dir/Server/Server.cpp.o -c /home/ortegajosant/CLionProjects/MServidor/Server/Server.cpp

CMakeFiles/untitled4.dir/Server/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled4.dir/Server/Server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ortegajosant/CLionProjects/MServidor/Server/Server.cpp > CMakeFiles/untitled4.dir/Server/Server.cpp.i

CMakeFiles/untitled4.dir/Server/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled4.dir/Server/Server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ortegajosant/CLionProjects/MServidor/Server/Server.cpp -o CMakeFiles/untitled4.dir/Server/Server.cpp.s

CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.o: ../Server/JSONMaker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ortegajosant/CLionProjects/MServidor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.o -c /home/ortegajosant/CLionProjects/MServidor/Server/JSONMaker.cpp

CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ortegajosant/CLionProjects/MServidor/Server/JSONMaker.cpp > CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.i

CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ortegajosant/CLionProjects/MServidor/Server/JSONMaker.cpp -o CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.s

CMakeFiles/untitled4.dir/Server/Memoria.cpp.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/Server/Memoria.cpp.o: ../Server/Memoria.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ortegajosant/CLionProjects/MServidor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/untitled4.dir/Server/Memoria.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled4.dir/Server/Memoria.cpp.o -c /home/ortegajosant/CLionProjects/MServidor/Server/Memoria.cpp

CMakeFiles/untitled4.dir/Server/Memoria.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled4.dir/Server/Memoria.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ortegajosant/CLionProjects/MServidor/Server/Memoria.cpp > CMakeFiles/untitled4.dir/Server/Memoria.cpp.i

CMakeFiles/untitled4.dir/Server/Memoria.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled4.dir/Server/Memoria.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ortegajosant/CLionProjects/MServidor/Server/Memoria.cpp -o CMakeFiles/untitled4.dir/Server/Memoria.cpp.s

CMakeFiles/untitled4.dir/Server/MapNode.cpp.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/Server/MapNode.cpp.o: ../Server/MapNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ortegajosant/CLionProjects/MServidor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/untitled4.dir/Server/MapNode.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled4.dir/Server/MapNode.cpp.o -c /home/ortegajosant/CLionProjects/MServidor/Server/MapNode.cpp

CMakeFiles/untitled4.dir/Server/MapNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled4.dir/Server/MapNode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ortegajosant/CLionProjects/MServidor/Server/MapNode.cpp > CMakeFiles/untitled4.dir/Server/MapNode.cpp.i

CMakeFiles/untitled4.dir/Server/MapNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled4.dir/Server/MapNode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ortegajosant/CLionProjects/MServidor/Server/MapNode.cpp -o CMakeFiles/untitled4.dir/Server/MapNode.cpp.s

# Object files for target untitled4
untitled4_OBJECTS = \
"CMakeFiles/untitled4.dir/main.cpp.o" \
"CMakeFiles/untitled4.dir/Server/Server.cpp.o" \
"CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.o" \
"CMakeFiles/untitled4.dir/Server/Memoria.cpp.o" \
"CMakeFiles/untitled4.dir/Server/MapNode.cpp.o"

# External object files for target untitled4
untitled4_EXTERNAL_OBJECTS =

untitled4: CMakeFiles/untitled4.dir/main.cpp.o
untitled4: CMakeFiles/untitled4.dir/Server/Server.cpp.o
untitled4: CMakeFiles/untitled4.dir/Server/JSONMaker.cpp.o
untitled4: CMakeFiles/untitled4.dir/Server/Memoria.cpp.o
untitled4: CMakeFiles/untitled4.dir/Server/MapNode.cpp.o
untitled4: CMakeFiles/untitled4.dir/build.make
untitled4: CMakeFiles/untitled4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ortegajosant/CLionProjects/MServidor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable untitled4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled4.dir/build: untitled4

.PHONY : CMakeFiles/untitled4.dir/build

CMakeFiles/untitled4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled4.dir/clean

CMakeFiles/untitled4.dir/depend:
	cd /home/ortegajosant/CLionProjects/MServidor/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ortegajosant/CLionProjects/MServidor /home/ortegajosant/CLionProjects/MServidor /home/ortegajosant/CLionProjects/MServidor/cmake-build-debug /home/ortegajosant/CLionProjects/MServidor/cmake-build-debug /home/ortegajosant/CLionProjects/MServidor/cmake-build-debug/CMakeFiles/untitled4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled4.dir/depend

