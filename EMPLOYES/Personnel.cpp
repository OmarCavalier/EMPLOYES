#include "Personnel.h"

Personnel::Personnel()
{
    this->table = vector<Employe*>();
}

void Personnel::all(Employe* E)
{
    this->table.push_back(E);
}

float Personnel::tot_sal()
{   

    float t=0;
    for (int i = 0; i < this->table.size(); i++){
        t =t+ this->table[i]->Employe::cal_sal();
    }


    return t;
}

Personnel::~Personnel()
{
    this->table.clear();
}
