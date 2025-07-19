// Archivo de definición de la clase Jugador
// Representa un jugador genérico de Blackjack

#ifndef JUGADOR_H
#define JUGADOR_H

#include "Mano.h"

/**
 * @class Jugador
 * @brief Clase base para jugador.
 */
class Jugador {
protected:
    Mano mano; // Mano del jugador
    int apuesta; // Cantidad apostada

public:
    /**
     * @brief Constructor del jugador.
     */
    Jugador();

    /**
     * @brief Solicita una carta al mazo.
     * @param mazo Puntero al mazo para repartir carta.
     */
    virtual void pedirCarta(Mazo* mazo);

    /**
     * @brief Muestra la mano del jugador.
     */
    virtual void mostrarMano() const;

    /**
     * @brief Calcula el valor de la mano del jugador.
     * @return Valor total.
     */
    virtual int obtenerValorMano() const;

    /**
     * @brief Coloca una apuesta.
     * @param cantidad Cantidad apostada.
     */
    void apostar(int cantidad);

    /**
     * @brief Obtiene la cantidad apostada.
     * @return Cantidad apostada.
     */
    int obtenerApuesta() const;

    /**
     * @brief Reinicia la mano para nueva ronda.
     */
    void reiniciarMano();
};

#endif // JUGADOR_H
