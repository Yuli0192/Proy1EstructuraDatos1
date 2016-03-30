/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "listaCanal.h"
#include "nodoCanal.h"

ListaCanal::ListaCanal(void) { //Constructora
    longitud = 0;
    cabeza = NULL;
}

int ListaCanal::getLongitud(void) const { //Analizadora
    return longitud;
}

NodoCanal *ListaCanal::getCabeza()const {
    return this->cabeza;
}

void ListaCanal::imprimirCanal(int codigoCanal) { //Salida

}

void ListaCanal::insertarCanal(Canal pcanal) //Modificadora
{
    NodoCanal * nuevo = new NodoCanal(pcanal);

    if (nuevo) {//Para verificar que exista memoria
        if (this->cabeza == NULL) {//Si la cabeza es igual a null
            cabeza = nuevo;
        }else{
            nuevo->setSig(cabeza);
            cabeza->setAnt(nuevo);
            cabeza = nuevo;
        }
        longitud++;
        cout << "El canal se insertó exitosamente!" << endl;
    }
}

bool ListaCanal::actualizarCobros(void){ //Modificadora
    return true;
}
void ListaCanal::incluirAnuncio(int codigoCanal, int codigoAnuncio){ //Modificadora
    
}