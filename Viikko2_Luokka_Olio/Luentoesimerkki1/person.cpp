#include "person.h"

int Person::getAge() const
{
    return age;
}

void Person::setAge(int newAge)
{
    age = newAge;
}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &newName)
{
    name = newName;
}

void Person::printInfo()
{
    cout << "_________________" << endl;
    cout << "henkilön nimi " << name << endl;
    // Person::getName(); voi myös käyttää tätä
    cout << "henkilön ikä " << age << endl;
    cout << "_________________" << endl;
}

Person::Person() {
    cout << "Person olio luotu" << endl;
}

Person::~Person()
{
    cout << "Person olio tuhottu" << endl;
}
