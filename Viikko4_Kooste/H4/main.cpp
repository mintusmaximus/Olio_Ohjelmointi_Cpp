#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car carObj1 = Car("Toyota", "Corolla");
    carObj1.setWheels();
    carObj1.setEngine();
    carObj1.printDetails();

    return 0;
}
