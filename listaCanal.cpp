/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstddef>
#include "listaCanal.h"
#include "listaAnuncio.h"
#include "nodoCanal.h"
#include "anuncioContratado.h"
#include "nodoAnuncio.h"

ListaCanal::ListaCanal(void) { //Constructora
    longitud = 0;
    cabeza = NULL;
}

int ListaCanal::getLongitud(void) const { //Analizadora
    return longitud;
}

NodoCanal *ListaCanal::getCabeza()const {
    return this->cabeza;
}

void ListaCanal::imprimirCanal(string codigo) { //Salida
    NodoCanal *aux = getNodo(codigo);
    aux->getCanal().imprimirCanal();
}

bool ListaCanal::insertarCanal(Canal pcanal) //Modificadora
{
    NodoCanal * nuevo = new NodoCanal(pcanal);

    if (nuevo) {//Para verificar que exista memoria
        if (this->cabeza == NULL) {//Si la cabeza es igual a null
            cabeza = nuevo;
        }else{
            if(!verificarRepetido(pcanal)){
                nuevo->setSig(cabeza);
                cabeza->setAnt(nuevo);
                cabeza = nuevo;
            }else{
                cout << "El código o nombre especificado ya existe..." << endl;
                return false;
            }
        }
        longitud++;
        cout << "El canal se insertó exitosamente!" << endl;
        return true;
    }
}

bool ListaCanal::verificarRepetido(Canal pcanal){
    NodoCanal *aux = cabeza;
    while(aux){
        if(aux->getCanal().getCodigoCanal()==pcanal.getCodigoCanal()){
            return true;
        }
        aux = aux->getSig();
    }
    return false;
}

bool ListaCanal::actualizarCobros(void){ //Modificadora
    NodoCanal *nodoCanal = cabeza;
    Canal canal;
    double tiempoDuracionAnuncio = 0;
    double tiempoMinimoCanal = 0;
    double tiempoMaximoCanal = 0;
    double minimoACobrarDeCanal = 0;
    double costoPorMinuto = 0;
    double totalACobrar = 0;
    //ListaAnuncioContratado *nodoListaAnuncioContratado;
    ListaAnuncioContratado *listaAnuncioContratado;
    //listaAnuncioContratado = nodoCanal->getCanal().getListaAnuncioContratado();
    while(nodoCanal){
        totalACobrar = 0;
        canal = nodoCanal->getCanal();
        tiempoMinimoCanal = canal.getTiempoMinimoTransmitir();
        tiempoMaximoCanal = canal.getTiempoMaximoTransmitir();
        listaAnuncioContratado = canal.getListaAnuncioContratado();
        minimoACobrarDeCanal = canal.getMontoMinimoCobrar();
        costoPorMinuto = canal.getCostoMinuto();
        NodoAnuncioContratado *nodoAnuncioContratado = listaAnuncioContratado->getCabeza();
        while(nodoAnuncioContratado){
            AnuncioContratado anuncioContratado = nodoAnuncioContratado->getAnuncioContratado();
            NodoAnuncio *nodoAnuncio = anuncioContratado.getNodoAnuncio();
            Anuncio anuncio = nodoAnuncio->getAnuncio();
            tiempoDuracionAnuncio = anuncio.getTiempoDuracion();
            if(tiempoDuracionAnuncio<tiempoMinimoCanal){
                totalACobrar += minimoACobrarDeCanal;
            }else if (tiempoDuracionAnuncio>tiempoMaximoCanal){
                totalACobrar += ((tiempoDuracionAnuncio-tiempoMaximoCanal)/30)*2*costoPorMinuto+(tiempoMaximoCanal/60)*costoPorMinuto;
            }else{
                totalACobrar += (tiempoMaximoCanal/60)*costoPorMinuto;
            }
            nodoAnuncioContratado = nodoAnuncioContratado->getSig();
        }
        canal.setTotalACobrar(totalACobrar);
        nodoCanal = nodoCanal->getSig();
    }
    cout << "Los cobros han sido actualizados!" << endl;
    return true;
}

bool ListaCanal::incluirAnuncio(string codigoCanal, string codigoAnuncio, ListaAnuncio *listaAnuncio){ //Modificadora
    NodoCanal *nodoCanal = this->getNodo(codigoCanal);
    if(nodoCanal){
        NodoAnuncio *nodoAnuncio = listaAnuncio->getNodo(codigoAnuncio);
        if(nodoAnuncio){
            AnuncioContratado nvoContratado = AnuncioContratado(nodoAnuncio, nodoAnuncio->getAnuncio().getCodigoAnuncio());
            bool exito = nodoCanal->getCanal().getListaAnuncioContratado()->insertarAnuncioContratado(nvoContratado);
            if(exito){
                cout << "El anuncio se incluyó exitosamente!" << endl;
                return true;
            }
            cout << "El anuncio especificado ya existe..." << endl;
            return false;
        }
        cout << "El anuncio especificado no existe... Crearlo primero" << endl;
        return false;
    }
    cout << "El canal especificado no existe... Crearlo primero" << endl;
    return false;
}

NodoCanal *ListaCanal::getNodo(string codigoCanal){
    NodoCanal *aux = cabeza;
    while(aux){
        if(aux->getCanal().getCodigoCanal() == codigoCanal){
            return aux;
        }
        aux = aux->getSig();
    }
    return NULL;
}