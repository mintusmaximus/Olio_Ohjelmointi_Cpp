#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "classb.h"




class AggregationA
{
private:
    ClassB &refB; // this is a reference to class B object in class A (aggregation)
    // aggregation is a "has-a" relationship, where the class A has a reference to class B object
public:
    AggregationA(ClassB&); // constructor with parameter of class B object 
    string getBinfo(); 
    void setBinfo(string);
};


#endif // AGGREGATIONA_H
