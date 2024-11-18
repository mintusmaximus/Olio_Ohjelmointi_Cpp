#include "student.h"

Student::Student()
{

}

Student::~Student()
{
    cout << "Student olio tuhottiin" << endl;
}

Student::Student(string a)
{
    this->name = a;
}

void Student::getData()
{
    cout << "Opiskelijan nimi: " << this->name << endl;
}
