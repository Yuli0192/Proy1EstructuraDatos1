/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoAnuncioContratado.h
 * Author: Yuli
 *
 * Created on March 27, 2016, 12:22 AM
 */

#ifndef NODOANUNCIOCONTRATADO_H
#define NODOANUNCIOCONTRATADO_H

#include "anuncioContratado.h"

using namespace std;

class NodoAnuncioContratado {
private:
    AnuncioContratado anuncioContratado; //Elemento de la lista
    NodoAnuncioContratado *sig; //Siguiente elemento, es el puntero autoreferenciable

public:
    NodoAnuncioContratado();
    NodoAnuncioContratado(AnuncioContratado anuncio); //Constructora
    AnuncioContratado getAnuncioContratado(void); //Analizadora
    void setAnuncioContratado(AnuncioContratado anuncio); //Modificadora
    NodoAnuncioContratado * getSig(void); //Analizadora
    void setSig(NodoAnuncioContratado *); //Modificadora

};

#endif /* NODOANUNCIOCONTRATADO_H */

