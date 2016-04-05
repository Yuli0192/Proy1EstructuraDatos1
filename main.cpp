/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 *
 * Created on March 24, 2016, 12:54 PM
 */

#include <iostream>
#include "listaCanal.h"
#include "listaAnuncio.h"
#include <string>
#include "canal.h"
#include "anuncio.h"
using namespace std;

void mostrarMenu(void);
void crearCanal(ListaCanal *);
void crearAnuncio(ListaAnuncio *);
void incluirAnuncio(ListaCanal *, ListaAnuncio *);
void actualizarCobros(ListaCanal *listaCanal);
void imprimirCanal(ListaCanal *);

int main(void) {
    cout << "EL CONTRATADOR DE ANUNCIOS" << endl;
    ListaCanal *listaCanal = new ListaCanal();
    ListaAnuncio *listaAnuncio = new ListaAnuncio();
    int respuesta;
    bool continuar = true;
    
    while(continuar) {
        mostrarMenu();
        cin >> respuesta;
        switch(respuesta){
            case 1:
                crearCanal(listaCanal);
                break;
            case 2:
                crearAnuncio(listaAnuncio);
                break;
            case 3:
                actualizarCobros(listaCanal);
                break;
            case 4:
                imprimirCanal(listaCanal);
                break;   
            case 5:
                incluirAnuncio(listaCanal, listaAnuncio);
                break;
            case 6:
                continuar = false;
                break;
            default:
                cout << "Valor inválido..." << endl;
        }
    }
    return 0;
}

void mostrarMenu() { //menú temporal
    cout << "1. Crear canal" << endl;
    cout << "2. Crear anuncio" << endl;
    cout << "3. Actualizar cobros" << endl;
    cout << "4. Imprimir canal" << endl;
    cout << "5. Incluir anuncio" << endl;
    cout << "6. Salir" << endl;
    cout << "Seleccione una opción: ";
}

void crearCanal(ListaCanal *listaCanal){
    string codigoCanal;
    string nombreCanal;
    string telefono;
    double montoMonimo = 0;
    double tiempoMaximoTransmitir = 0;
    double tiempoMinimoTransimitir = 0;
    double costoMinuto = 0;
    cout << "Código del canal: "; cin >> codigoCanal;
    cout << "Nombre del canal: "; cin >> nombreCanal;
    cout << "Teléfono: "; cin >> telefono;
    cout << "Monto mínimo a cobrar: "; cin >> montoMonimo;
    cout << "Tiempo máximo a transmitir: "; cin >> tiempoMaximoTransmitir;
    cout << "Tiempo mínimo a transmitir: "; cin >> tiempoMinimoTransimitir;
    cout << "Costo por minuto: "; cin >> costoMinuto;
    Canal nuevo = Canal(codigoCanal, nombreCanal, telefono, montoMonimo, tiempoMaximoTransmitir, tiempoMinimoTransimitir, costoMinuto);
    listaCanal->insertarCanal(nuevo);
}

void crearAnuncio(ListaAnuncio *listaAnuncio){
    string codigoEmpresa;
    string nombreEmpresa;
    string codigoAnuncio;
    double tiempoDuracion = 0;
    cout << "Código de la empresa: "; cin >> codigoEmpresa;
    cout << "Nombre de la empresa: "; cin >> nombreEmpresa;
    cout << "Código del anuncio: "; cin >> codigoAnuncio;
    cout << "Tiempo de duración del anuncio: "; cin >> tiempoDuracion;
    Anuncio nuevo = Anuncio(codigoEmpresa, nombreEmpresa, codigoAnuncio, tiempoDuracion);
    listaAnuncio->insertarAnuncio(nuevo);
}

void incluirAnuncio(ListaCanal *listaCanal, ListaAnuncio *listaAnuncio){
    string codigoCanal;
    string codigoAnuncio;
    cout << "Código del canal donde se incluirá el anuncio: "; cin >> codigoCanal;
    cout << "Código del anuncio a incluir: "; cin >> codigoAnuncio;
    listaCanal->incluirAnuncio(codigoCanal, codigoAnuncio, listaAnuncio);
}

void actualizarCobros(ListaCanal *listaCanal){
    listaCanal->actualizarCobros();
}

void imprimirCanal(ListaCanal *listaCanal){
    string codigo;
    cout << "Ingrese el código del canal: "; cin >> codigo;
    listaCanal->imprimirCanal(codigo);
}