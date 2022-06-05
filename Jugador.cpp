#include <iostream>
#include "Jugador.hpp"

Jugador::Jugador()
{
    this->numero=1;
    this->casilla_actual=1;
}

Jugador::Jugador(int n)
{
    this->numero = n;
    this->casilla_actual=1;
}

int Jugador::getCasilla_actual()
{
    return this->casilla_actual;
}

void Jugador::setCasilla_actual(int n)
{
    this->casilla_actual=n;
}

void Jugador::print() {
    std::cout << "No: " << this->numero << "-Casilla: " << this->casilla_actual << "\n";
}