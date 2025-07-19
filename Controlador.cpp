// Implementación de la clase Controlador

#include "Controlador.h"
#include <iostream>

// Constructor: inicializa el mazo y los jugadores
Controlador::Controlador(int n) : numJugadores(n) {
    for (int i = 0; i < numJugadores; i++) {
        jugadores[i] = new Jugador();
    }
}

// Inicia una partida de Blackjack
void Controlador::jugarPartida() {
    mazo.mezclar();
    // Reiniciar manos
    for (int i = 0; i < numJugadores; i++) jugadores[i]->reiniciarMano();
    crupier.reiniciarMano();

    // Repartir dos cartas iniciales a cada jugador y al crupier
    for (int i = 0; i < numJugadores; i++) {
        jugadores[i]->pedirCarta(&mazo);
        jugadores[i]->pedirCarta(&mazo);
    }
    crupier.pedirCarta(&mazo);
    crupier.pedirCarta(&mazo);

    // Mostrar manos iniciales
    for (int i = 0; i < numJugadores; i++) jugadores[i]->mostrarMano();
    crupier.mostrarCartaVisible();

    // Turno de cada jugador
    for (int i = 0; i < numJugadores; i++) {
        while (jugadores[i]->obtenerValorMano() < 21) {
            std::cout << "Jugador " << i+1 << ", ¿quieres otra carta? (s/n): ";
            char resp;
            std::cin >> resp;
            if (resp == 's') {
                jugadores[i]->pedirCarta(&mazo);
                jugadores[i]->mostrarMano();
            } else break;
        }
    }

    // Turno del crupier
    crupier.jugarTurno(&mazo);
    crupier.mostrarMano();

    determinarGanador();
}

// Determina el ganador y muestra resultados
void Controlador::determinarGanador() {
    int valorCrupier = crupier.obtenerValorMano();
    bool blackjackCrupier = crupier.mano.esBlackjack();
    for (int i = 0; i < numJugadores; i++) {
        int valorJugador = jugadores[i]->obtenerValorMano();
        bool blackjackJugador = jugadores[i]->mano.esBlackjack();
        std::cout << "Jugador " << i+1 << ": ";
        if (valorJugador > 21) {
            std::cout << "Pierde (se pasó de 21)." << std::endl;
        } else if (valorCrupier > 21 || valorJugador > valorCrupier) {
            if (blackjackJugador && !blackjackCrupier)
                std::cout << "¡Gana con Blackjack! (3:2 de la apuesta)" << std::endl;
            else
                std::cout << "Gana (más cercano a 21)." << std::endl;
        } else if (valorJugador == valorCrupier && valorJugador >= 17) {
            std::cout << "Empate (recupera su apuesta)." << std::endl;
        } else {
            std::cout << "Pierde (crupier más cercano a 21)." << std::endl;
        }
    }
}
