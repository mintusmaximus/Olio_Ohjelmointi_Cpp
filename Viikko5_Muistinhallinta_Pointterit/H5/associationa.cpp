#include "associationa.h"

AssosiationA::AssosiationA(ClassB value) : objectB(value) // constructor with parameter of class B object 
{

}

string AssosiationA::getBinfo() // get info from objB 
{
    return objectB.getInfo();
}

void AssosiationA::setBinfo(string value)
{
    objectB.setInfo(value);
}
