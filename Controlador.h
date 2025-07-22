/*
Controlador de juego.h maneja toda la lógica principal
*/

#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "Jugador.h"
#include "Crupier.h"
#include "Mazo.h"

// Clase principal que controla todo el flujo del juego
class Controlador {
private:
    Mazo mazo;               // el mazo de cartas
    Jugador* jugadores[4];   // hasta 4 jugadores
    int numJugadores;        // cantidad actual de jugadores
    Crupier crupier;         // el crupier

public:
    // Constructor que inicializa el juego
    Controlador(int n);

    // Ejecuta una partida completa
    void jugarPartida();

    // Verifica quien ganó y muestra resultados
    void determinarGanador();
};

#endif // CONTROLADOR_H
