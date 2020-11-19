#ifndef PERSONA_CPROFESOR_H
#define PERSONA_CPROFESOR_H

#include "Tipos.h"

class CProfesor {
private:
    texto nombre;
    texto apellidos;
    entero edad;
    entero horasDictado;
public:
    const texto & getNombre() const;
    void setNombre(const texto &);
    const texto & getApellidos() const;
    void setApellidos(const texto &);
    entero getEdad() const;
    void setEdad(entero);
    entero getHorasDictado() const;
    void setHorasDictado(entero);
};


#endif //PERSONA_CPROFESOR_H
