/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "canal.h"
#include "listaAnuncioContratado.h"
#include <iostream>
#include "listaAnuncio.h"
#include "nodoCanal.h"
#include "anuncioContratado.h"
#include "nodoAnuncio.h"

Canal::Canal(){
    
}
Canal::Canal(string codigoCanal, string nombreCanal, string telefono, double montoMonimo, double tiempoMaximoTransmitir, double tiempoMinimoTransimitir, double costoMinuto) { //Constructora
    setCodigoCanal(codigoCanal);
    setNombreCanal(nombreCanal);
    setTelefono(telefono);
    setMontoMinimoCobrar(montoMonimo);
    setTiempoMaximoTransmitir(tiempoMaximoTransmitir);
    setTiempoMinimoTransmitir(tiempoMinimoTransimitir);
    setCostoMinuto(costoMinuto);
    listaAnuncioContratado = new ListaAnuncioContratado();
}

string Canal::getCodigoCanal(void){ //Analizadora
    return codigoCanal;
}
void Canal::setCodigoCanal(string codigo){ //Modificadora
    codigoCanal = codigo;
}
string Canal::getNombreCanal(void){ //Analizadora
    return nombreCanal;
}
void Canal::setNombreCanal(string nombre){ //Modificadora
    nombreCanal = nombre;
}
string Canal::getTelefono(void){ //Analizadora
    return telefono;
}
void Canal::setTelefono(string telefono){ //Modificadora
    telefono = telefono;
}   
double Canal::getMontoMinimoCobrar(void){ //Analizadora
    return montoMinimoCobrar;
}
void Canal::setMontoMinimoCobrar(double montoMinimo){ //Modificadora   
    montoMinimoCobrar = montoMinimo;
}  
double Canal::getTiempoMaximoTransmitir(void){ //Analizadora
    return tiempoMaximoTransmitir;
}
void Canal::setTiempoMaximoTransmitir(double tiempoMaximo){ //Modificadora   
    tiempoMaximoTransmitir = tiempoMaximo;
}
double Canal::getTiempoMinimoTransmitir(void){ //Analizadora
    return tiempoMinimoTransmitir;
}
void Canal::setTiempoMinimoTransmitir(double tiempoMinimo){ //Modificadora  
    tiempoMinimoTransmitir = tiempoMinimo;
} 
double Canal::getCostoMinuto(void){ //Analizadora
    return costoMinuto;
}
void Canal::setCostoMinuto(double costo){ //Modificadora   
    costoMinuto = costo;
}

ListaAnuncioContratado *Canal::getListaAnuncioContratado(void){
    return listaAnuncioContratado;
}
    
void Canal::setListaAnuncioContratado(ListaAnuncioContratado *listaAnuncio){
    listaAnuncioContratado = listaAnuncio;
}

void Canal::setTotalACobrar(double ptotalACobrar){//Modificadora 
    totalACobrar = ptotalACobrar;
}

double Canal::getTotalACobrar(){//Analizadora
    return totalACobrar;
}

void Canal::imprimirCanal() {
    ListaAnuncioContratado listaAnuncios;
    if (listaAnuncios.getCabeza()) {
        int numAnuncios = listaAnuncios.getLongitud();
        NodoAnuncioContratado *nodoAnuncioContratado = listaAnuncios.getCabeza();
        cout << "Anuncios del canal:" << endl;
        while (nodoAnuncioContratado) {
            AnuncioContratado anuncioContratado = nodoAnuncioContratado->getAnuncioContratado();
            NodoAnuncio *nodoAnuncio = anuncioContratado.getNodoAnuncio();
            Anuncio anuncio = nodoAnuncio->getAnuncio();
            cout << "Codigo empresa:" << anuncio.getCodigoEmpresa() << endl;
            cout << "Nombre empresa:" << anuncio.getNombreEmpresa() << endl;
            cout << "Codigo anuncio:" << anuncio.getCodigoAnuncio() << endl;
            cout << "Costo anuncio:" << anuncioContratado.getCostoAnuncio() << endl;
            cout << endl;

            nodoAnuncioContratado = nodoAnuncioContratado->getSig();
        }
    }
}