#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "student.h"

#include <iostream>
using namespace std;


class ClassRoom
{
private:
    Student objStudent1;
    Student objStudent2;
    Student objStudent3;

    Student *objStudent4;


public:
    ClassRoom();
    ~ClassRoom();

    void printData();

};

#endif // CLASSROOM_H
