#ifndef TEXTO_H_INCLUDED
#define TEXTO_H_INCLUDED
#include "Libro.h"

class Texto:public Libro{
    private:
        String materia;
        Fecha fechaPublicado;
        const Fecha fechaPrecio = Fecha(1,1,2017);
    public:
        Texto(); //ctor
        Texto(int,String,float,String, Fecha);
        ~Texto(); //dtor
        String getMateria();
        Fecha getFechaPublicado();
        float precioVenta(); //Este es virtual porque Texto tiene una forma de cálculo de precio de venta
        String tipoLibro(); //virtual para que Escolar tenga su tipoLibro.
};


#endif // TEXTO_H_INCLUDED
