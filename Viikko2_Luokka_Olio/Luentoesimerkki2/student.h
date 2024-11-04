#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {

private:
    string fname, lname, email;

public:
    // konstruktori joka ottaa parametrit
    Student(string, string, string);
    // tyhjä konstruktori
    Student();

    string getFname() const;
    void setFname(const string &newFname);

    string getLname() const;
    void setLname(const string &newLname);

    string getEmail() const;
    void setEmail(const string &newEmail);

    void printInfo();
};

#endif // STUDENT_H
