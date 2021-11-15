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
// da de alta un nuevo due�o en el sistema.
// devuelve un error si el due�o ya exist�a.
//void asignarMascota (long int, Mascota *, TipoError &);
// asigna la mascota al due�o con la c�dula ingresada.
// devuelve un error si el due�o no exist�a o ya ten�a mascota.
//Iterador listarDuenios ();
// devuelve un iterador con todos los due�os del sistema.
//int contarPeso (float);
// devuelve la cantidad de mascotas con el peso ingresado.
};

#endif // CAPALOGICA_H_INCLUDED
