//
// Created by laptop on 8/03/2024.
//

#include "Pila.h"

#include "Pila.h"

Pila::Nodo::Nodo(Carta* carta) : carta(carta), siguiente(nullptr) {}

Pila::Pila() : cima(nullptr) {}

void Pila::push(Carta* carta) {
    Nodo* nodo = new Nodo(carta);
    nodo->siguiente = cima;
    cima = nodo;
}

void Pila::pop() {
    if (cima != nullptr) {
        Nodo* nodoAEliminar = cima;
        cima = cima->siguiente;
        delete nodoAEliminar;
    }
}

Carta* Pila::top() {
    if (cima != nullptr) {
        return cima->carta;
    } else {
        return nullptr;
    }
}

bool Pila::estaVacia() {
    return cima == nullptr;
}