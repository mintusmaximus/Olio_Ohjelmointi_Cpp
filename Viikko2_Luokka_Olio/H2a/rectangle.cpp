#include "rectangle.h"
#include <iostream>
using namespace std;

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::printInfo(double c, double a)
{
    cout << "Suorakulmion pinta-ala: " << a << endl;
    cout << "Suorakulmion ympärysmitta: " << c << endl;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

Rectangle::Rectangle()
{

}

double Rectangle::getArea(double h, double w)
{
    return h*w;
}

double Rectangle::getCircum(double h, double w)
{
    return 2*(w+h);
}
