//
// Created by laptop on 8/03/2024.
//

#include "ColasPrincipales.h"
#include "Carta.h"

ColasPrincipales::Nodo::Nodo(Carta* carta) : carta(carta), siguiente(nullptr) {}

ColasPrincipales::ColasPrincipales() : frente(nullptr), final(nullptr){}

void ColasPrincipales::encolar(Carta *carta) {
    Nodo* nodo = new Nodo(carta);
    if(estaVacia()){
        frente = final = nodo;
    } else {
        final->siguiente = nodo;
        final = nodo;
    }
}

int ColasPrincipales::getTamanio(){
    return tamanio;
}

void ColasPrincipales::setTamanio(int tamanio) {
    this->tamanio = tamanio;
}

void ColasPrincipales::desencolar() {
    if(!estaVacia()){
        Nodo* nodoAEliminar = frente;
        frente = frente->siguiente;
        if(frente == nullptr){
            final = nullptr;
        }
        delete nodoAEliminar;
    }
}

Carta* ColasPrincipales::mirar() {
    if (!estaVacia()){
        return frente->carta;
    } else{
        return nullptr;
    }
}


bool ColasPrincipales::estaVacia() {
    return frente == nullptr;
}

void ColasPrincipales::impresion(bool imprimir) {
    if(imprimir && !estaVacia()){
        Nodo* actual = frente;
        while (actual != nullptr) {
            actual->carta->imprimir();
            actual = actual->siguiente;
        }
    }
}