/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoCanal.h
 *
 * Created on March 24, 2016, 12:53 PM
 */

#ifndef NODOCANAL_H
#define NODOCANAL_H
#include "canal.h"

using namespace std;

class NodoCanal {
private:
    Canal canal; //Elemento de la lista
    NodoCanal *sig; //Siguiente elemento, es el puntero autoreferenciable
    NodoCanal *ant;
public:
    NodoCanal(Canal canal); //Constructora
    Canal getCanal(void); //Analizadora
    void setCanal(Canal canal); //Modificadora
    NodoCanal * getSig(void); //Analizadora
    NodoCanal * getAnt(void);
    void setSig(NodoCanal *); //Modificadora
    void setAnt(NodoCanal *);

};


#endif /* NODOCANAL_H */

