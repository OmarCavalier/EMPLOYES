#include "Responsable.h"
#include <iostream>

using namespace std;

Responsable::Responsable(string n, int inds_sal, string titre)
	:Employe(n,inds_sal)
{
	this->subor = vector<Employe*>();
	this->titre = titre;
}

void Responsable::afficher() const
{
	cout << endl;
	cout << "le nom responsble est : " << this->titre << endl;
	
	this->Employe::afficher();
	cout << endl;
	for (int i = 0; i < this->subor.size(); i++)
	{
		this->subor[i]->Employe::afficher();
		cout << endl;
	}
}

void Responsable::ajouter_subordonee(Employe* S)
{
	this->subor.push_back(S);
}

Responsable::~Responsable()
{
	this->subor.clear();
}
