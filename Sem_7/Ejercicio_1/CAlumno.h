#ifndef PERSONA_CALUMNO_H
#define PERSONA_CALUMNO_H

#include "Tipos.h"
#include "CCurso.h"

class CAlumno {
private:
    texto nombre;
    texto apellidos;
    entero edad;
    entero creditos;
public:
    CAlumno(); //Constructor por defecto
    CAlumno(const texto &,const texto &, entero, entero); //duda
    const texto & getNombre() const;
    void setNombre(const texto &);
    const texto & getApellidos() const;
    void setApellidos(const texto &);
    entero getEdad() const;
    void setEdad(entero);
    entero getCreditos() const;
    void setCreditos(entero);
    void aprobar(CCurso &);
    bool esMayorDe(CAlumno &);

};


#endif //PERSONA_CALUMNO_H
