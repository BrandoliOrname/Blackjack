/*
Clase Mazo.h - maneja todas las cartas del juego
*/
    
#ifndef MAZO_H
#define MAZO_H

#include "Carta.h"

// Clase que representa el mazo completo de cartas
class Mazo {
private:
    Carta* cartas[52];    // arreglo con todas las cartas
    int cartasRestantes;  // cuantas cartas quedan por repartir

public:
    // Constructor - crea el mazo completo
    Mazo();

    // Saca una carta del mazo
    Carta* repartir();

    // Dice cuantas cartas quedan
    int cartasDisponibles() const;

    // Revuelve las cartas
    void mezclar();
};

#endif // MAZO_H
