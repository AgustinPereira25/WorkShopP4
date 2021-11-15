#ifndef LIBRO_H_INCLUDED
#define LIBRO_H_INCLUDED
#include "String.h"
#include "Fecha.h"

/*Esta clase es abstracta, por lo tanto no se puede instanciar*/

class Libro
{
    private:

        int codigoISBN;
        String titulo;
        float precioBase;
        int unidadesVendidas;

    public:

        Libro(); //ctor
        Libro(int, String, float); //ctor
        ~Libro(); //dtor , creo que debe ser virtual para fomentar el binding dinámico y que se ejecute en las clases derivadas?
        int getCodigoISBN();
        String getTitulo();
        float getPrecioBase();
        int getUnidadesVendidas();
        //void setPrecioBase(float); //Este precio es comun para todos, varia cuando se va a las clases derivadas. (de acá se arranca).
        virtual float precioVenta() = 0; //Es virtual y abstracto porque es un método polimórfico (para cada tipo de libro se calcula distinto el precioBase), repetir el virtual en Texto
                                        //Para poder calcular el precioVenta del libro escolar.
        virtual String tipoLibro() = 0; //Para saber que tipo de libro es, si novela o otra cosa.


};

#endif // LIBRO_H_INCLUDED
