#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal
{
private:
    string owner;

public:
    Cat();
    ~Cat();
    Cat(int, string, string);

    string getOwner() const;
    void setOwner(const string &newOwner);

    // ei käytetä alkuperäistä printData, vaan tehdään oma versio kissalle
    virtual void printData() override;
};

#endif // CAT_H
