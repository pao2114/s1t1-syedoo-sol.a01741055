#include "CasillaEscalera.hpp"
#include "Ctesconf.hpp"

CasillaEscalera::CasillaEscalera()
{
    this->premio_castigo = ESC_PREMIO_CASTIGO;
    this->tipo = "L";
}

CasillaEscalera::CasillaEscalera(int numero):CCasilla{numero, "L"}
{
    this->premio_castigo = ESC_PREMIO_CASTIGO;
}