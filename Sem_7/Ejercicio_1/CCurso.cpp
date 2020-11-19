
#include "CCurso.h"

CCurso::CCurso(const texto &nombre, entero credito) : nombre(nombre), creditos(credito) {

}

const texto &CCurso::getNombre() const {
    return nombre;
}

void CCurso::setNombre(const texto &nombre) {


}

const texto &CCurso::getCarrera() const {
    return carrera;
}

void CCurso::setCarrera(const texto &carrera) {


}

entero CCurso::getCreditos() const {
    return creditos;
}

void CCurso::setCreditos(entero creditos) {


}
