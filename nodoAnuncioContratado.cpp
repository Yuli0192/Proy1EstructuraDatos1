/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "nodoAnuncioContratado.h"

using namespace std;


NodoAnuncioContratado::NodoAnuncioContratado() { //Constructora
    sig = NULL;
}

void NodoAnuncioContratado::setAnuncioContratado(AnuncioContratado *panuncio) //Modificadora
{
    anuncioContratado = panuncio;
}

AnuncioContratado *NodoAnuncioContratado::getAnuncioContratado(void) //Analizadora
{
    return anuncioContratado;
}

NodoAnuncioContratado * NodoAnuncioContratado::getSig(void) //Analizadora
{
    return sig;
}

void NodoAnuncioContratado::setSig(NodoAnuncioContratado * psig) //Modificadora
{
    sig = psig;
}
