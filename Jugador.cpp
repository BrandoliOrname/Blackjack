/*
Implementación de Jugador.h
*/
#include "Jugador.h"
#include <iostream>

using namespace std;

// Constructor: inicializa la apuesta en 0
Jugador::Jugador() : apuesta(0) {}

// solicita una carta al mazo y la añade a la mano del jugador
void Jugador::pedirCarta(Mazo* mazo) {
    Carta* nuevaCarta = mazo->repartir();
    if (nuevaCarta) {
        mano.agregarCarta(nuevaCarta);
        cout << "Recibes: " << nuevaCarta->obtenerNombre() << endl;
    }
}
// Muestra las cartas en la mano del jugador
void Jugador::mostrarMano() const {
    cout << "Tu mano: ";
    mano.mostrarMano();
}
// Devuelve el valor total de la mano del jugador
int Jugador::obtenerValorMano() const {
    return mano.calcularValor();
}
// coloca una apuesta para el jugador
void Jugador::apostar(int cantidad) {
    apuesta = cantidad;
}
// Devuelve la cantidad apostada por el jugador
int Jugador::obtenerApuesta() const {
    return apuesta;
}

void Jugador::reiniciarMano() {
    mano = Mano(); // crear nueva mano vacia
}
