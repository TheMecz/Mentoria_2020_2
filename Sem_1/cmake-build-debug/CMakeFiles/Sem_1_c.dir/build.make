# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sem_1_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sem_1_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sem_1_c.dir/flags.make

CMakeFiles/Sem_1_c.dir/Ejercicio_3.cpp.obj: CMakeFiles/Sem_1_c.dir/flags.make
CMakeFiles/Sem_1_c.dir/Ejercicio_3.cpp.obj: ../Ejercicio_3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sem_1_c.dir/Ejercicio_3.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Sem_1_c.dir\Ejercicio_3.cpp.obj -c C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1\Ejercicio_3.cpp

CMakeFiles/Sem_1_c.dir/Ejercicio_3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sem_1_c.dir/Ejercicio_3.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1\Ejercicio_3.cpp > CMakeFiles\Sem_1_c.dir\Ejercicio_3.cpp.i

CMakeFiles/Sem_1_c.dir/Ejercicio_3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sem_1_c.dir/Ejercicio_3.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1\Ejercicio_3.cpp -o CMakeFiles\Sem_1_c.dir\Ejercicio_3.cpp.s

# Object files for target Sem_1_c
Sem_1_c_OBJECTS = \
"CMakeFiles/Sem_1_c.dir/Ejercicio_3.cpp.obj"

# External object files for target Sem_1_c
Sem_1_c_EXTERNAL_OBJECTS =

Sem_1_c.exe: CMakeFiles/Sem_1_c.dir/Ejercicio_3.cpp.obj
Sem_1_c.exe: CMakeFiles/Sem_1_c.dir/build.make
Sem_1_c.exe: CMakeFiles/Sem_1_c.dir/linklibs.rsp
Sem_1_c.exe: CMakeFiles/Sem_1_c.dir/objects1.rsp
Sem_1_c.exe: CMakeFiles/Sem_1_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sem_1_c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sem_1_c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sem_1_c.dir/build: Sem_1_c.exe

.PHONY : CMakeFiles/Sem_1_c.dir/build

CMakeFiles/Sem_1_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sem_1_c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sem_1_c.dir/clean

CMakeFiles/Sem_1_c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1 C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1 C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1\cmake-build-debug C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1\cmake-build-debug C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_1\cmake-build-debug\CMakeFiles\Sem_1_c.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sem_1_c.dir/depend

