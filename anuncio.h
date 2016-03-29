/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   anuncio.h
 *
 * Created on March 24, 2016, 12:53 PM
 */

#ifndef ANUNCIO_H
#define ANUNCIO_H
#include <string>
using namespace std;

class Anuncio {
private:
    string codigoEmpresa;
    string nombreEmpresa;
    string codigoAnuncio;
    double tiempoDuracion;
public:
    Anuncio();
    Anuncio(string codigoEmpresa, string nombreEmpresa, string codigoAnuncio, double tiempoDuracion); //Constructora
    string getCodigoEmpresa(void); //Analizadora
    void setCodigoEmpresa(string codigo); //Modificadora
    string getNombreEmpresa(void); //Analizadora
    void setNombreEmpresa(string nombre); //Modificadora
    string getCodigoAnuncio(void); //Analizadora
    void setCodigoAnuncio(string codigo); //Modificadora
    double getTiempoDuracion(void); //Analizadora
    void setTiempoDuracion(double tiempoDuracion); //Modificadora  

};



#endif /* ANUNCIO_H */

