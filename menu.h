#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "Autores.h"
#include "Libros.h"
#include "TipoError.h"
#include "String.h"
#include <cstdlib>//SE AGREGA LIBRERIA PARA LIMPIAR LA PANTALLA CADA VEZ QUE SE CAMBIA DE MENU

//MUESTRA OPCIONES DEL MENU PRINCIPAL
void mostrarPrimerMenu();

//MUESTRA OPCIONES DE LISTADOS Y CONSULTAS
void mostrarSegundoMenu();

#endif // MENU_H_INCLUDED
