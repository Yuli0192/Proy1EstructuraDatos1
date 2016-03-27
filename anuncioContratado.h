/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   anuncioContratado.h
 * Author: Yuli
 *
 * Created on March 26, 2016, 10:00 PM
 */

#ifndef ANUNCIOCONTRATADO_H
#define ANUNCIOCONTRATADO_H
#include <string>
#include "nodoAnuncio.h"
using namespace std;

class AnuncioContratado {
private:
    NodoAnuncio *nodoAnuncio;
    string codigoAnuncio;
    double costoAnuncio;
    
public:
    AnuncioContratado(NodoAnuncio *nodoAnuncio); //Constructora
    NodoAnuncio* getNodoAnuncio(void);
    void setNodoAnuncio(NodoAnuncio *nodoAnuncio);
    string getCodigo(void); //Analizadora
    void setCodigo(string codigo); //Modificadora
    double getCostoAnuncio(void); //Analizadora
    void setCostoAnuncio(double costoAnuncio); //Modificadora  

};

#endif /* ANUNCIOCONTRATADO_H */

