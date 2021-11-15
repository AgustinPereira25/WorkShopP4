#include "String.h"
using namespace std;
String::String()
{
    cadena = new char[1]; //para el '/0'
    cadena[0] = '\0';
}

String::String(char * cad)
{
    int largo = strlen(cad); // cantidad de caracteres de la cadena
    cadena = new char [largo + 1]; // un lugar mas para el ‘\0’.
    strcpy(cadena, cad);
}

String :: String (const String &otro)
{
    int largo = strlen(otro.cadena); // cantidad de caracteres de la cadena
    cadena = new char [largo + 1]; // un lugar mas para el ‘\0’.
    strcpy(cadena, otro.cadena); // se copian los caracteres de la cadena
}

String String :: operator= (const String &otro)
{
    if (this != &otro)
    {
        delete [] cadena;
        int largo = strlen(otro.cadena);
        cadena = new char [largo + 1];
        strcpy (cadena, otro.cadena);
    }
    return (*this);
}

String::~String()
{
    delete [] cadena;
}

bool String::operator==(String otro)
{
    bool es = true;
    int largo = strlen(otro.cadena); //obtengo largo de la cadena del lado derecho
    int largo2 = strlen(cadena); //obtengo largo de la cadena del lado izquierdo

    if (largo != largo2)
    {
        es =  false;
    }
    else
    {
        int i=0;
        while(i<=largo && es)
        {
            if(cadena[i] != otro.cadena[i])  //Si son distintos, prendo false.
            {
                es = false;
            }
            else
            {
                i++;
            }
        }
    }
    return es;
}

bool String::operator<(String otro)
{
    bool esMenor = false;
    /*int largo2 = strlen(otro.cadena); //obtengo largo de la cadena del lado derecho
    int largo = strlen(cadena); //obtengo largo de la cadena del lado izquierdo
    */
    if(strncmp(cadena,otro.cadena,1000) < 0)
    {
        esMenor = true;
    }
    return esMenor;

}

String String::operator+(String otro)
{

    strcat(cadena,otro.cadena); //concateno en el string del lado de la izq, el string que quiero sumar

    return (*this); //devuelve lo apuntado por this

}

//Muestra string

void String::Print()
{
    cout<<cadena;
}

char * String::getCadena()
{
    return this->cadena;
}

void String :: scan()
{
    char aux[MAX];
    char c = cin.get();
    int i=0;
    while (c!='\n' && i<MAX-1)
    {
        aux[i] = c;
        i++;
        c = cin.get();
    }
    aux[i]='\0';
    cadena = new char[i+1];
    strcpy(cadena,aux);
}
