#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"

#include <iostream>
using namespace std;

class Car
{
private:
    string model, brand;

    // luodaan autoon kuuluvat osat samalla, kun luodaan auton olio
    Wheel objWheelFL = Wheel(14, "Kesärengas"); // front left
    Wheel objWheelFR = Wheel(14, "Kesärengas"); // front right
    Wheel objWheelBL = Wheel(14, "Kesärengas"); // back left
    Wheel objWheelBR = Wheel(14, "Kesärengas"); // back right
    Engine objEngine = Engine(150, 2.0);

public:
    Car();
    Car(string, string); // konstruktori mallille ja merkille samaan aikaan

    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    void printDetails();
};

#endif // CAR_H
