#include "CCasilla.hpp"
#include "Ctesconf.hpp"

CCasilla::CCasilla()
{
}
CCasilla::CCasilla(int val, std::string tipo)
{
    this->numero = val;
    this->tipo = tipo;
}

int CCasilla::getNumeroCasilla()
{
    return this->numero;
}

std::string CCasilla::getTipo()
{
    return this->tipo;
}

int CCasilla::getSiguienteCasilla()
{
    int casilla_final;

    casilla_final = this->numero + this->premio_castigo;

    return casilla_final < MAX_CASILLAS ? casilla_final : MAX_CASILLAS;
}

void CCasilla::print()
{
    std::cout << this-> numero << " " << this->tipo << " " << this->premio_castigo << "\n";
}