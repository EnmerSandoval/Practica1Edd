cmake_minimum_required(VERSION 3.27)
project(Practica1EDD)

set(CMAKE_CXX_STANDARD 17)

add_executable(Practica1EDD main.cpp
        bases/ColasPrincipales.cpp
        bases/ColasPrincipales.h
        bases/Carta.cpp
        bases/Carta.h
        bases/Pila.cpp
        bases/Pila.h
        bases/Nodo.cpp
        bases/Nodo.h
        bases/ListaDoble.cpp
        bases/ListaDoble.h
        bases/Juego.cpp
        bases/Juego.h
)
