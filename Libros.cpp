#include "Libros.h"
Libros::Libros()
{
    for (int i=0; i < B; i++)
    crearLista(Hash[i]);
}

int Libros :: h (int isbn)
{
    return (isbn % B);
}

void Libros :: crearLista (Nodo * &L)
{
    L = NULL;
}

void Libros :: destruirLista (Nodo * &L)
{
    Nodo * aux = L;
    while (aux != NULL)
    {
        L = aux->sig;
        delete (aux);
        aux = L;
    }
    L = aux;
}

bool Libros::perteneceLista (Nodo * L, int isbn)
{
    bool existe = false;
    while (!existe && L != NULL)
        if (L->info->getCodigoISBN() == isbn)
            existe = true;
        else
            L = L->sig;
    return existe;
}

void Libros :: insFrontEnLista (Nodo * &L, Libro * lib)
{
    Nodo * aux = new Nodo;
    aux->info = lib;
    aux->sig = L;
    L = aux;
}

Libro * Libros :: obtenerEnLista (Nodo * L, int isbn)
{
    while (L->info->getCodigoISBN() != isbn)
        L = L->sig;
    return (L->info);
}
bool Libros::member (int isbn)
{
int cubeta = h(isbn);
return perteneceLista (Hash[cubeta], isbn);
}

void Libros :: Insert (Libro * lib)
{
int isbn = lib->getCodigoISBN();
int cubeta = h(isbn);
insFrontEnLista (Hash[cubeta], lib);
}

Libro * Libros :: Find (int isbn)
{
int cubeta = h(isbn);
return obtenerEnLista (Hash[cubeta], isbn);
}

