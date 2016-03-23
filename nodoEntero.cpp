/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "nodoEntero.h"

using namespace std;

NodoEntero::NodoEntero(int x) { //Constructora
    info = x;
    sig = NULL;
    ant = NULL;
}

void NodoEntero::setInfo(int px) //Modificadora
{
    info = px;
}

int NodoEntero::getInfo(void) //Analizadora
{
    return info;
}

NodoEntero * NodoEntero::getSig(void) //Analizadora
{
    return sig;
}

void NodoEntero::setSig(NodoEntero * psig) //Modificadora
{
    sig = psig;
}

NodoEntero * NodoEntero::getAnt(void) //Analizadora
{
    return ant;
}

void NodoEntero::setAnt(NodoEntero * pant) //Modificadora
{
    ant = pant;
}