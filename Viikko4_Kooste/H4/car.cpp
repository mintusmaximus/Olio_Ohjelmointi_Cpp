#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    // tulostetaan tämän olion sisällä olevien yksityisten olioiden tiedot (car.engine.size jne.)
    cout << "Auto: " << this->brand << " " << this->model << endl;

    cout << "Rengas Takavasen: " << objWheelBL.getSize()
         << ", " << this->objWheelBL.getType() << endl;

    cout << "Rengas Takaoikea: " << this->objWheelBR.getSize()
         << ", " << this->objWheelBR.getType() << endl;

    cout << "Rengas Etuvasen: " << this->objWheelFL.getSize()
         << ", " << this->objWheelFL.getType() << endl;

    cout << "Rengas Etuoikea: " << this->objWheelFR.getSize()
         << ", " << this->objWheelFR.getType() << endl;

    cout << "Moottori: " << this->objEngine.getHorsePower()
         << " hp, " << this->objEngine.getDisplacement() << " L" << endl;
}

Car::Car()
{

}


Car::Car(string br, string mo)
{
    this->brand = br;
    this->model = mo;
}

void Car::setEngine()
{
    objEngine.setDisplacement(2);
    objEngine.setHorsePower(150);
}

void Car::setWheels()
{
    objWheelBL.setType("Kesärengas");
    objWheelBL.setSize(17);

    objWheelBR.setType("Kesärengas");
    objWheelBR.setSize(17);

    objWheelFL.setType("Kesärengas");
    objWheelFL.setSize(17);

    objWheelFR.setType("Kesärengas");
    objWheelFR.setSize(17);
}
