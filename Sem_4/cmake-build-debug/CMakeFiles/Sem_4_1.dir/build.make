# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Sem_4_1.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Sem_4_1.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Sem_4_1.dir\flags.make

CMakeFiles\Sem_4_1.dir\Ejercicio_1.cpp.obj: CMakeFiles\Sem_4_1.dir\flags.make
CMakeFiles\Sem_4_1.dir\Ejercicio_1.cpp.obj: ..\Ejercicio_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sem_4_1.dir/Ejercicio_1.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Sem_4_1.dir\Ejercicio_1.cpp.obj /FdCMakeFiles\Sem_4_1.dir\ /FS -c C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\Ejercicio_1.cpp
<<

CMakeFiles\Sem_4_1.dir\Ejercicio_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sem_4_1.dir/Ejercicio_1.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\Sem_4_1.dir\Ejercicio_1.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\Ejercicio_1.cpp
<<

CMakeFiles\Sem_4_1.dir\Ejercicio_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sem_4_1.dir/Ejercicio_1.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Sem_4_1.dir\Ejercicio_1.cpp.s /c C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\Ejercicio_1.cpp
<<

# Object files for target Sem_4_1
Sem_4_1_OBJECTS = \
"CMakeFiles\Sem_4_1.dir\Ejercicio_1.cpp.obj"

# External object files for target Sem_4_1
Sem_4_1_EXTERNAL_OBJECTS =

Sem_4_1.exe: CMakeFiles\Sem_4_1.dir\Ejercicio_1.cpp.obj
Sem_4_1.exe: CMakeFiles\Sem_4_1.dir\build.make
Sem_4_1.exe: CMakeFiles\Sem_4_1.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sem_4_1.exe"
	"C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Sem_4_1.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Sem_4_1.dir\objects1.rsp @<<
 /out:Sem_4_1.exe /implib:Sem_4_1.lib /pdb:C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\cmake-build-debug\Sem_4_1.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Sem_4_1.dir\build: Sem_4_1.exe

.PHONY : CMakeFiles\Sem_4_1.dir\build

CMakeFiles\Sem_4_1.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sem_4_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Sem_4_1.dir\clean

CMakeFiles\Sem_4_1.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4 C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4 C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\cmake-build-debug C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\cmake-build-debug C:\Users\maxpo\Desktop\Mentoria_Utec\Mentoria_2020_2\Sem_4\cmake-build-debug\CMakeFiles\Sem_4_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Sem_4_1.dir\depend

