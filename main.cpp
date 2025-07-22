/*
Proyecto de Blackjack - POO
Programa principal del juego
*/

#include "Controlador.h"
#include <iostream>
using namespace std;

int main() {
    cout << "=== BLACKJACK ===" << endl;
    int jugadores;
    cout << "¿Cuantos jugadores van a jugar? (1-4): ";
    cin >> jugadores;

    if(jugadores < 1 || jugadores > 4) {
        cout << "Numero invalido, jugara solo 1 jugador" << endl;
        jugadores = 1;
    }
    // Crea el controlador para comenzar el juego
    Controlador game(jugadores);
    game.jugarPartida();

    return 0;
}
