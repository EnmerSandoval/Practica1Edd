//
// Created by laptop on 8/03/2024.
//

#ifndef PRACTICA1EDD_NODO_H
#define PRACTICA1EDD_NODO_H


#include "Carta.h"

class Nodo {
public:
    Carta* carta;
    Nodo* siguiente;

    Nodo(Carta* carta);
};


#endif //PRACTICA1EDD_NODO_H
