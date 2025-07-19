// Implementación de la clase Jugador

#include "Jugador.h"
#include <iostream>

// Constructor: inicializa la mano y apuesta
Jugador::Jugador() : apuesta(0) {}

// Solicita una carta al mazo y la añade a su mano
void Jugador::pedirCarta(Mazo* mazo) {
    Carta* carta = mazo->repartir();
    if (carta) {
        mano.agregarCarta(carta);
        std::cout << "El jugador recibe la carta: " << carta->obtenerNombre() << std::endl;
    }
}

// Muestra la mano del jugador
void Jugador::mostrarMano() const {
    std::cout << "Mano del jugador: ";
    mano.mostrarMano();
}

// Devuelve el valor de la mano
int Jugador::obtenerValorMano() const {
    return mano.calcularValor();
}

// Coloca una apuesta
void Jugador::apostar(int cantidad) {
    apuesta = cantidad;
}

// Devuelve la cantidad apostada
int Jugador::obtenerApuesta() const {
    return apuesta;
}

// Reinicia la mano del jugador
void Jugador::reiniciarMano() {
    mano = Mano();
}
