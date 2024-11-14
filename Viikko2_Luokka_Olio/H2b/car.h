#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car
{
private:
    string brand, model;
    int yearModel;

public:
    Car();
    Car(string, string, int);
    void printData();
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);
};

#endif // CAR_H