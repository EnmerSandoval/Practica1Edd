//
// Created by laptop on 8/03/2024.
//

#ifndef PRACTICA1EDD_LISTADOBLE_H
#define PRACTICA1EDD_LISTADOBLE_H


#include "Pila.h"

class ListaDoble {
public:
    class Nodo{

    public:
        Nodo(Pila* pila);

        Nodo* siguiente;
        Nodo* anterior;
        Pila* pila;

        Nodo(Pila* _pila) : pila(_pila), siguiente(nullptr), anterior(nullptr) {}
    };
    Nodo* inicio;
    Nodo* fin;


    ListaDoble() : inicio(nullptr), fin(nullptr) {}
    void insertarInicio(Pila* pila);
    void insertFinal(Pila* pila);
    void eliminarInicio();
    void eliminarFinal();
    void eliminar(Pila* pila);
};


#endif //PRACTICA1EDD_LISTADOBLE_H
