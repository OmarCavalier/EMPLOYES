#pragma once
#include <iostream>


using namespace std;

class Employe
{

private:
	string nom;
	const int matricule;
	static int count;
	int inds_salaire;
	static float augmentation;

public:
	Employe(string n,int ind_sal);
	virtual void afficher() const;
	virtual float cal_sal() const;
};
