#ifndef CAPALOGICA_H_INCLUDED
#define CAPALOGICA_H_INCLUDED
#include "TipoError.h"
#include "Libros.h"
class CapaLogica
{
private:
Libros libros;
/*Autores autores;*/
public:
CapaLogica ();
// constructor por defecto
void altaLibro (Libro *, TipoError &);
// da de alta un nuevo dueño en el sistema.
// devuelve un error si el dueño ya existía.
//void asignarMascota (long int, Mascota *, TipoError &);
// asigna la mascota al dueño con la cédula ingresada.
// devuelve un error si el dueño no existía o ya tenía mascota.
//Iterador listarDuenios ();
// devuelve un iterador con todos los dueños del sistema.
//int contarPeso (float);
// devuelve la cantidad de mascotas con el peso ingresado.
};

#endif // CAPALOGICA_H_INCLUDED
