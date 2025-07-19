// Implementación de la clase Mano

#include "Mano.h"
#include <iostream>

// Constructor: inicializa la mano vacía
Mano::Mano() : cantidad(0) {}

// Añade una carta a la mano
void Mano::agregarCarta(Carta* carta) {
    if (cantidad < 12) {
        cartas[cantidad++] = carta;
    }
}

// Calcula el valor total de la mano, considerando As como 1 u 11
int Mano::calcularValor() const {
    int total = 0;
    int ases = 0;
    // Suma los valores de cada carta
    for (int i = 0; i < cantidad; i++) {
        int v = cartas[i]->obtenerValor();
        total += v;
        if (cartas[i]->obtenerNombre() == 'A') ases++;
    }
    // Si hay Ases y el total supera 21, los Ases cuentan como 1 hasta que no haya exceso
    while (total > 21 && ases > 0) {
        total -= 10; // Convertir un As de 11 a 1
        ases--;
    }
    return total;
}

// Muestra las cartas de la mano
void Mano::mostrarMano() const {
    std::cout << "Cartas: ";
    for (int i = 0; i < cantidad; i++) {
        std::cout << cartas[i]->obtenerNombre() << " ";
    }
    std::cout << " (Valor: " << calcularValor() << ")" << std::endl;
}

// Devuelve la cantidad de cartas en la mano
int Mano::contarCartas() const {
    return cantidad;
}

// Verifica si la mano tiene Blackjack (dos cartas suman 21)
bool Mano::esBlackjack() const {
    return (cantidad == 2 && calcularValor() == 21);
}
