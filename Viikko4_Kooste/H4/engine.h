#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsePower;
    double displacement;


public:
    Engine();
    Engine(int, double);

    int getHorsePower() const;
    void setHorsePower(int newHorsePower);
    double getDisplacement() const;
    void setDisplacement(double newDisplacement);
};

#endif // ENGINE_H
