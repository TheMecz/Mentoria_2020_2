#ifndef PERSONA_CCURSO_H
#define PERSONA_CCURSO_H
#include "Tipos.h"

class CCurso {
private:
    texto nombre;
    entero creditos;
    texto carrera;
public:
    CCurso(const texto &,entero);
    const texto & getNombre() const;
    void setNombre(const texto &);
    const texto & getCarrera() const;
    void setCarrera(const texto &);
    entero getCreditos() const;
    void setCreditos(entero);
};


#endif //PERSONA_CCURSO_H
