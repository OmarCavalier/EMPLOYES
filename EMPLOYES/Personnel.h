#pragma once
#include <vector>
#include "Employe.h"

class Personnel
{

private:
	vector<Employe*> table;

public:
	Personnel();
	void all(Employe *E);
	float tot_sal();
	~Personnel();

};

