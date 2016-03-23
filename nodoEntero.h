/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoEntero.h
 * Author: Yuli
 *
 * Created on February 15, 2016, 8:54 PM
 */

#ifndef NODOENTERO_H
#define NODOENTERO_H

using namespace std;

class NodoEntero {
private:
    int info; //Elemento de la lista (un entero, aunque podria ser inclusive una clase completa)
    NodoEntero *sig; //Siguiente elemento, es el puntero autoreferenciable
    NodoEntero *ant;
public:
    NodoEntero(int x = 0); //Constructora
    int getInfo(void); //Analizadora
    void setInfo(int x); //Modificadora
    NodoEntero * getSig(void); //Analizadora
     NodoEntero * getAnt(void);
    void setSig(NodoEntero *); //Modificadora
    void setAnt(NodoEntero *); 
    void imprimirNodo(void); //Analizadora
//    Se puede agregar todas las operaciones necesarias, en este caso cualquier operacion adicional 
//    no pertenece a esta clase
};


#endif /* NODOENTERO_H */

