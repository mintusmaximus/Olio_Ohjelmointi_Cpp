#ifndef ASSOCIATIONA_H
#define ASSOCIATIONA_H

#include "classb.h"

class AssosiationA // class A that uses class B object in association 
{
private:
    ClassB objectB; // object of class B in class A (association) 
    // association is a "uses-a" relationship, where the class A uses the class B object 
    // but the class B object is not a part of the class A object
public:
    AssosiationA(ClassB); // constructor with parameter of class B object (association)
    string getBinfo(); // get the info of class B object from this class A object
    void setBinfo(string); // set the info of class B object from this class A object
};


#endif // ASSOCIATIONA_H
