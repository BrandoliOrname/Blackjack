// Archivo de definición de la clase Mazo
// Representa el mazo de cartas del juego de Blackjack

#ifndef MAZO_H
#define MAZO_H

#include "Carta.h"

/**
 * @class Mazo
 * @brief Representa un mazo con cartas para repartir.
 */
class Mazo {
private:
    Carta* cartas[52]; // Arreglo de punteros a cartas
    int cartasRestantes; // Número de cartas que quedan en el mazo

public:
    /**
     * @brief Constructor del mazo. Inicializa todas las cartas.
     */
    Mazo();

    /**
     * @brief Reparte la siguiente carta del mazo.
     * @return Puntero a la carta repartida.
     */
    Carta* repartir();

    /**
     * @brief Informa cuántas cartas quedan en el mazo.
     * @return Número de cartas restantes.
     */
    int cartasDisponibles() const;

    /**
     * @brief Mezcla las cartas del mazo.
     */
    void mezclar();
};

#endif // MAZO_H
