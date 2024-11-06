#include "animal.h"

Animal::Animal()
{
    cout << "Animal olio luotu" << endl;
}

Animal::Animal(int w, string c)
{
    weight = w;
    color = c;
}

Animal::~Animal()
{
    cout << "Animal olio tuhottu" << endl;
}



int Animal::getWeight() const
{
    return weight;
}

void Animal::setWeight(int newWeight)
{
    weight = newWeight;
}

string Animal::getColor() const
{
    return color;
}

void Animal::setColor(const string &newColor)
{
    color = newColor;
}

void Animal::printData()
{
    cout << "*************************" << endl;
    cout << "Eläimen tiedot" << endl;
    cout << "paino: " << weight << endl;
    cout << "väri: " << color << endl;
    cout << "*************************" << endl;
}

void Animal::Test()
{
}
