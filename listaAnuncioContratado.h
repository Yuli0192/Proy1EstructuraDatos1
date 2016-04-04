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

#include "nodoAnuncioContratado.h"  //La clase Lista usa la clase NodoCanal.
using namespace std;

class ListaAnuncioContratado {
private:
    double montonACobrar; //Total a cobrar por todos los anuncios contratados
    int longitud; //Longitud de la lista
    NodoAnuncioContratado *cabeza; //Puntero al primero de la lista
public:
    ListaAnuncioContratado(void); //Constructora
    int getLongitud(void) const; //Analizadora
    NodoAnuncioContratado * getCabeza(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setCabeza(NodoAnuncio *); //Modificadora
    bool insertarAnuncioContratado(AnuncioContratado anuncio); //Modificadora
    bool verificarRepetido(string);
};



#endif /* LISTAANUNCIOCONTRATADO_H */

