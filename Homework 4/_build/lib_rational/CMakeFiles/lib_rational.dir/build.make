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
include lib_rational/CMakeFiles/lib_rational.dir/depend.make

# Include the progress variables for this target.
include lib_rational/CMakeFiles/lib_rational.dir/progress.make

# Include the compile flags for this target's objects.
include lib_rational/CMakeFiles/lib_rational.dir/flags.make

lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj: lib_rational/CMakeFiles/lib_rational.dir/flags.make
lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj: ../lib_rational/lib_rational.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dimka\CLionProjects\cplusplus4\_build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj"
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\lib_rational && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lib_rational.dir\lib_rational.cpp.obj -c C:\Users\dimka\CLionProjects\cplusplus4\lib_rational\lib_rational.cpp

lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib_rational.dir/lib_rational.cpp.i"
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\lib_rational && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dimka\CLionProjects\cplusplus4\lib_rational\lib_rational.cpp > CMakeFiles\lib_rational.dir\lib_rational.cpp.i

lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib_rational.dir/lib_rational.cpp.s"
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\lib_rational && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\dimka\CLionProjects\cplusplus4\lib_rational\lib_rational.cpp -o CMakeFiles\lib_rational.dir\lib_rational.cpp.s

lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj.requires:

.PHONY : lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj.requires

lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj.provides: lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj.requires
	$(MAKE) -f lib_rational\CMakeFiles\lib_rational.dir\build.make lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj.provides.build
.PHONY : lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj.provides

lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj.provides.build: lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj


# Object files for target lib_rational
lib_rational_OBJECTS = \
"CMakeFiles/lib_rational.dir/lib_rational.cpp.obj"

# External object files for target lib_rational
lib_rational_EXTERNAL_OBJECTS =

bin/liblib_rational.dll: lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj
bin/liblib_rational.dll: lib_rational/CMakeFiles/lib_rational.dir/build.make
bin/liblib_rational.dll: lib_rational/CMakeFiles/lib_rational.dir/linklibs.rsp
bin/liblib_rational.dll: lib_rational/CMakeFiles/lib_rational.dir/objects1.rsp
bin/liblib_rational.dll: lib_rational/CMakeFiles/lib_rational.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dimka\CLionProjects\cplusplus4\_build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ..\bin\liblib_rational.dll"
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\lib_rational && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lib_rational.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib_rational/CMakeFiles/lib_rational.dir/build: bin/liblib_rational.dll

.PHONY : lib_rational/CMakeFiles/lib_rational.dir/build

lib_rational/CMakeFiles/lib_rational.dir/requires: lib_rational/CMakeFiles/lib_rational.dir/lib_rational.cpp.obj.requires

.PHONY : lib_rational/CMakeFiles/lib_rational.dir/requires

lib_rational/CMakeFiles/lib_rational.dir/clean:
	cd /d C:\Users\dimka\CLionProjects\cplusplus4\_build\lib_rational && $(CMAKE_COMMAND) -P CMakeFiles\lib_rational.dir\cmake_clean.cmake
.PHONY : lib_rational/CMakeFiles/lib_rational.dir/clean

lib_rational/CMakeFiles/lib_rational.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dimka\CLionProjects\cplusplus4 C:\Users\dimka\CLionProjects\cplusplus4\lib_rational C:\Users\dimka\CLionProjects\cplusplus4\_build C:\Users\dimka\CLionProjects\cplusplus4\_build\lib_rational C:\Users\dimka\CLionProjects\cplusplus4\_build\lib_rational\CMakeFiles\lib_rational.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lib_rational/CMakeFiles/lib_rational.dir/depend

