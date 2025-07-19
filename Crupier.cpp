// Implementación de la clase Crupier

#include "Crupier.h"
#include <iostream>

// Constructor: llama al constructor base
Crupier::Crupier() : Jugador() {}

// Muestra solo la primera carta del crupier
void Crupier::mostrarCartaVisible() const {
    std::cout << "Carta visible del crupier: ";
    if (mano.contarCartas() > 0) {
        std::cout << mano.calcularValor() << " (solo la primera carta)" << std::endl;
    }
}

// El crupier toma cartas hasta llegar a 17 o más puntos
void Crupier::jugarTurno(Mazo* mazo) {
    while (mano.calcularValor() < 17) {
        pedirCarta(mazo);
    }
}

// Muestra la mano completa del crupier
void Crupier::mostrarMano() const {
    std::cout << "Mano del crupier: ";
    mano.mostrarMano();
}
