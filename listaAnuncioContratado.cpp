/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include "listaAnuncioContratado.h"

ListaAnuncioContratado::ListaAnuncioContratado(void) { //Constructora
    longitud = 0;
    cabeza = NULL;
}

int ListaAnuncioContratado::getLongitud(void) const { //Analizadora
    return longitud;
}

NodoAnuncioContratado *ListaAnuncioContratado::getCabeza()const {
    return this->cabeza;
}

void ListaAnuncioContratado::insertarAnuncioContratado(AnuncioContratado panuncio) //Modificadora
{
   NodoAnuncioContratado * nuevo = new NodoAnuncioContratado(panuncio);
    if(nuevo){ //Verifica si hay memoria
        if(cabeza == NULL){
            cabeza = nuevo;
        }else{
            nuevo->setSig(cabeza);
            cabeza = nuevo;
        }
        longitud++;
        cout << "El anuncio contratado se insertó exitosamente!" << endl;
    }
}

