/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "anuncio.h"

Anuncio::Anuncio(){
    
}
Anuncio::Anuncio(string codigoEmpresa, string nombreEmpresa, string codigoAnuncio, double tiempoDuracion) { //Constructora
    
    setCodigoEmpresa(codigoEmpresa);
    setNombreEmpresa(nombreEmpresa);
    setCodigoAnuncio(codigoAnuncio);
    setTiempoDuracion(tiempoDuracion);
}

string Anuncio::getCodigoEmpresa(void){ //Analizadora
    return codigoEmpresa;
}
void Anuncio::setCodigoEmpresa(string codigo){ //Modificadora
    codigoEmpresa = codigo;
}
string Anuncio::getNombreEmpresa(void){ //Analizadora
    return nombreEmpresa;
}
void Anuncio::setNombreEmpresa(string nombre){ //Modificadora
    nombreEmpresa = nombre;
}
string Anuncio::getCodigoAnuncio(void){ //Analizadora
    return codigoAnuncio;
}
void Anuncio::setCodigoAnuncio(string codigo){ //Modificadora
    codigoAnuncio = codigo;
}   
double Anuncio::getTiempoDuracion(void){ //Analizadora
    return tiempoDuracion;
}
void Anuncio::setTiempoDuracion(double tiempoDuracion){ //Modificadora   
    tiempoDuracion = tiempoDuracion;
}  