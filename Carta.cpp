/*
Implementación de la clase Carta.h
*/
#include "Carta.h"

// Constructor: inicializa el valor y el nombre de la carta
Carta::Carta(char nombre) : nombre(nombre) {
    if (nombre == 'A') {
        valor = 11; // As vale 11 por defecto
    }
    else if (nombre == 'J' || nombre == 'Q' || nombre == 'K') {
        valor = 10; // Figuras valen 10
    }
    else {
        valor = nombre - '0'; // Convierte char a int
    }
}
//Devuelve el valor de la carta
int Carta::obtenerValor() const {
    return valor;
}
//Devuelve el noombre de la carta 
char Carta::obtenerNombre() const {
    return nombre;
}

