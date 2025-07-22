/*
    Implementación de la clase Crupier.h
*/
#include "Crupier.h"
#include <iostream>
using namespace std;

// Constructor: inicializa el crupier como un jugador especial
Crupier::Crupier() : Jugador() {}

// Muestra solo la carta visible del crupier
void Crupier::mostrarCartaVisible() const {
    cout << "Carta visible del crupier: ";
    if (mano.contarCartas() > 0) {
        cout << "Una carta (valor oculto)" << endl;
    }
}

// El crupier juega su turno, pidiendo cartas hasta alcanzar 17 o más
void Crupier::jugarTurno(Mazo* mazo) {
    cout << "Turno del crupier..." << endl;
    while (mano.calcularValor() < 17) {
        cout << "Crupier pide carta" << endl;
        pedirCarta(mazo);
    }
}

// Muestra todas las cartas en la mano del crupier
void Crupier::mostrarMano() const {
    cout << "Crupier: ";
    mano.mostrarMano();
}
