#ifndef LIBROS_H_INCLUDED
#define LIBROS_H_INCLUDED
#include "Libro.h"
#include "Texto.h"
#include "Escolar.h" //duda si incluirlo ?
#include "Novela.h"

/*para almacenar los libros creo que es conveniente un TAD diccionario utilizando la clave CodigoISBN. la estructura ser�a un hash porque podemos utilizar una funci�n de dispersi�n y as� lograr b�squedas
    en orden 1. */

const int B = 100;

class Libros{
    private:
        struct Nodo {
            Libro * info; //colecci�n de punteros a mascotas
            Nodo * sig;
        };
        Nodo * Hash[B];

        int h(int);

        void crearLista (Nodo * &);
        // crea una lista vac�a
        void destruirLista (Nodo * &);
        // destruye todo el contenido de la lista
        bool perteneceLista (Nodo *, int);
        // indica si existe una mascota con el n�mero ingresado
        void insFrontEnLista (Nodo * &, Libro *);
        // inserta la mascota al principio de la lista
        Libro * obtenerEnLista (Nodo *, int);
        // obtiene la mascota con el n�mero ingresado

    public:
        Libros(); //ctor
        bool member (int);
        // indica si la mascota con el n�mero ingresado es miembro de
        // la colecci�n
        void Insert (Libro *);
        // inserta la nueva mascota a la colecci�n
        // precondici�n: la mascota no es miembro de la colecci�n
        Libro * Find (int);
        // retorna la mascota cuyo n�mero es el ingresado
        // precondici�n: la mascota es miembro de la colecci�n
        //virtual String tipoLibro(); LO DEJO COMENTADO PORQ SI NO ESTA DEFINIDO EN CPP NO COMPILA!!!!!

};
#endif // LIBROS_H_INCLUDED
