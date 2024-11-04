#include "student.h"

#include <iostream>

using namespace std;

int main()
{
    // molemmille on luotu omat konstruktorit
    Student *objStudent1 = new Student;
    objStudent1->setFname("Liisa");
    objStudent1->setLname("Luokka");
    objStudent1->setEmail("mail@mail.com");


    Student *objStudent2 = new Student("Teppo", "Testi", "t.testi@email.com");


    objStudent1->printInfo();
    objStudent2->printInfo();


    delete objStudent1;
    objStudent1 = nullptr;
    delete objStudent2;
    objStudent2 = nullptr;

    return 0;
}
