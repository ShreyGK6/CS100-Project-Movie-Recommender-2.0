# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = /class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011/CMakeFiles /class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /class/classes/ayama039/final-project-smoha095-ashah174-ayama039-skoth011/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named full

# Build rule for target.
full: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 full
.PHONY : full

# fast build rule for target.
full/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/build
.PHONY : full/fast

settings.o: settings.cpp.o
.PHONY : settings.o

# target to build an object file
settings.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/settings.cpp.o
.PHONY : settings.cpp.o

settings.i: settings.cpp.i
.PHONY : settings.i

# target to preprocess a source file
settings.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/settings.cpp.i
.PHONY : settings.cpp.i

settings.s: settings.cpp.s
.PHONY : settings.s

# target to generate assembly for a file
settings.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/settings.cpp.s
.PHONY : settings.cpp.s

settingsmain.o: settingsmain.cpp.o
.PHONY : settingsmain.o

# target to build an object file
settingsmain.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/settingsmain.cpp.o
.PHONY : settingsmain.cpp.o

settingsmain.i: settingsmain.cpp.i
.PHONY : settingsmain.i

# target to preprocess a source file
settingsmain.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/settingsmain.cpp.i
.PHONY : settingsmain.cpp.i

settingsmain.s: settingsmain.cpp.s
.PHONY : settingsmain.s

# target to generate assembly for a file
settingsmain.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/settingsmain.cpp.s
.PHONY : settingsmain.cpp.s

setup.o: setup.cpp.o
.PHONY : setup.o

# target to build an object file
setup.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/setup.cpp.o
.PHONY : setup.cpp.o

setup.i: setup.cpp.i
.PHONY : setup.i

# target to preprocess a source file
setup.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/setup.cpp.i
.PHONY : setup.cpp.i

setup.s: setup.cpp.s
.PHONY : setup.s

# target to generate assembly for a file
setup.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/full.dir/build.make CMakeFiles/full.dir/setup.cpp.s
.PHONY : setup.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... full"
	@echo "... settings.o"
	@echo "... settings.i"
	@echo "... settings.s"
	@echo "... settingsmain.o"
	@echo "... settingsmain.i"
	@echo "... settingsmain.s"
	@echo "... setup.o"
	@echo "... setup.i"
	@echo "... setup.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
