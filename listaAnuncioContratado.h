/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaAnuncioContratado.h
 * Author: Yuli
 *
 * Created on March 27, 2016, 12:43 AM
 */

#ifndef LISTAANUNCIOCONTRATADO_H
#define LISTAANUNCIOCONTRATADO_H

#include <iostream>

#include "NodoAnuncioContratado.h"  //La clase Lista usa la clase NodoCanal.
using namespace std;

class ListaAnuncioContratado {
private:
    int longitud; //Longitud de la lista
    NodoAnuncioContratado *cabeza; //Puntero al primero de la lista
public:
    ListaAnuncioContratado(void); //Constructora
    int getLongitud(void) const; //Analizadora
    NodoAnuncioContratado * getCabeza(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setCabeza(NodoAnuncio *); //Modificadora
    void insertarAnuncioContratado(AnuncioContratado anuncio); //Modificadora
};



#endif /* LISTAANUNCIOCONTRATADO_H */

