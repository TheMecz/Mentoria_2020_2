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
CMAKE_SOURCE_DIR = C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sem_2_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sem_2_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sem_2_2.dir/flags.make

CMakeFiles/sem_2_2.dir/Ejercicio_2.cpp.obj: CMakeFiles/sem_2_2.dir/flags.make
CMakeFiles/sem_2_2.dir/Ejercicio_2.cpp.obj: ../Ejercicio_2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sem_2_2.dir/Ejercicio_2.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sem_2_2.dir\Ejercicio_2.cpp.obj -c C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2\Ejercicio_2.cpp

CMakeFiles/sem_2_2.dir/Ejercicio_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sem_2_2.dir/Ejercicio_2.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2\Ejercicio_2.cpp > CMakeFiles\sem_2_2.dir\Ejercicio_2.cpp.i

CMakeFiles/sem_2_2.dir/Ejercicio_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sem_2_2.dir/Ejercicio_2.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2\Ejercicio_2.cpp -o CMakeFiles\sem_2_2.dir\Ejercicio_2.cpp.s

# Object files for target sem_2_2
sem_2_2_OBJECTS = \
"CMakeFiles/sem_2_2.dir/Ejercicio_2.cpp.obj"

# External object files for target sem_2_2
sem_2_2_EXTERNAL_OBJECTS =

sem_2_2.exe: CMakeFiles/sem_2_2.dir/Ejercicio_2.cpp.obj
sem_2_2.exe: CMakeFiles/sem_2_2.dir/build.make
sem_2_2.exe: CMakeFiles/sem_2_2.dir/linklibs.rsp
sem_2_2.exe: CMakeFiles/sem_2_2.dir/objects1.rsp
sem_2_2.exe: CMakeFiles/sem_2_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sem_2_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sem_2_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sem_2_2.dir/build: sem_2_2.exe

.PHONY : CMakeFiles/sem_2_2.dir/build

CMakeFiles/sem_2_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sem_2_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sem_2_2.dir/clean

CMakeFiles/sem_2_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2 C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2 C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2\cmake-build-debug C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2\cmake-build-debug C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\sem_2\cmake-build-debug\CMakeFiles\sem_2_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sem_2_2.dir/depend

