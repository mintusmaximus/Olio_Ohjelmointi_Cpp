#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << "Italialainen kokki luotu" << endl;
}

ItalianChef::ItalianChef(string s)
{
    cout << "Italialainen kokki " << s << " luotu" << endl;
    ItalianChef::name = s; // asetetaan italialaiselle kokille nimi konstruktorilla
    // sama näkyy myös "Chef" luokan dekonstruktorissa
}

ItalianChef::~ItalianChef()
{
    cout << "Italialainen kokki " << getName() << " tuhottu" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Italialainen kokki " << getName() << " tekee pastaa" << endl;
}


