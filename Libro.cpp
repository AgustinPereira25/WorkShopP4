#include "Libro.h"

Libro::Libro()
{
    unidadesVendidas = 0;
}


Libro::Libro(int isbn, String tituloLibro, float precio) : titulo(tituloLibro)
{
    codigoISBN = isbn;
    precioBase = precio;//SI EXISTE EL SET, ES NECESARIO?
    unidadesVendidas = 0;
}

Libro::~Libro()
{

}

int Libro::getCodigoISBN()
{
    return codigoISBN;
}

String Libro::getTitulo()
{
    return titulo;
}

float Libro::getPrecioBase()
{
    return precioBase;
}

int Libro::getUnidadesVendidas()
{
    return unidadesVendidas;
}

