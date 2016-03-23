/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pilaEnt.h
 * Author: Yuli
 *
 * Created on March 21, 2016, 8:49 PM
 */

#ifndef PILAENT_H
#define PILAENT_H
#include <iostream>
#include "NodoEntero.h"  //La clase Lista usa la clase NodoEntero. 
using namespace std;

class PilaEnt {
private:
    int longitud; //Longitud de la pila
    NodoEntero *tope; //Puntero al primero de la pila
public:
    PilaEnt(void); //Constructora
    int getLongitud(void) const; //Analizadora
    NodoEntero * getTope(void) const; //Analizadora
    void setLongitud(int l); //Modificadora
    void setTope(NodoEntero *); //Modificadora
    bool pushElemento(int);
    bool popElemento();
    void mostarElemento(void);
};   
#endif /* PILAENT_H */

