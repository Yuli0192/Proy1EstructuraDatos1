/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaAnuncio.h
 * 
 * Created on March 24, 2016, 12:54 PM
 */

#ifndef LISTAANUNCIO_H
#define LISTAANUNCIO_H
#include <iostream>

#include "nodoAnuncio.h"  //La clase Lista usa la clase NodoCanal.
using namespace std;

class ListaAnuncio {
private:
    int longitud; //Longitud de la lista
    NodoAnuncio *cabeza; //Puntero al primero de la lista
public:
    ListaAnuncio(void); //Constructora
    int getLongitud(void) const; //Analizadora
    NodoAnuncio * getCabeza(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setCabeza(NodoAnuncio *); //Modificadora
    bool insertarAnuncio(Anuncio anuncio); //Modificadora
    NodoAnuncio * getNodo(string);
    bool verificarRepetido(Anuncio);
};

#endif /* LISTAANUNCIO_H */

