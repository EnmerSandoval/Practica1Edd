//
// Created by laptop on 8/03/2024.
//

#ifndef PRACTICA1EDD_COLASPRINCIPALES_H
#define PRACTICA1EDD_COLASPRINCIPALES_H


#include "Carta.h"
#include "Nodo.h"

class ColasPrincipales {
public:
    class Nodo {

    public:
        Nodo(Carta* carta);

        Nodo* siguiente;
        Carta* carta;
    };
    int tamanio;
    Nodo* frente;
    Nodo* final;

    ColasPrincipales();

    void encolar(Carta* carta);
    void desencolar();
    Carta* mirar();
    bool estaVacia();
    int getTamanio();
    void setTamanio(int tamanio);
    void impresion(bool imprimir);

};

#endif //PRACTICA1EDD_COLASPRINCIPALES_H
