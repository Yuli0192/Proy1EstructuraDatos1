/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaEnt.h
 * Author: Yuli
 *
 * Created on February 15, 2016, 8:58 PM
 */

#ifndef LISTAENT_H
#define LISTAENT_H
#include <iostream>
#include "NodoEntero.h"  //La clase Lista usa la clase NodoEntero. 
using namespace std;

class ListaEnt {
private:
    int longitud; //Longitud de la lista
    NodoEntero *cabeza; //Puntero al primero de la lista
    NodoEntero *aux;
public:
    ListaEnt(void); //Constructora
    int getLongitud(void) const; //Analizadora
    NodoEntero * getPrimero(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setPrimero(NodoEntero *); //Modificadora
    bool insertarElemento(int);
    void mostrarLista(void);
    bool sonIguales(ListaEnt *);
    bool sonSemejantes(ListaEnt *);
    bool esSublista(ListaEnt *);
    bool estaContenido(ListaEnt *);
    bool insertarOrdenado(int);
};


#endif /* LISTAENT_H */

