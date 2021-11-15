#ifndef ESCOLAR_H_INCLUDED
#define ESCOLAR_H_INCLUDED
#include "Texto.h"

/*Esta clase es derivada de la clase base "Texto", por lo tanto hereda los atributos de Texto*/

class Escolar: public Texto
{
    private:
        int anioEscuela;

    public:
        /*Escolar();
        Escolar(String,Fecha,int);
        int getAnioEscuela();
        void setAnioEscuela(int);
        ~Texto(); //dtor
        float precioVenta();
        String tipoLibro();*/
};


#endif // ESCOLAR_H_INCLUDED
