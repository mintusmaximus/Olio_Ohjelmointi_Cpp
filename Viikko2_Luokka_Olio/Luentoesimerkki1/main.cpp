#include "person.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // luodaan automaattinen olio, luodaan pinoon ja se tuhoutuu automaattisesti
    Person objPerson;

    objPerson.setAge(20);
    objPerson.setName("Teppo Testi");

    cout << "Henkilon nimi on " << objPerson.getName() << endl;
    cout << "Henkilon ika on " << objPerson.getAge() << endl;

    objPerson.printInfo();

    // luodaan dynaaminen olio, luodaan kekoon ja tuhotaan itse
    Person *objPerson2 = new Person;
    objPerson2 -> setName("Nimi Nimetön");
    objPerson2 -> setAge(21);
    objPerson2 -> printInfo();

    delete objPerson2;
    objPerson2=nullptr;

    // luodaan olio smart-pointterilla, luodaan kekoon ja se tuhoutuu automaattisesti
    unique_ptr<Person> objPerson3=make_unique<Person>();
    objPerson3->setAge(32);
    objPerson3->setName("Aimo Asiakas");
    objPerson3->printInfo();


    return 0;
}
