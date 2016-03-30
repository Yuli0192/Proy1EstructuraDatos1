/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaEnt.h
 *
 * Created on March 24, 2016, 12:53 PM
 */

#ifndef LISTAENT_H
#define LISTAENT_H
#include <iostream>
#include "nodoCanal.h"  //La clase Lista usa la clase NodoCanal.
using namespace std;

class ListaCanal {
private:
    int longitud; //Longitud de la lista
    NodoCanal *cabeza; //Puntero al primero de la lista
public:
    ListaCanal(void); //Constructora
    int getLongitud(void) const; //Analizadora
    NodoCanal * getCabeza(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setCabeza(NodoCanal *); //Modificadora
    void imprimirCanal(int codigoCanal); //Salida
    void insertarCanal(Canal canal); //Modificadora
    bool actualizarCobros(void); //Modificadora
    void incluirAnuncio(int codigoCanal, int codigoAnuncio); //Modificadora
};


#endif /* LISTAENT_H */

