/*
Clase Crupier.h - jugador especial que maneja el juego
*/

#ifndef CRUPIER_H
#define CRUPIER_H

#include "Jugador.h"
#include "Mazo.h"

// El crupier hereda de jugador pero tiene reglas especiales
class Crupier : public Jugador {
public:
    // constructor
    Crupier();

    // Al inicio solo muestra una carta
    void mostrarCartaVisible() const;

    // Juega automaticamente hasta llegar a 17 o mas
    void jugarTurno(Mazo* mazo);

    // muestra todas sus cartas
    void mostrarMano() const override;
};

#endif // CRUPIER_H
