/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoAnuncio.h
 *
 * Created on March 24, 2016, 12:54 PM
 */

#ifndef NODOANUNCIO_H
#define NODOANUNCIO_H

#include "anuncio.h"

using namespace std;

class NodoAnuncio {
private:
    Anuncio anuncio; //Elemento de la lista
    NodoAnuncio *sig; //Siguiente elemento, es el puntero autoreferenciable
    
public:
    NodoAnuncio(Anuncio anuncio); //Constructora
    Anuncio getAnuncio(void); //Analizadora
   void setAnuncio(Anuncio anuncio); //Modificadora
    NodoAnuncio * getSig(void); //Analizadora
    void setSig(NodoAnuncio *); //Modificadora

};


#endif /* NODOANUNCIO_H */

