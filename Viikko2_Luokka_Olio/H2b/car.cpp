#include "car.h"

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

Car::Car() {}

Car::Car(string, string, int)
{

}

void Car::printData()
{
    cout << "________________________________" << endl;
    cout << "Auton merkki: " << brand << endl;
    cout << "Auton malli: " << model << endl;
    cout << "Auton vuosimalli:" << yearModel << endl;
}
