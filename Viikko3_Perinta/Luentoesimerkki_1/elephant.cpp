#include "elephant.h"

Elephant::Elephant()
{
    cout << "Elephant luokan olio luotu" << endl;
}

Elephant::~Elephant()
{
    cout << "elephant luokan olio tuhottu" << endl;
}

string Elephant::getZooName() const
{
    return zooName;
}

void Elephant::setZooName(const string &newZooName)
{
    zooName = newZooName;
}
