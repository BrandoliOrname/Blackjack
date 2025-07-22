/*
Clase Carta.h - Representa cada carta del mazo
*/

#ifndef CARTA_H
#define CARTA_H

// Clase que maneja las cartas individuales del juego
class Carta {
private:
    int valor;     // valor de la carta para el juego
    char nombre;   // letra que representa la carta

public:
    // Constructor que recibe el nombre de la carta
    Carta(char nombre);

    // Devuelve el valor de la carta
    int obtenerValor() const;

    // Devuelve el nombre de la carta
    char obtenerNombre() const;
};

#endif // CARTA_H
