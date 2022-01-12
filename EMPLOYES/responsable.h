#pragma once
#include "Employe.h"
#include <iostream>

using namespace std;

#include <vector>


class Responsable : public Employe
{

private:
	string titre;
	vector<Employe*> subor;

public:
	Responsable(string n,int inds_sal,string titre );
	void afficher()const override;
	void ajouter_subordonee(Employe* S);
	~Responsable();


};
