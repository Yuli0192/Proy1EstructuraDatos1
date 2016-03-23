/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "listaEnt.h"

ListaEnt::ListaEnt(void) { //Constructora
    longitud = 0;
    cabeza = NULL;
    aux = NULL;
}

int ListaEnt::getLongitud(void) const { //Analizadora
    return longitud;
}

bool ListaEnt::insertarElemento(int pelem) { //Modificadora
    NodoEntero * nuevo;
    nuevo = new NodoEntero(pelem);

    if (nuevo == NULL) {//Para verificar que exista memoria
        return false;
    } else {
        if (this->cabeza == NULL) {//Si la cabeza es igual a null
            cabeza = nuevo;
        } else {
            nuevo->setSig(cabeza);
            cabeza->setAnt(nuevo);
            cabeza = nuevo;
        }
        longitud++;
        //cout<<"El tamaño de la lista es: " << longitud;
        return true;
    }
}

/************************************************************************************************
 * Se debe crear un metodo que retorna void y muestre  mediante cout el contenido de la lista.
 * Crearemos un ciclo que recorra la lista hasta que esta sea null (nodosiguiente = null) y cada
 * vez que el nodo actual no sea null es donde se mostrara con cout el contenido int del nodo.
 *  Para que este metodo funciones es indispensable agregarlo tambien en el archivo de cabecera
 *************************************************************************************************/
void ListaEnt::mostrarLista() {

    aux = this->cabeza;

    while (aux != NULL) {
        cout << aux->getInfo()<<endl;
        if(aux->getAnt()){
            cout << "El nodo anterior de: " << aux->getInfo() << " es " << aux->getAnt()->getInfo()<<endl;
        }
        aux = aux->getSig();

    }
}

NodoEntero *ListaEnt::getPrimero()const {
    return this->cabeza;
}

/************************************************************************************************
 * Metodo que valida si las dos listas son iguales
 *************************************************************************************************/
bool ListaEnt::sonIguales(ListaEnt *lista2) {

    bool iguales = false;
    aux = this->cabeza;
    NodoEntero *auxLista2;
    auxLista2 = lista2->getPrimero();

    if (this->cabeza != NULL && lista2->getPrimero() != NULL) {
        if (this->getLongitud() == lista2->getLongitud()) {
            while (aux != NULL) {
                if (aux->getInfo() == auxLista2->getInfo()) {
                    iguales = true;
                } else {
                    iguales = false;
                    break;
                }
                aux = aux->getSig();
                auxLista2 = auxLista2->getSig();
            }
        } else {
            iguales = false;
        }
    }
    return iguales;
}

/************************************************************************************************
 * Metodo que valida si las dos listas son semejantes
 *************************************************************************************************/
bool ListaEnt::sonSemejantes(ListaEnt *lista2) {
    bool semejante = false;
    aux = this->cabeza;
    NodoEntero *auxLista2;

    if (this->getPrimero() != NULL && lista2->getPrimero() != NULL) {
        if (this->getLongitud() == lista2->getLongitud()) {
            for (int i = 0; i < this->getLongitud(); i++) {

                auxLista2 = lista2->getPrimero();

                for (int j = 0; j < lista2->getLongitud(); j++) {

                    if (aux->getInfo() == auxLista2->getInfo()) {
                        semejante = true;
                        break;
                    }
                    auxLista2 = auxLista2->getSig();
                }
                if (semejante == false) {
                    semejante = false;
                    break;
                }
                aux = aux->getSig();
            }
        }
    } else {
        semejante = false;
    }
    return semejante;
}

/************************************************************************************************
 * Metodo que valida si la lista 2 es sublista de la lista 1
 *************************************************************************************************/
bool ListaEnt::esSublista(ListaEnt *lista2) {
    bool sublista = true;
    aux = this->cabeza;
    NodoEntero *auxLista2;
    auxLista2 = lista2->getPrimero();
    aux = this->cabeza;

    if (this->getPrimero() != NULL && lista2->getPrimero() != NULL) {
        while (aux) {
            if (aux->getInfo() == auxLista2->getInfo()) {
                while (aux && auxLista2) {
                    if (aux->getInfo() != auxLista2->getInfo()) {
                        sublista = false;
                        break;
                    }
                    aux = aux->getSig();
                    auxLista2 = auxLista2->getSig();
                }
                if (sublista == false) {
                    sublista = false;
                    break;
                } else {
                    sublista = true;
                    break;
                }
            } else {
                aux = aux->getSig();
            }
        }
    } else {
        sublista = false;
    }

    return sublista;

}

/************************************************************************************************
 * Metodo que valida si la lista 2 esta contenida en la lista 1
 *************************************************************************************************/
bool ListaEnt::estaContenido(ListaEnt *lista2) {
    bool contenido = false;
    aux = this->cabeza;
    NodoEntero *auxLista2;
    auxLista2 = lista2->getPrimero();

    if (this->getPrimero() != NULL && lista2->getPrimero() != NULL) {

        for (int i = 0; i < lista2->getLongitud(); i++) {
            aux = this->cabeza;
            for (int j = 0; j < this->getLongitud(); j++) {
                if (aux->getInfo() == auxLista2->getInfo()) {
                    contenido = true;
                    break;
                } else {
                    contenido = false;
                }
                aux = aux->getSig();
            }
            if (contenido == false) {
                contenido = false;
                break;
            }
            auxLista2 = auxLista2->getSig();
        }

    } else {
        contenido = false;
    }

    return contenido;

}

bool ListaEnt::insertarOrdenado(int pelem) {
    NodoEntero * nuevo;
    NodoEntero * anterior;
    nuevo = new NodoEntero(pelem);

    if (nuevo == NULL) {//Para verificar que exista memoria
        return false;
    } else {
        if (this->cabeza == NULL) {//Si la cabeza es igual a null
            cabeza = nuevo;
        } else {
            if (nuevo->getInfo() < this->cabeza->getInfo()) {
                nuevo->setSig(cabeza);
                cabeza = nuevo;
            } else {
                anterior = cabeza;
                while (anterior->getSig() && nuevo->getInfo() > anterior->getSig()->getInfo()) {
                    anterior = anterior->getSig();
                }
                nuevo->setSig(anterior->getSig());
                anterior->setSig(nuevo);
            }

        }
        longitud++;
        return true;
    }

}
