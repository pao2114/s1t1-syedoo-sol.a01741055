#include "CDado.hpp"

int CDado::cara = 0;

CDado::CDado()
{
    this->switchrandom=true;
    this->cara=1;
}

// Crea un dado aleatorio (sr=true) / no aleatorio (sr=false)
CDado::CDado(bool sr)
{
    this->switchrandom=sr;
    if (sr) {
        srand(time(0));
    }
}

// Devuelve el valor de la cara del dado : aleatorio / no aleatorio -----
int CDado::getValorDado()
{
    if (switchrandom) {
        return  (rand() % 6) + 1;
    }
    else {
        CDado::cara = (CDado::cara % 6) + 1;
        return CDado::cara;
    }
}