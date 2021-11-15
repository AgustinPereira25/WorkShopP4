#ifndef AUTOR_H_INCLUDED
#define AUTOR_H_INCLUDED

#include "String.h"

/*
    Un autor puede escribir 0 o muchas novelas, y una novela es escrita por un solo autor, sugeriría agregar alguna estructura para almacenar las novelas q escribe el autor.
    por lo pronto el requisito es una estructura que no presente cota alguna (ABB,AVL,LPPF,LDE,LDEPPF,LC, y otras hierbas más), como solo interesa almacenarlos y ta.

*/

class Autor{
    private:
        int cedula;
        String nombre;
        //Fecha fechaNacimiento;
    public:
        Autor(); //ctor
        Autor(int,String); //ctor
        ~Autor();//dtor
        int getCedula();
        String getNombre();
        //Fecha getFechaNacimiento();
        void setCedula(int);
        void setNombre(String);
        //void setFechaNacimiento(Fecha);

};


#endif // AUTOR_H_INCLUDED
