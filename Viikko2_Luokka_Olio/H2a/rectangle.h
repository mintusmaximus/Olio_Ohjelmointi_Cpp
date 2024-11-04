#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width, height;

public:
    Rectangle();

    double getArea(double, double);
    double getCircum(double, double);

    double getWidth() const;
    void setWidth(double newWidth);

    double getHeight() const;
    void setHeight(double newHeight);
    void printInfo(double, double);
};

#endif // RECTANGLE_H
