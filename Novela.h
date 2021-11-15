#ifndef NOVELA_H_INCLUDED
#define NOVELA_H_INCLUDED
#include "Libro.h"
#include "Autor.h"

/*
    mirando los requerimientos, vi que al registrar un nuevo libro (req.1) y ese libro es novela(caso particular), el prog tiene q recorrer la coleccion de autores y
    verificar si el autor (cedula mediante) está o no registrado en el diccionario de autores, en caso de estarlo, tendríamos que asociarle el autor a la novela.
    habria que incluir Autores aca para poder laburar en ese tema..
    El requerimiento 3 afirma más aún la necesidad de tener el autor acá, para mostrar sus datos.


*/


class Novela:public Libro{
    private:
        String genero;
    public:
        Novela(); //ctor
        Novela(int,String,float,int,String);
        String getGenero();
        void setGenero(String);
        float precioVenta(); //el que calcula precio de venta dependiendo el tipo de libro

};

#endif // NOVELA_H_INCLUDED
