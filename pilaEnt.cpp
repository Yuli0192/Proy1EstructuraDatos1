/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "pilaEnt.h"

using namespace std;

PilaEnt::PilaEnt() { //Constructora
    longitud = 0;
    tope = NULL;
}

int PilaEnt::getLongitud(void) const { //Analizadora
    return longitud;
}

bool PilaEnt::pushElemento(int pelem) { //Modificadora
    NodoEntero * nuevo;
    nuevo = new NodoEntero(pelem);

    if (nuevo == NULL) {//Para verificar que exista memoria
        return false;
    } else {
        if (this->tope == NULL) {//Si la cabeza es igual a null
            tope = nuevo;
        } else {
            nuevo->setSig(tope);
            tope = nuevo;
        }
        longitud++;

        return true;
    }
}

NodoEntero *PilaEnt::getTope()const {
    return this->tope;
}

bool PilaEnt::popElemento() {
    NodoEntero *aux;
    if (!(this->tope == NULL)) {
        aux = tope;
        cout<< "El elemento a eliminar es: " << tope->getInfo()<<endl;
        tope = tope->getSig();
        longitud--;
        
        delete aux;
        return true;
    } else {
        return false;
    }
}

void PilaEnt::mostarElemento() {
    while(this->tope){
        this->popElemento();
    }
}

