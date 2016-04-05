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
#include "nodoAnuncio.h"
#include "listaAnuncio.h"
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
    void imprimirCanal(string); //Salida
    bool insertarCanal(Canal canal); //Modificadora
    bool actualizarCobros(void); //Modificadora
    bool incluirAnuncio(string, string, ListaAnuncio *); //Modificadora
    NodoCanal * getNodo(string);
    bool verificarRepetido(Canal);
};


#endif /* LISTAENT_H */

