#include "CasillaSerpiente.hpp"
#include "CCasilla.hpp"
#include "Ctesconf.hpp"

CasillaSerpiente::CasillaSerpiente()
{
    this->numero = 1 - (SER_PREMIO_CASTIGO);
    this->premio_castigo = SER_PREMIO_CASTIGO;
    this->tipo = "S";
}

CasillaSerpiente::CasillaSerpiente(int numero):CCasilla{numero, "S"}
{
    this->premio_castigo = SER_PREMIO_CASTIGO;
}