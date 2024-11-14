#include "animal.h"

Animal::Animal() {}

Animal::~Animal()
{
    cout << "Eläin luokka tuhottu " << endl;
}

void Animal::callOut()
{
    cout << "Eläin ääntelee" << endl;
}
