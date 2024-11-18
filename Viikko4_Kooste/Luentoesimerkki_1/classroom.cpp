#include "classroom.h"

ClassRoom::ClassRoom()
{
    objStudent1=Student("Teppo Testi");
    objStudent2=Student("Matti Mallikas");
    objStudent3=Student("Jesse");
    objStudent4 = new Student("Nimi nimetön");
}

ClassRoom::~ClassRoom()
{
    delete objStudent4;
    objStudent4 = nullptr;
}

void ClassRoom::printData()
{
    objStudent1.getData();
    objStudent2.getData();
    objStudent3.getData();

    objStudent4->getData();
}
