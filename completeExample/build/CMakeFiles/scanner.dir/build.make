# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Code\PL_0Compiler\Others\completeExample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Code\PL_0Compiler\Others\completeExample\build

# Include any dependencies generated for this target.
include CMakeFiles/scanner.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/scanner.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/scanner.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/scanner.dir/flags.make

parser.cpp: ../src/yacc.y
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Code\PL_0Compiler\Others\completeExample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[BISON][PARSER] Building parser with bison 1.28"
	cd /d C:\Code\PL_0Compiler\Others\completeExample && C:\Users\zjx61\scoop\shims\bison.exe -d -o C:/Code/PL_0Compiler/Others/completeExample/build/parser.cpp src/yacc.y

parser.hpp: parser.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate parser.hpp

scanner.cpp: ../src/lex.l
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Code\PL_0Compiler\Others\completeExample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "[FLEX][SCANNER] Building scanner with flex 2.5.4"
	cd /d C:\Code\PL_0Compiler\Others\completeExample && C:\Users\zjx61\scoop\shims\flex.exe -oC:/Code/PL_0Compiler/Others/completeExample/build/scanner.cpp src/lex.l

CMakeFiles/scanner.dir/parser.cpp.obj: CMakeFiles/scanner.dir/flags.make
CMakeFiles/scanner.dir/parser.cpp.obj: CMakeFiles/scanner.dir/includes_CXX.rsp
CMakeFiles/scanner.dir/parser.cpp.obj: parser.cpp
CMakeFiles/scanner.dir/parser.cpp.obj: CMakeFiles/scanner.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Code\PL_0Compiler\Others\completeExample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/scanner.dir/parser.cpp.obj"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scanner.dir/parser.cpp.obj -MF CMakeFiles\scanner.dir\parser.cpp.obj.d -o CMakeFiles\scanner.dir\parser.cpp.obj -c C:\Code\PL_0Compiler\Others\completeExample\build\parser.cpp

CMakeFiles/scanner.dir/parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scanner.dir/parser.cpp.i"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Code\PL_0Compiler\Others\completeExample\build\parser.cpp > CMakeFiles\scanner.dir\parser.cpp.i

CMakeFiles/scanner.dir/parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scanner.dir/parser.cpp.s"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Code\PL_0Compiler\Others\completeExample\build\parser.cpp -o CMakeFiles\scanner.dir\parser.cpp.s

CMakeFiles/scanner.dir/scanner.cpp.obj: CMakeFiles/scanner.dir/flags.make
CMakeFiles/scanner.dir/scanner.cpp.obj: CMakeFiles/scanner.dir/includes_CXX.rsp
CMakeFiles/scanner.dir/scanner.cpp.obj: scanner.cpp
CMakeFiles/scanner.dir/scanner.cpp.obj: parser.hpp
CMakeFiles/scanner.dir/scanner.cpp.obj: CMakeFiles/scanner.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Code\PL_0Compiler\Others\completeExample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/scanner.dir/scanner.cpp.obj"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scanner.dir/scanner.cpp.obj -MF CMakeFiles\scanner.dir\scanner.cpp.obj.d -o CMakeFiles\scanner.dir\scanner.cpp.obj -c C:\Code\PL_0Compiler\Others\completeExample\build\scanner.cpp

CMakeFiles/scanner.dir/scanner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scanner.dir/scanner.cpp.i"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Code\PL_0Compiler\Others\completeExample\build\scanner.cpp > CMakeFiles\scanner.dir\scanner.cpp.i

CMakeFiles/scanner.dir/scanner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scanner.dir/scanner.cpp.s"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Code\PL_0Compiler\Others\completeExample\build\scanner.cpp -o CMakeFiles\scanner.dir\scanner.cpp.s

# Object files for target scanner
scanner_OBJECTS = \
"CMakeFiles/scanner.dir/parser.cpp.obj" \
"CMakeFiles/scanner.dir/scanner.cpp.obj"

# External object files for target scanner
scanner_EXTERNAL_OBJECTS =

scanner.exe: CMakeFiles/scanner.dir/parser.cpp.obj
scanner.exe: CMakeFiles/scanner.dir/scanner.cpp.obj
scanner.exe: CMakeFiles/scanner.dir/build.make
scanner.exe: CMakeFiles/scanner.dir/linklibs.rsp
scanner.exe: CMakeFiles/scanner.dir/objects1.rsp
scanner.exe: CMakeFiles/scanner.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Code\PL_0Compiler\Others\completeExample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable scanner.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\scanner.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/scanner.dir/build: scanner.exe
.PHONY : CMakeFiles/scanner.dir/build

CMakeFiles/scanner.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\scanner.dir\cmake_clean.cmake
.PHONY : CMakeFiles/scanner.dir/clean

CMakeFiles/scanner.dir/depend: parser.cpp
CMakeFiles/scanner.dir/depend: parser.hpp
CMakeFiles/scanner.dir/depend: scanner.cpp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Code\PL_0Compiler\Others\completeExample C:\Code\PL_0Compiler\Others\completeExample C:\Code\PL_0Compiler\Others\completeExample\build C:\Code\PL_0Compiler\Others\completeExample\build C:\Code\PL_0Compiler\Others\completeExample\build\CMakeFiles\scanner.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/scanner.dir/depend

