#include "dog.h"

Dog::Dog() {}

Dog::~Dog()
{
    cout << "Koira luokka tuhottu" << endl;
}

void Dog::callOut()
{
    cout << "Koira haukkuu!" << endl;
}
