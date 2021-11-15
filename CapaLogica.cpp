#include "CapaLogica.h"
CapaLogica :: CapaLogica (): libros()/*, autores()*/
{
}

void CapaLogica :: altaLibro (Libro * lib, TipoError &error)
{
    error = SIN_ERROR;
    int isbn = lib->getCodigoISBN();
    if (libros.member(isbn))
        error = DUENIO_YA_EXISTE;
    else
        libros.Insert(lib);
}
