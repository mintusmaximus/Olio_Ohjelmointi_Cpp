#include "wheel.h"


int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

std::string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const std::string &newType)
{
    type = newType;
}

Wheel::Wheel() {}

Wheel::Wheel(int s, std::string t)
{
    this->size = s;
    this->type = t;
}
