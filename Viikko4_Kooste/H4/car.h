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
    Wheel objWheelFL; // front left
    Wheel objWheelFR; // front right
    Wheel objWheelBL; // back left
    Wheel objWheelBR; // back right
    Engine objEngine;

public:
    Car();
    Car(string, string); // konstruktori mallille ja merkille samaan aikaan

    void setEngine();
    void setWheels();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    void printDetails();
};

#endif // CAR_H
