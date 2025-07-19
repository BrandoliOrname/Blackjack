// Pruebas unitarias para las clases del proyecto Blackjack

#include "Carta.h"
#include "Mazo.h"
#include "Mano.h"
#include <cassert>
#include <iostream>

void testCarta() {
    Carta c1('A');
    assert(c1.obtenerValor() == 11);
    assert(c1.obtenerNombre() == 'A');
    Carta c2('8');
    assert(c2.obtenerValor() == 8);
    assert(c2.obtenerNombre() == '8');
}

void testMano() {
    Mano m;
    m.agregarCarta(new Carta('A'));
    m.agregarCarta(new Carta('K'));
    assert(m.calcularValor() == 21);
    assert(m.esBlackjack() == true);
}

void testMazo() {
    Mazo mazo;
    assert(mazo.cartasDisponibles() == 52);
    mazo.repartir();
    assert(mazo.cartasDisponibles() == 51);
}

int main() {
    testCarta();
    testMano();
    testMazo();
    std::cout << "Todas las pruebas pasaron correctamente." << std::endl;
    return 0;
}
