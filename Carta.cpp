// Implementación de la clase Carta

#include "Carta.h"

// Constructor: inicializa el nombre y asigna el valor según las reglas del Blackjack.
Carta::Carta(char nombre) : nombre(nombre) {
    // Si la carta es As, su valor es 11 inicialmente (puede ser 1, según la mano)
    if (nombre == 'A') valor = 11;
    // Si la carta es figura, su valor es 10
    else if (nombre == 'T' || nombre == 'J' || nombre == 'Q' || nombre == 'K') valor = 10;
    // Si la carta es número entre 2 y 9, su valor es el número
    else valor = nombre - '0';
}

// Devuelve el valor nominal de la carta
int Carta::obtenerValor() const {
    return valor;
}

// Devuelve el nombre de la carta
char Carta::obtenerNombre() const {
    return nombre;
}
