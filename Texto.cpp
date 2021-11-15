#include "Texto.h"

Texto::Texto()
{

}

Texto::Texto(int isbn, String tituloLibro, float precio, String mat, Fecha publicado) : Libro(isbn,tituloLibro,precio), materia(mat), fechaPublicado(publicado)
{

}

Texto::~Texto()
{

}

String Texto::getMateria()
{
    return materia;
}

 Fecha Texto::getFechaPublicado()
 {
     return fechaPublicado;
 }

float Texto::precioVenta()
{
    float precioFinal = Libro::getPrecioBase();
    float porcentaje;

    if (fechaPublicado < fechaPrecio)
    {
        porcentaje = precioFinal * 0.75;
        precioFinal = precioFinal - porcentaje;
    }

    return precioFinal;
}

String Texto::tipoLibro()
{
    return "Texto";
}
