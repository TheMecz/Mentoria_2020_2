#include "CAlumno.h"
#include "CCurso.h"

int main()
{
// Crear un puntero a CAlumno y A CCurso usando un constructor por asignación

texto nombre_curso;
entero credito=0;
texto nombre;
texto apellido;
entero edad=0;
credito = 0;

cout<<"Digite el nombre del alumno: ";
cin>>nombre;
cout<<"Digite el apellido del alumno: ";
cin>>apellido;
cout<<"Digite la edad del alumno: ";
cin>>edad;
CAlumno* a1 = new CAlumno(nombre,apellido,edad,credito);


cout<<"Digite el nombre del curso: ";
cin>>nombre_curso;
cout<<"Digite el número de creditos: ";
cin>>credito;
CCurso* c1 = new CCurso(nombre_curso, credito);


// Obtener sus créditos con el método getCreditos


// usar el metodo aprobar (para aprobar el curso)


// Obtener sus créditos después de aprobar


// liberar memoria dinamica

    delete [] a1;
    delete [] c1;
    return 0;
}

