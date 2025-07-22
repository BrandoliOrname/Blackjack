/*
Clase Mano.h - conjunto de cartas de cada jugador
*/
#ifndef MANO_H
#define MANO_H

#include "Carta.h"

// Representa las cartas que tiene un jugador o el crupier
class Mano {
protected:
    Carta* cartas[12];  // maximo 12 cartas por mano
    int cantidad;       // Las cartas que tiene actualmente

public:
    // Constructor: inizializa la mano vacia
    Mano();

    // Agrega una carta a la mano
    void agregarCarta(Carta* carta);

    // Calcula el puntaje total de la mano
    virtual int calcularValor() const;

    // Muestra todas las cartas
    virtual void mostrarMano() const;

    // Cuenta cuantas cartas hay en la mano
    int contarCartas() const;

    // Verifica si es blackjack (21 con 2 cartas)
    bool esBlackjack() const;
};

#endif // MANO_H
