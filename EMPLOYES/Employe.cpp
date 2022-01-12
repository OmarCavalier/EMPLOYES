#include "Employe.h"
#include <iostream>

using namespace std;

int Employe::count = 0;
float Employe::augmentation = 7;


Employe::Employe(string n, int ind_sal):matricule(++Employe::count)
{
	this->nom = n;
	this->inds_salaire = ind_sal;
}

void Employe::afficher() const
{

	cout << "le matricule : " << this->matricule << endl;
	cout << "le mon : " << this->nom << endl;
	cout << "l'augmentation : " << Employe::augmentation << endl;
	cout << "l'indece de salaire : " << this->inds_salaire << endl;
}

float Employe::cal_sal() const
{
	return (this->inds_salaire * Employe::augmentation);
}
