//
// Created by laptop on 8/03/2024.
//

#include "ListaDoble.h"

ListaDoble::Nodo::Nodo(Pila* pila) : pila(pila), siguiente(nullptr), anterior(nullptr) {}

void ListaDoble::insertarInicio(Pila *pila) {
    Nodo* nodo = new Nodo(pila);
    if(inicio == nullptr){
        inicio = fin = nodo;
    } else {
        nodo->siguiente = inicio;
        inicio->anterior = nodo;
        inicio = nodo;
    }
}

void ListaDoble::insertFinal(Pila *pila) {
    Nodo* nodo = new Nodo(pila);
    if(inicio == nullptr){
        inicio = fin = nodo;
    } else {
        nodo->anterior = fin;
        fin->siguiente = nodo;
        fin = nodo;
    }
}

void ListaDoble::eliminarInicio() {
    if(inicio != nullptr){
        Nodo* nodoAEliminar = inicio;
        inicio = inicio->siguiente;
        if(inicio == nullptr){
            fin = nullptr;
        } else {
            inicio->anterior = nullptr;
        }
        delete nodoAEliminar;
    }
}

void ListaDoble::eliminarFinal() {
    if(fin != nullptr){
        Nodo* nodoAEliminar = fin;
        fin = fin->anterior;
        if(fin == nullptr){
            inicio = nullptr;
        } else {
            fin->siguiente = nullptr;
        }
        delete nodoAEliminar;
    }
}

void ListaDoble::eliminar(Pila* pila){
    Nodo* actual = inicio;
    while(actual != nullptr){
        if(actual->pila = pila){
            if(actual == inicio){
                eliminarInicio();
            } else if(actual == fin){
                eliminarFinal();
            } else {
                actual->anterior->siguiente = actual->siguiente;
                actual->siguiente->anterior = actual->anterior;
                delete actual;
            }
            break;
        }
        actual = actual->siguiente;
    }
}