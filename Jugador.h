/*
Clase Jugador.h - representa a cada jugador 
*/

#ifndef JUGADOR_H
#define JUGADOR_H

#include "Mano.h"
#include "Mazo.h"

// Clase base para los jugadores
class Jugador {
protected:
    Mano mano;      // cartas del jugador
    int apuesta;    // Cantidad de dinero apostado

public:
    // Constructor
    Jugador();

    // Pide una carta del mazo
    virtual void pedirCarta(Mazo* mazo);

    // Muestra sus cartas
    virtual void mostrarMano() const;

    // Obtiene el valor de su mano
    virtual int obtenerValorMano() const;

    // Hace una apuesta
    void apostar(int cantidad);

    // Devuelve cuanto apostó
    int obtenerApuesta() const;

    // Reinicia para nueva partida
    void reiniciarMano();

    // Acceso a la mano (para verificar blackjack)
    const Mano& getMano() const {
        return mano;
    }
};

#endif // JUGADOR_H
