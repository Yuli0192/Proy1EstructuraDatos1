/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yuli
 *
 * Created on February 1, 2016, 8:22 PM
 */

#include <iostream>

#include "listaEnt.h"
#include "pilaEnt.h"
#include "nodoEntero.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ListaEnt *listaSimple1 = new ListaEnt();
    PilaEnt *pila = new PilaEnt();

    listaSimple1->insertarElemento(5);
    listaSimple1->insertarElemento(4);
    listaSimple1->insertarElemento(7);
    //    listaSimple1->insertarElemento(6);
    listaSimple1->mostrarLista();
    
    
    pila->pushElemento(5);
    pila->pushElemento(4);
    
    pila->mostarElemento();
    //    listaSimple2->insertarElemento(5);
    //    listaSimple2->insertarElemento(4);
    //    listaSimple2->insertarElemento(7);
    //    listaSimple2->insertarElemento(6);
    //    
    //   // listaSimple2->mostrarLista();
    //
    //    if(listaSimple1->sonIguales(listaSimple2)){
    //        cout<<"La lista 1 y la lista 2 son iguales"<<endl; 
    //    }else{
    //        cout<<"La lista 1 y la lista 2 no son iguales"<<endl;
    //    }
    //    
    //    if(listaSimple1->sonSemejantes(listaSimple2)){
    //        cout<<"La lista 1 y la lista 2 son semejantes"<<endl; 
    //    }else{
    //        cout<<"La lista 1 y la lista 2 no son semejantes"<<endl;
    //    }
    //
    //    if(listaSimple1->esSublista(listaSimple2)){
    //        cout<<"La lista 2 es sublista de la lista 1"<<endl; 
    //    }else{
    //        cout<<"La lista 2 no es sublista de la lista 1"<<endl;
    //    }
    //    
    //    if(listaSimple1->estaContenido(listaSimple2)){
    //        cout<<"La lista 2 esta contenida en la lista 1"<<endl; 
    //    }else{
    //        cout<<"La lista 2 no esta contenida en la lista 1"<<endl;
    //    }

    //    listaSimple1->insertarOrdenado(5);
    //    listaSimple1->insertarOrdenado(3);
    //    listaSimple1->insertarOrdenado(7);
    //    listaSimple1->insertarOrdenado(6);
    //    listaSimple1->insertarOrdenado(9);
    //
    //    listaSimple1->mostrarLista();



    return 0;
}


