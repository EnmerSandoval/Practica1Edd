//
// Created by laptop on 8/03/2024.
//

#include "Juego.h"
#include "ColasPrincipales.h"
#include <ctime>
#include <cstdlib>
#include <iostream>


Juego::Juego() : listaDePilas(new ListaDoble()) {
    inicializarCartas();
    mezclarCartas();
    distribuirCartas();
}

void Juego::inicializarCartas() {
    for (int numero = 1; numero <= 13; ++numero) {
        for (int palo = Corazones; palo <= Picas; ++palo) {
            Carta* nuevaCarta = new Carta(numero, static_cast<Palo>(palo), 'R', false); // Se asume que 'R' representa rojo
            baraja.push_back(nuevaCarta);
        }
    }
}
/*
void Juego::distribuirCartasEnPilasDeJuego() {
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j <= i; ++j) {
            Carta* carta = baraja.back();
            baraja.pop_back();
            pilasDeJuego[i].push(carta);
            if (j == i) {
                carta->setEstado(true);
            }
        }
    }
}*/

void Juego::barajearCartas() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::shuffle(baraja.begin(), baraja.end(), std::default_random_engine(std::time(nullptr)));
}

void Juego::mezclarCartas() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(baraja.begin(), baraja.end(), g);
}
/*
void Juego::moverCarta(int pilaOrigen, int pilaDestino) {
    if (!pilasDeJuego[pilaOrigen].estaVacia()) {
        Carta* carta = pilasDeJuego[pilaOrigen].top();
        if (pilasDeJuego[pilaDestino].estaVacia() || (esMovimientoValido(carta, pilasDeJuego[pilaDestino].top()))) {
            pilasDeJuego[pilaDestino].push(carta);
            pilasDeJuego[pilaOrigen].pop();
            // Voltear la carta superior de la pila de origen si estaba boca abajo
            if (!pilasDeJuego[pilaOrigen].estaVacia() && !pilasDeJuego[pilaOrigen].top()->getEstado()) {
                pilasDeJuego[pilaOrigen].top()->setEstado(true);
            }
        }
    }
} */

bool Juego::esMovimientoValido(Carta* cartaOrigen, Carta* cartaDestino) {
    if (cartaOrigen && cartaDestino) {
        return (cartaOrigen->getPalo() == cartaDestino->getPalo()) && (cartaOrigen->getNumero() == cartaDestino->getNumero() + 1);
    }
    return false;
}

void Juego::voltearCarta(Pila &pila) {
    if (!pila.estaVacia()) {
        pila.top()->setEstado(true);
    }
}

void Juego::iniciar() {
    distribuirCartasEnPilasDeJuego();

   // for (int i = 0; i < 7; ++i) {
     //   if (!pilasDeJuego[i].estaVacia()) {
       //     voltearCarta(pilasDeJuego[i]);
        //}
    //}

    std::cout << "¡Bienvenido al juego de solitario! ¡Que empiece la diversión!" << std::endl;

}