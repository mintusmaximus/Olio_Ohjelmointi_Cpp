#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "animal.h"

class Elephant : public Animal
{
public:
    Elephant();
    ~Elephant();
    string getZooName() const;
    void setZooName(const string &newZooName);

private:
    string zooName;

};

#endif // ELEPHANT_H
