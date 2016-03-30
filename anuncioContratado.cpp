/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "anuncioContratado.h"
#include "nodoAnuncio.h"

AnuncioContratado::AnuncioContratado(){}

AnuncioContratado::AnuncioContratado(NodoAnuncio *nodoAnuncio, string pcodigoAnuncio) { //Constructora
    setNodoAnuncio(nodoAnuncio);
    setCodigo(pcodigoAnuncio);
    setCostoAnuncio(0);
}

NodoAnuncio *AnuncioContratado::getNodoAnuncio(void) //Analizadora
{
    return nodoAnuncio;
}

void AnuncioContratado::setNodoAnuncio(NodoAnuncio *pnodoAnuncio) //Modificadora
{
    nodoAnuncio = pnodoAnuncio;
}

string AnuncioContratado::getCodigo(void){ //Analizadora
    return codigoAnuncio;
}
void AnuncioContratado::setCodigo(string codigo){ //Modificadora
    codigoAnuncio = codigo;
}

double AnuncioContratado::getCostoAnuncio(void){ //Analizadora
    return costoAnuncio;
}
void AnuncioContratado::setCostoAnuncio(double costoAnuncio){ //Modificadora
    costoAnuncio = costoAnuncio;
}   
 
