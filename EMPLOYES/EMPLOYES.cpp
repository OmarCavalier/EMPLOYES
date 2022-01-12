#include <iostream>
#include "Employe.h"
#include "Responsable.h"
#include "Commerciaux.h"
#include "Personnel.h"



int main()
{
	Personnel* p = new Personnel();
	Employe *e1 = new Employe("e1", 21);
	Employe *e3 = new Employe("e2", 22);
	Employe *e4 = new Employe("e3", 23);
	Responsable* r1 = new Responsable("r1", 24, "ceo");
	Responsable* r2 = new Responsable("r2", 25, "chef_equipe");
	Responsable* r3 = new Responsable("r3", 26, "chef_site");
	Commerciaux* c1 = new Commerciaux("C1", 27, 2);
	Commerciaux* c2 = new Commerciaux("C2", 28, 2);
	Commerciaux* c3 = new Commerciaux("C3", 29, 2);

	

	p->all(e1);
	p->all(r1);
	p->all(c1);


	p->all(e3);
	p->all(r2);
	p->all(c2);


	p->all(e4);
	p->all(c3);


	r2->ajouter_subordonee(r3);
	r3->ajouter_subordonee(e1);
	r1->ajouter_subordonee(r2);
	r1->ajouter_subordonee(e3);
	r1->ajouter_subordonee(e4);
	r1->ajouter_subordonee(c1);
	r1->ajouter_subordonee(c2);
	r1->ajouter_subordonee(c3);

	r1->afficher();


	cout << "totale de les salaires : " << p->tot_sal() << endl;

}
