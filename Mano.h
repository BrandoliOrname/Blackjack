// Archivo de definición de la clase Mano
// Representa la mano de cartas de un jugador o crupier

#ifndef MANO_H
#define MANO_H

#include "Carta.h"

/**
 * @class Mano
 * @brief Representa una mano de cartas (jugador o crupier).
 */
class Mano {
protected:
    Carta* cartas[12]; // Máximo 12 cartas en una mano
    int cantidad;      // Número de cartas en la mano

public:
    /**
     * @brief Constructor de la mano. Inicializa la mano vacía.
     */
    Mano();

    /**
     * @brief Añade una carta a la mano.
     * @param carta Puntero a la carta a añadir.
     */
    void agregarCarta(Carta* carta);

    /**
     * @brief Calcula el valor total de la mano según las reglas del Blackjack.
     * @return Valor total de la mano.
     */
    virtual int calcularValor() const;

    /**
     * @brief Muestra las cartas de la mano.
     */
    virtual void mostrarMano() const;

    /**
     * @brief Cuenta el número de cartas en la mano.
     * @return Número de cartas.
     */
    int contarCartas() const;

    /**
     * @brief Verifica si la mano es Blackjack.
     * @return Verdadero si tiene Blackjack.
     */
    bool esBlackjack() const;
};

#endif // MANO_H
