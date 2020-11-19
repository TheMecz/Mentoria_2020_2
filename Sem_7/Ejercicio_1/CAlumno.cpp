#include "CAlumno.h"

CAlumno::CAlumno(){}
CAlumno::CAlumno(const texto &nombre,const texto &apellido, entero edad, entero creditos) : nombre(nombre),apellidos(apellido), edad(edad), creditos(creditos) {

}

const texto &CAlumno::getNombre() const {
    return nombre;
}

void CAlumno::setNombre(const texto &nombre) {
    this->nombre = nombre;
}

const texto &CAlumno::getApellidos() const {
    return apellidos;
}

void CAlumno::setApellidos(const texto &apellidos) {
    this->apellidos = apellidos;
}

entero CAlumno::getEdad() const {
    return edad;
}

void CAlumno::setEdad(entero edad) {
    this->edad = edad;
}

entero CAlumno::getCreditos() const {
    return creditos;
}

void CAlumno::setCreditos(entero credito) {
    this->creditos = credito;
}

void CAlumno::aprobar(CCurso &curso){

}

bool CAlumno::esMayorDe(CAlumno &otro)
{
    return &otro;
}