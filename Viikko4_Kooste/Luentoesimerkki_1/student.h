#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;


class Student
{
public:
    Student();
    ~Student();
    Student(string);
    void getData();

private:
    string name;

};

#endif // STUDENT_H
