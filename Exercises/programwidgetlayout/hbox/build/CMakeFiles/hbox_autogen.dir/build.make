# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox/build

# Utility rule file for hbox_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/hbox_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hbox_autogen.dir/progress.make

CMakeFiles/hbox_autogen: hbox_autogen/timestamp

hbox_autogen/timestamp: /usr/lib/qt6/libexec/moc
hbox_autogen/timestamp: /usr/lib/qt6/libexec/uic
hbox_autogen/timestamp: CMakeFiles/hbox_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target hbox"
	/usr/bin/cmake -E cmake_autogen /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox/build/CMakeFiles/hbox_autogen.dir/AutogenInfo.json ""
	/usr/bin/cmake -E touch /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox/build/hbox_autogen/timestamp

hbox_autogen: CMakeFiles/hbox_autogen
hbox_autogen: hbox_autogen/timestamp
hbox_autogen: CMakeFiles/hbox_autogen.dir/build.make
.PHONY : hbox_autogen

# Rule to build all files generated by this target.
CMakeFiles/hbox_autogen.dir/build: hbox_autogen
.PHONY : CMakeFiles/hbox_autogen.dir/build

CMakeFiles/hbox_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hbox_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hbox_autogen.dir/clean

CMakeFiles/hbox_autogen.dir/depend:
	cd /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox/build /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox/build /home/zain/Uni/comp2811ui/Exercises/programwidgetlayout/hbox/build/CMakeFiles/hbox_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/hbox_autogen.dir/depend

