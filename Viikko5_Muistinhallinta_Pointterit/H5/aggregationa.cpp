#include "aggregationa.h"

AggregationA::AggregationA(ClassB &value) : refB(value) // this is a reference to class B object in class A (aggregation) 
{
}

string AggregationA::getBinfo()
{
    return refB.getInfo(); // get info from objB through reference 
}

void AggregationA::setBinfo(string value)
{
    refB.setInfo(value);
}
