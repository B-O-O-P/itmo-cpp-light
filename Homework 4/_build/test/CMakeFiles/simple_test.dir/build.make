# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\dimka\CLionProjects\cplusplus4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dimka\CLionProjects\cplusplus4\_build

# Include any dependencies generated for this target.
include test/CMakeFiles/simple_test.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/simple_test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/simple_test.dir/flags.make

test/CMakeFiles/simple_test.dir/justTest.cpp.obj: test/CMakeFiles/simple_test.dir/flags.make
test/CMakeFiles/simple_test.dir/justTest.cpp.obj: test/CMakeFiles/simple_test.dir/includes_CXX.rsp
test/CMakeFiles/simple_test.dir/justTest.cpp.obj: ../test/justTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dimka\CLionProjects\cplusplus4\_build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/simple_test.dir/justTest.cpp.obj"
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\test && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\simple_test.dir\justTest.cpp.obj -c C:\Users\dimka\CLionProjects\cplusplus4\test\justTest.cpp

test/CMakeFiles/simple_test.dir/justTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_test.dir/justTest.cpp.i"
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\test && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dimka\CLionProjects\cplusplus4\test\justTest.cpp > CMakeFiles\simple_test.dir\justTest.cpp.i

test/CMakeFiles/simple_test.dir/justTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_test.dir/justTest.cpp.s"
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\test && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\dimka\CLionProjects\cplusplus4\test\justTest.cpp -o CMakeFiles\simple_test.dir\justTest.cpp.s

test/CMakeFiles/simple_test.dir/justTest.cpp.obj.requires:

.PHONY : test/CMakeFiles/simple_test.dir/justTest.cpp.obj.requires

test/CMakeFiles/simple_test.dir/justTest.cpp.obj.provides: test/CMakeFiles/simple_test.dir/justTest.cpp.obj.requires
	$(MAKE) -f test\CMakeFiles\simple_test.dir\build.make test/CMakeFiles/simple_test.dir/justTest.cpp.obj.provides.build
.PHONY : test/CMakeFiles/simple_test.dir/justTest.cpp.obj.provides

test/CMakeFiles/simple_test.dir/justTest.cpp.obj.provides.build: test/CMakeFiles/simple_test.dir/justTest.cpp.obj


# Object files for target simple_test
simple_test_OBJECTS = \
"CMakeFiles/simple_test.dir/justTest.cpp.obj"

# External object files for target simple_test
simple_test_EXTERNAL_OBJECTS =

bin/simple_test.exe: test/CMakeFiles/simple_test.dir/justTest.cpp.obj
bin/simple_test.exe: test/CMakeFiles/simple_test.dir/build.make
bin/simple_test.exe: lib/liblib_rational.dll.a
bin/simple_test.exe: test/CMakeFiles/simple_test.dir/linklibs.rsp
bin/simple_test.exe: test/CMakeFiles/simple_test.dir/objects1.rsp
bin/simple_test.exe: test/CMakeFiles/simple_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dimka\CLionProjects\cplusplus4\_build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ..\bin\simple_test.exe"
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\simple_test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/simple_test.dir/build: bin/simple_test.exe

.PHONY : test/CMakeFiles/simple_test.dir/build

test/CMakeFiles/simple_test.dir/requires: test/CMakeFiles/simple_test.dir/justTest.cpp.obj.requires

.PHONY : test/CMakeFiles/simple_test.dir/requires

test/CMakeFiles/simple_test.dir/clean:
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\test && $(CMAKE_COMMAND) -P CMakeFiles\simple_test.dir\cmake_clean.cmake
.PHONY : test/CMakeFiles/simple_test.dir/clean

test/CMakeFiles/simple_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dimka\CLionProjects\cplusplus4 C:\Users\dimka\CLionProjects\cplusplus4\test C:\Users\dimka\CLionProjects\cplusplus4\_build C:\Users\dimka\CLionProjects\cplusplus4\_build\test C:\Users\dimka\CLionProjects\cplusplus4\_build\test\CMakeFiles\simple_test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/simple_test.dir/depend

