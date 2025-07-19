// Archivo de definición de la clase Crupier
// Hereda de Jugador pero tiene lógica especial para repartir y mostrar cartas

#ifndef CRUPIER_H
#define CRUPIER_H

#include "Jugador.h"

/**
 * @class Crupier
 * @brief Clase que representa el crupier, hereda de Jugador.
 */
class Crupier : public Jugador {
public:
    /**
     * @brief Constructor del crupier.
     */
    Crupier();

    /**
     * @brief El crupier muestra solo una carta al inicio.
     */
    void mostrarCartaVisible() const;

    /**
     * @brief Lógica especial para tomar cartas según reglas del crupier.
     * El crupier toma cartas hasta tener al menos 17 puntos.
     * @param mazo Puntero al mazo.
     */
    void jugarTurno(Mazo* mazo);

    /**
     * @brief Muestra la mano completa del crupier.
     */
    void mostrarMano() const override;
};

#endif // CRUPIER_H
