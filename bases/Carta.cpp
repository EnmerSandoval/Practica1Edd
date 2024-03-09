//
// Created by laptop on 8/03/2024.
//

#include <iostream>
#include "Carta.h"

Carta::Carta(int numero, Palo palo, char color, bool estado) {
    this->numero = numero;
    this->palo = palo;
    this->color = color;
    this->estado = estado;
}

void Carta::setNumero(int numero) {
    this->numero = numero;
}

void Carta::setPalo(Palo palo) {
    this->palo = palo;
}

void Carta::setColor(char color) {
    this->color = color;
}

void Carta::setEstado(bool estado) {
    this->estado = estado;
}

int Carta::getNumero() {
    return numero;
}

Palo Carta::getPalo() {
    return palo;
}

char Carta::getColor() {
    return color;
}

bool Carta::getEstado() {
    return estado;
}

void Carta::imprimir() {

    if (numero < 70 ) {
        if(!estado){
            int numero1 = numero - 47;
            std::cout<< numero1 << " " << palo << " " << color;
        } else {
            std::cout << "#####" << color;
        }
    } else {
        if(!estado){
            std::cout << numero << " " << palo << " " << color;
        } else {
            std::cout << "####" << color;
        }
    }
}