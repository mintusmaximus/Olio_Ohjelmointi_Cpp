#include "engine.h"

int Engine::getHorsePower() const
{
    return horsePower;
}

void Engine::setHorsePower(int newHorsePower)
{
    horsePower = newHorsePower;
}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}

Engine::Engine() {}

Engine::Engine(int foo, double bar)
{
    this->displacement = bar;
    this->horsePower = foo;
}
