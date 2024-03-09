//
// Created by laptop on 8/03/2024.
//

#ifndef PRACTICA1EDD_PILA_H
#define PRACTICA1EDD_PILA_H

#include "Pila.h"


#include "Carta.h"

class Pila {
private:
    class Nodo {
        Carta* carta;

        Nodo(Carta* carta);

    public:
        Nodo* siguiente;
    };

    Nodo* cima;

public:
    Pila();

    void push(Carta* carta);
    void pop();
    Carta* top();
    bool estaVacia();
};
