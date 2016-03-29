/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   canal.h
 *
 * Created on March 24, 2016, 12:53 PM
 */

#ifndef CANAL_H
#define CANAL_H
#include <string>
#include "listaAnuncioContratado.h"
using namespace std;

class Canal {
private:
    ListaAnuncioContratado listaAnuncioContratado;
    int codigoCanal;
    string nombreCanal;
    string telefono;
    double montoMinimoCobrar;
    double tiempoMaximoTransmitir;
    double tiempoMinimoTransmitir;
    double costoMinuto;
public:
    Canal();
    Canal(int codigoCanal, string nombreCanal, string telefono, double montoMonimo, double tiempoMaximoTransmitir, double tiempoMinimoTransimitir, double costoMinuto); //Constructora
    int getCodigoCanal(void); //Analizadora
    void setCodigoCanal(int codigo); //Modificadora
    string getNombreCanal(void); //Analizadora
    void setNombreCanal(string nombre); //Modificadora
    string getTelefono(void); //Analizadora
    void setTelefono(string telefono); //Modificadora   
    double getMontoMinimoCobrar(void); //Analizadora
    void setMontoMinimoCobrar(double montoMinimoCobrar); //Modificadora     
    double getTiempoMaximoTransmitir(void); //Analizadora
    void setTiempoMaximoTransmitir(double tiempoMaximo); //Modificadora   
    double getTiempoMinimoTransmitir(void); //Analizadora
    void setTiempoMinimoTransmitir(double tiempoMinimo); //Modificadora   
    double getCostoMinuto(void); //Analizadora
    void setCostoMinuto(double costo); //Modificadora   
    ListaAnuncioContratado getListaAnuncioContratado(void);
    void setListaAnuncioContratado(ListaAnuncioContratado listaAnuncioContratado);
};



#endif /* CANAL_H */

