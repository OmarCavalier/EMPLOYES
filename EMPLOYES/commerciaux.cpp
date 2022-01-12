#include "Commerciaux.h"

Commerciaux::Commerciaux(string n, int inds_sal, int nv)
    :Employe(n,inds_sal)
{
    this->nombre_vente = nv;
}

void Commerciaux::update(int m)
{
    this->nombre_vente = m;
}

float Commerciaux::cal_sal() const
{
    return (Employe::cal_sal() /this->nombre_vente);
}
