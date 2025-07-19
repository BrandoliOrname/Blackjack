// Archivo de definición de la clase Controlador
// Controla el flujo del juego de Blackjack

#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "Jugador.h"
#include "Crupier.h"
#include "Mazo.h"

/**
 * @class Controlador
 * @brief Controla el flujo principal del juego.
 */
class Controlador {
private:
    Mazo mazo; // Mazo del juego
    Jugador* jugadores[4]; // Máximo 4 jugadores
    int numJugadores; // Número de jugadores en la partida
    Crupier crupier; // Crupier del juego

public:
    /**
     * @brief Constructor del controlador.
     * @param n Número de jugadores.
     */
    Controlador(int n);

    /**
     * @brief Inicia una partida de Blackjack.
     */
    void jugarPartida();

    /**
     * @brief Determina el ganador de la mano y muestra resultados.
     */
    void determinarGanador();
};

#endif // CONTROLADOR_H
