// Programa principal para jugar Blackjack

#include "Controlador.h"
#include <iostream>

int main() {
    std::cout << "Bienvenido al juego de Blackjack!" << std::endl;
    int numJugadores;
    std::cout << "Ingrese el número de jugadores (1-4): ";
    std::cin >> numJugadores;
    if (numJugadores < 1 || numJugadores > 4) numJugadores = 1;

    // Crear el controlador del juego
    Controlador juego(numJugadores);
    juego.jugarPartida();

    return 0;
}
