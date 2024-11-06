#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal
{
public:
    Animal();
    Animal(int, string);
    ~Animal();
    int getWeight() const;
    void setWeight(int newWeight);
    string getColor() const;
    void setColor(const string &newColor);


    virtual void printData();

private:
    int weight;
    string color;

protected:
    void Test();


};

#endif // ANIMAL_H
