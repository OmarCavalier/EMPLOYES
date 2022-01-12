#pragma once
#include "Employe.h"
#include <iostream>
using namespace std;

class Commerciaux :public Employe
{

private:
	int nombre_vente;

public:
	Commerciaux(string n,int inds_sal,int nv);
	void update(int m);
    float cal_sal()const override;

};
