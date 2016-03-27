/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include "listaAnuncio.h"

ListaAnuncio::ListaAnuncio(void) { //Constructora
    longitud = 0;
    cabeza = NULL;
}

int ListaAnuncio::getLongitud(void) const { //Analizadora
    return longitud;
}

NodoAnuncio *ListaAnuncio::getCabeza()const {
    return this->cabeza;
}

void ListaAnuncio::insertarAnuncio(Anuncio panuncio) //Modificadora
{
   
}
