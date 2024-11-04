#include "student.h"

string Student::getFname() const
{
    return fname;
}

void Student::setFname(const string &newFname)
{
    fname = newFname;
}

string Student::getLname() const
{
    return lname;
}

void Student::setLname(const string &newLname)
{
    lname = newLname;
}

string Student::getEmail() const
{
    return email;
}

void Student::setEmail(const string &newEmail)
{
    email = newEmail;
}

void Student::printInfo()
{
    cout << "Opiskelijan tiedot" << endl;
    cout << "Nimi " << fname << " " << lname << endl;
    cout << "Sähköposti " << email << endl;
    cout << "___________________________________" << endl;
}

Student::Student(string fn, string ln, string em)
{
    fname = fn;
    lname = ln;
    email = em;

}

Student::Student()
{

}
