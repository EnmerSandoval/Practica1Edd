//
// Created by laptop on 8/03/2024.
//

#ifndef PRACTICA1EDD_CARTA_H
#define PRACTICA1EDD_CARTA_H

enum Palo {Corazones, Diamantes, Treboles, Picas};

class Carta {
public:
    int numero;
    Palo palo;
    char color;
    bool estado;

    Carta(int numero, Palo palo, char color, bool estado);

    int getNumero();
    Palo getPalo();
    char getColor();
    bool getEstado();

    void setNumero(int numero);
    void setPalo(Palo palo);
    void setColor(char color);
    void setEstado(bool estado);
    void imprimir();
};


#endif //PRACTICA1EDD_CARTA_H
