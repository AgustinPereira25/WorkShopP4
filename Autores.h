#ifndef AUTORES_H_INCLUDED
#define AUTORES_H_INCLUDED
#include "Autor.h"

/*Un diccionario de autores(preferentemente ABB porque un requerimiento exige listar autores ordenado por cedula de menor a mayor (orden), y ademas no especifica cota alguna)*/
/*
    No incluimos novelas porque no existe requerimiento que necesite para cada autor, las novelas q escribio.
*/


//Revisar estructura, para ver si conviene o no usar puntero a autor en el info.


class Autores{
    private:
        struct nodoA {
            Autor info;
            nodoA * hizq;
            nodoA * hder;
        };
        nodoA * abb;
    public:
        Autores(); //CTOR

};


#endif // AUTORES_H_INCLUDED
