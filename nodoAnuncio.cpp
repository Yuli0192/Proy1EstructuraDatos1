/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <cstddef>
#include "nodoAnuncio.h"

using namespace std;


NodoAnuncio::NodoAnuncio() { //Constructora
    sig = NULL;
}

void NodoAnuncio::setAnuncio(Anuncio panuncio) //Modificadora
{
    anuncio = panuncio;
}

Anuncio NodoAnuncio::getAnuncio(void) //Analizadora
{
    return anuncio;
}

NodoAnuncio * NodoAnuncio::getSig(void) //Analizadora
{
    return sig;
}

void NodoAnuncio::setSig(NodoAnuncio * psig) //Modificadora
{
    sig = psig;
}
