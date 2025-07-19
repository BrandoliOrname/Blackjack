// Implementación de la clase Mazo

#include "Mazo.h"
#include <cstdlib> // Para rand y srand
#include <ctime>   // Para time (semilla de aleatoriedad)

// Constructor: inicializa el mazo con 52 cartas estándar (sin comodines, sin palo)
Mazo::Mazo() : cartasRestantes(52) {
    int pos = 0;
    // Para cada nombre de carta, crear las cartas (4 de cada tipo)
    char nombres[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 4; j++) {
            cartas[pos++] = new Carta(nombres[i]);
        }
    }
    mezclar();
}

// Reparte la siguiente carta del mazo y la elimina del arreglo
Carta* Mazo::repartir() {
    if (cartasRestantes > 0) {
        return cartas[--cartasRestantes];
    }
    return nullptr; // Si no quedan cartas, retorna nulo
}

// Devuelve el número de cartas disponibles
int Mazo::cartasDisponibles() const {
    return cartasRestantes;
}

// Mezcla el mazo usando el algoritmo de Fisher-Yates
void Mazo::mezclar() {
    srand(time(0));
    for (int i = cartasRestantes - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Carta* temp = cartas[i];
        cartas[i] = cartas[j];
        cartas[j] = temp;
    }
}
