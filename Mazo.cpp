/*
 Implementación de la clase Mano.h
*/
#include "Mano.h"
#include <iostream>

using namespace std;

//Constructor: inicia la mano con 0 cartas
Mano::Mano() : cantidad(0) {}

//Añade una carta a la mano
void Mano::agregarCarta(Carta* carta) {
    if (cantidad < 12) {
        cartas[cantidad] = carta;
        cantidad++;
    }
}

//Calcula el valor total de la mano
int Mano::calcularValor() const {
    int total = 0;
    int ases = 0;
    
// Sumar valores de las cartas
    for (int i = 0; i < cantidad; i++) {
        int valor = cartas[i]->obtenerValor();
        total += valor;
        if (cartas[i]->obtenerNombre() == 'A') {
            ases++;
        }
    }

    // Ajustar ases si nos pasamos de 21
    while (total > 21 && ases > 0) {
        total -= 10; // cambiar As de 11 a 1
        ases--;
    }

    return total;
}
// Muestra las cartas en la mano
void Mano::mostrarMano() const {
    cout << "Cartas: ";
    for (int i = 0; i < cantidad; i++) {
        cout << cartas[i]->obtenerNombre() << " ";
    }
    cout << "(Total: " << calcularValor() << ")" << endl;
}
// Muestra la cantidad de cartas en la mano
int Mano::contarCartas() const {
    return cantidad;
}
// Verifica si la mano es Blackjack (2 cartas con valor 21)
bool Mano::esBlackjack() const {
    return (cantidad == 2 && calcularValor() == 21);
}
