#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string.h>
using namespace std;

class Animal
{
public:
    Animal();
    ~Animal();
    virtual void callOut();
};

#endif // ANIMAL_H