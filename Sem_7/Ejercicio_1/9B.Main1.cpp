#include "Funciones.h"

int main() {
    cout<<"Alumno:\n";
    CAlumno alumnito;
    CProfesor profesor;

    // crear un puntero a objeto CAlumno
    CAlumno *alumnito_Ptr = &alumnito;
// ingresar datos del alumno con funcion externa de pedir_datos()
   pedirDatosBasicos(alumnito_Ptr);
// crear un puntero a objeto CProfesor
    CProfesor *profesor_Ptr = &profesor;
// ingresar datos del profesor con funcion externa de pedir_datos(), usar plantillas para poder usar la misma funcion con CAlumno


// imprimir datos del alumno y profesor con la funcion genérica mostrar_datos()

    return 0;
}
