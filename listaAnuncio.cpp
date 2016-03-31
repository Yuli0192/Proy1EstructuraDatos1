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

bool ListaAnuncio::insertarAnuncio(Anuncio panuncio) //Modificadora
{
    NodoAnuncio * nuevo = new NodoAnuncio(panuncio);
    if(nuevo){ //Verifica si hay memoria
        if(cabeza == NULL){
            cabeza = nuevo;
        }else{
            if(!verificarRepetido(panuncio)){
                nuevo->setSig(cabeza);
                cabeza = nuevo;
            }else{
                cout << "El código del anuncio ya existe..." << endl;
                return false;
            }
        }
        longitud++;
        cout << "El anuncio se insertó exitosamente!" << endl;
        return true;
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

bool ListaAnuncio::verificarRepetido(Anuncio panuncio){
    NodoAnuncio *aux = cabeza;
    while(aux){
        if(aux->getAnuncio().getCodigoAnuncio() == panuncio.getCodigoAnuncio()){
            return true;
        }
        aux = aux->getSig();
    }
    return false;
}