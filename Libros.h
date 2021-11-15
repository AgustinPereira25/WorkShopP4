#ifndef LIBROS_H_INCLUDED
#define LIBROS_H_INCLUDED
#include "Libro.h"
#include "Texto.h"
#include "Escolar.h" //duda si incluirlo ?
#include "Novela.h"

/*para almacenar los libros creo que es conveniente un TAD diccionario utilizando la clave CodigoISBN. la estructura sería un hash porque podemos utilizar una función de dispersión y así lograr búsquedas
    en orden 1. */

const int B = 100;

class Libros{
    private:
        struct Nodo {
            Libro * info; //colección de punteros a mascotas
            Nodo * sig;
        };
        Nodo * Hash[B];

        int h(int);

        void crearLista (Nodo * &);
        // crea una lista vacía
        void destruirLista (Nodo * &);
        // destruye todo el contenido de la lista
        bool perteneceLista (Nodo *, int);
        // indica si existe una mascota con el número ingresado
        void insFrontEnLista (Nodo * &, Libro *);
        // inserta la mascota al principio de la lista
        Libro * obtenerEnLista (Nodo *, int);
        // obtiene la mascota con el número ingresado

    public:
        Libros(); //ctor
        bool member (int);
        // indica si la mascota con el número ingresado es miembro de
        // la colección
        void Insert (Libro *);
        // inserta la nueva mascota a la colección
        // precondición: la mascota no es miembro de la colección
        Libro * Find (int);
        // retorna la mascota cuyo número es el ingresado
        // precondición: la mascota es miembro de la colección
        //virtual String tipoLibro(); LO DEJO COMENTADO PORQ SI NO ESTA DEFINIDO EN CPP NO COMPILA!!!!!

};
#endif // LIBROS_H_INCLUDED
