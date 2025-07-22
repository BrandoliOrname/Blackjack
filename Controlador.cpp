/*
Implementación de la clase Controlador.H
*/
#include "Controlador.h"
#include <iostream>
using namespace std;

//Constructor: inicializa el mazo y los jugadores
Controlador::Controlador(int n) : numJugadores(n) {
    for (int i = 0; i < numJugadores; i++) {
        jugadores[i] = new Jugador();
    }
}

// Inicia una nueva partida de Blackjack
void Controlador::jugarPartida() {
    cout << "\n--- NUEVA PARTIDA ---" << endl;
    mazo.mezclar();

    // Limpiar manos anteriores
    for (int i = 0; i < numJugadores; i++) {
        jugadores[i]->reiniciarMano();
    }
    crupier.reiniciarMano();

    // Repartir cartas iniciales
    cout << "Repartiendo cartas..." << endl;
    for (int i = 0; i < numJugadores; i++) {
        jugadores[i]->pedirCarta(&mazo);
        jugadores[i]->pedirCarta(&mazo);
    }
    crupier.pedirCarta(&mazo);
    crupier.pedirCarta(&mazo);

    // Mostrar situación inicial
    for (int i = 0; i < numJugadores; i++) {
        cout << "\nJugador " << (i+1) << ":" << endl;
        jugadores[i]->mostrarMano();
    }
    cout << endl;
    crupier.mostrarCartaVisible();

    // Turno de cada jugador
    for (int i = 0; i < numJugadores; i++) {
        cout << "\n--- Turno Jugador " << (i+1) << " ---" << endl;
        while (jugadores[i]->obtenerValorMano() < 21) {
            cout << "¿Quieres pedir otra carta? (s/n): ";
            char respuesta;
            cin >> respuesta;

            if (respuesta == 's' || respuesta == 'S') {
                jugadores[i]->pedirCarta(&mazo);
                jugadores[i]->mostrarMano();

                if (jugadores[i]->obtenerValorMano() > 21) {
                    cout << "¡Te pasaste de 21!" << endl;
                    break;
                }
            } else {
                cout << "Te plantas con " << jugadores[i]->obtenerValorMano() << endl;
                break;
            }
        }
    }

    // Turno del crupier
    cout << "\n--- Turno del Crupier ---" << endl;
    crupier.jugarTurno(&mazo);
    crupier.mostrarMano();

    // Ver quien ganó
    cout << "\n--- RESULTADOS ---" << endl;
    determinarGanador();
}

void Controlador::determinarGanador() {
    int puntajeCrupier = crupier.obtenerValorMano();
    bool crupierBlackjack = crupier.getMano().esBlackjack();

    for (int i = 0; i < numJugadores; i++) {
        int puntajeJugador = jugadores[i]->obtenerValorMano();
        bool jugadorBlackjack = jugadores[i]->getMano().esBlackjack();

        cout << "Jugador " << (i+1) << " (" << puntajeJugador << "): ";

        if (puntajeJugador > 21) {
            cout << "PIERDE - Se pasó de 21" << endl;
        }
        else if (puntajeCrupier > 21) {
            cout << "GANA - Crupier se pasó" << endl;
        }
        else if (jugadorBlackjack && !crupierBlackjack) {
            cout << "GANA CON BLACKJACK!" << endl;
        }
        else if (puntajeJugador > puntajeCrupier) {
            cout << "GANA - Más cerca de 21" << endl;
        }
        else if (puntajeJugador == puntajeCrupier) {
            cout << "EMPATE" << endl;
        }
        else {
            cout << "PIERDE - Crupier ganó" << endl;
        }
    }
}
