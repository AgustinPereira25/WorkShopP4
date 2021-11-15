#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <string.h>
#include <stdio.h>
#include <iostream>

const int MAX = 80;


class String {
     private:
        char * cadena;
     public:
         String (); // Constructor por defecto
         String (char *); // Constructor común
         String(const String&); //Constructor de copia
         ~String (); // Destructor
         String operator=(const String &);
         bool operator==(String);
         bool operator<(String);
         String operator+(String);
         void Print();
         void scan();
         char* getCadena();
    };


#endif // STRING_H_INCLUDED
