#include <iostream>
#include "CAlumno.h"
#include "CProfesor.h"
#include "CCurso.h"

template <typename T>
void mostrarDatosBasicos(T* objeto)
{

}

template <typename T>
void pedirDatosBasicos(T* objeto)
{
    texto name;
    texto lastname;
    entero age;
    entero credits;

cout<<"Ingrese el nombre del alumno: ";
cin>>name;
cout<<"Ingrese los apellidos del alunmno: ";
cin>>lastname;
cout<<"Ingrese su edad: ";
cin>>age;
cout<<"Ingrese la cantidad de creditos que posee: ";
cin>>credits;

    objeto->setNombre(name);
    objeto->setApellidos(lastname);
    objeto->setEdad(age);
    objeto->setCreditos(credits);
}

template <typename T>
T buscarElMayor(T *array, int n)
{

}