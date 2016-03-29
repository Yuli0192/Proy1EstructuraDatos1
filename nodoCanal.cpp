/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "nodoCanal.h"

using namespace std;

NodoCanal::NodoCanal() { //Constructora
    sig = NULL;
    ant = NULL;
}

void NodoCanal::setCanal(Canal pcanal) //Modificadora
{
    canal = pcanal;
}

Canal NodoCanal::getCanal(void) //Analizadora
{
    return canal;
}

NodoCanal * NodoCanal::getSig(void) //Analizadora
{
    return sig;
}

void NodoCanal::setSig(NodoCanal * psig) //Modificadora
{
    sig = psig;
}

NodoCanal * NodoCanal::getAnt(void) //Analizadora
{
    return ant;
}

void NodoCanal::setAnt(NodoCanal * pant) //Modificadora
{
    ant = pant;
}