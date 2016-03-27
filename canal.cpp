/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "canal.h"

Canal::Canal(int codigoCanal, string nombreCanal, string telefono, double montoMonimo, double tiempoMaximoTransmitir, double tiempoMinimoTransimitir, double costoMinuto) { //Constructora
    setCodigoCanal(codigoCanal);
    setNombreCanal(nombreCanal);
    setTelefono(telefono);
    setMontoMinimoCobrar(montoMonimo);
    setTiempoMaximoTransmitir(tiempoMaximoTransmitir);
    setTiempoMinimoTransmitir(tiempoMinimoTransimitir);
    setCostoMinuto(costoMinuto);
}

int Canal::getCodigoCanal(void){ //Analizadora
    return codigoCanal;
}
void Canal::setCodigoCanal(int codigo){ //Modificadora
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