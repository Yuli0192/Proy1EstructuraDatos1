/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include "listaAnuncio.h"
#include "nodoAnuncio.h"

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
    NodoAnuncio * nuevo = new NodoAnuncio(panuncio);
    if(nuevo){ //Verifica si hay memoria
        if(cabeza == NULL){
            cabeza = nuevo;
        }else{
            nuevo->setSig(cabeza);
            cabeza = nuevo;
        }
        longitud++;
        cout << "El anuncio se insertó exitosamente!" << endl;
    }
}

NodoAnuncio *ListaAnuncio::getNodo(string codigoAnuncio){
    NodoAnuncio *aux = cabeza;
    while(aux){
        if(aux->getAnuncio().getCodigoAnuncio() == codigoAnuncio){
            return aux;
        }
        aux = aux->getSig();
    }
    return NULL;
}
