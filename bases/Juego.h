//
// Created by laptop on 8/03/2024.
//

#ifndef PRACTICA1EDD_JUEGO_H
#define PRACTICA1EDD_JUEGO_H

#include "ListaDoble.h"
#include "ColasPrincipales.h"
#include <vector>
#include <algorithm>
#include <random>


class Juego {
    ListaDoble* listaDePilas;
    std::vector<Carta*> baraja;

public:
    ColasPrincipales colaDescartadas1;
    ColasPrincipales colaDescartadas2;
    ListaDoble pilasDeJuego;
    ListaDoble pilasDeFundacion;

    Juego();
    void iniciar();
    void inicializarCartas();
    void mezclarCartas();
    void distribuirCartas();
    bool esMovimientoValido(Carta* carta, Carta* carta1);
    void distribuirCartasEnPilasDeJuego();
    void barajearCartas();
    bool validarMovimiento(Pila* origen, Pila* destino);
    void moverCarta(Pila* origen, Pila* destino);
    bool verificarGanador();

    void voltearCarta(Pila &pila);
};


#endif //PRACTICA1EDD_JUEGO_H
