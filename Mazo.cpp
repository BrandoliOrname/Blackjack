/*
Implementación del la clase Mazo.h 
*/
    
#include "Mazo.h"
#include <cstdlib> // Funciones rand() y srand()
#include <ctime>   // Función time() para semilla aleatoria

// Constructor: crea un mazo estándar de 52 cartas y lo mezcla

Mazo::Mazo() : cartasRestantes(52) {
    int index = 0;
    char tipos[] = {'A','2','3','4','5','6','7','8','9','J','Q','K'};

    // Crear 4 cartas de cada tipo (simula los 4 palos)
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 4; j++) {
            cartas[index] = new Carta(tipos[i]);
            index++;
        }
    }
    mezclar();
}

// Devuelve la siguiente carta del mazo, o nullptr si ya no quedan cartas
Carta* Mazo::repartir() {
    if (cartasRestantes > 0) {
        cartasRestantes--;
        return cartas[cartasRestantes];
    }
    return nullptr;
}
// Devuelve las cartas que quedan en el mazo
int Mazo::cartasDisponibles() const {
    return cartasRestantes;
}

void Mazo::mezclar() {
    srand(time(0));
    // algoritmo simple para mezclar el mazo (Fisher-Yates)
    for (int i = cartasRestantes - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Carta* temp = cartas[i];
        cartas[i] = cartas[j];
        cartas[j] = temp;
    }
}
