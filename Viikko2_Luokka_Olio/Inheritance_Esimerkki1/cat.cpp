#include "cat.h"

string Cat::getOwner() const
{
    return owner;
}

void Cat::setOwner(const string &newOwner)
{
    owner = newOwner;
}

void Cat::printData() // yliajettu metodi tulostukselle
{
    cout << "*************************" << endl;
    cout << "Kissan tiedot" << endl;
    // saadaan pääluokan muuttujat this-> osoittimella
    cout << "paino: " << this->getWeight() << endl;
    cout << "väri: " << this->getColor() << endl;
    cout << "Omistaja: " << owner << endl;
    cout << "*************************" << endl;
}

Cat::Cat()
{
    this -> Test(); // luokassa pääsee käyttämään protected metodia
    cout << "Cat luokan olio luotu" << endl;
}

Cat::~Cat()
{
    cout << "Cat luokan olio tuhottu" << endl;
}

Cat::Cat(int w, string c, string o) : Animal(w,c)
{
    this -> setWeight(w); // kantaluokan funktioihin this-> avulla
    owner = o;
    this -> setColor(c);
}
