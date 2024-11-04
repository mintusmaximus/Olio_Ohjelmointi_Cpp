#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
private:
    int age;
    string name;

public:
    Person();
    ~Person(); // luokan tuhoaja
    int getAge() const;
    void setAge(int newAge);

    string getName() const;
    void setName(const string &newName);

    void printInfo();

};

#endif // PERSON_H
