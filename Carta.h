// Archivo de definición de la clase Carta
// Representa una carta individual del juego de Blackjack

#ifndef CARTA_H
#define CARTA_H

/**
 * @class Carta
 * @brief Representa una carta con valor nominal y nombre.
 */
class Carta {
private:
    int valor; // Valor nominal de la carta (1-11)
    char nombre; // Nombre de la carta (A, 2-9, T, J, Q, K)

public:
    /**
     * @brief Constructor de la carta.
     * @param nombre Nombre de la carta ('A', '2'-'9', 'T', 'J', 'Q', 'K').
     */
    Carta(char nombre);

    /**
     * @brief Obtiene el valor nominal de la carta.
     * @return Valor de la carta (1-11).
     */
    int obtenerValor() const;

    /**
     * @brief Obtiene el nombre de la carta.
     * @return Nombre de la carta.
     */
    char obtenerNombre() const;
};

#endif // CARTA_H
#endif // CARTA_H
