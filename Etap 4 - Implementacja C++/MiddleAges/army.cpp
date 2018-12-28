#include "army.h"

//#################################################
// CONSTRUCTORS
//#################################################
Army::Army()
{

}

//#################################################
// MEMBER FUNCTIONS
//#################################################
void Army::addQuantity(int value)
{
    quantity += value;
}

void Army::removeQuantity(int value)
{
    quantity -= value;
}

void Army::addPower(int value)
{
    power += value;
}

void Army::removePower(int value)
{
    power -= value;
}

void Army::multiplyPower(double value)
{
    power *= value;
}

//#################################################
// SETTERS
//#################################################
void Army::setPower(int value)
{
    power = value;
}

void Army::setQuantity(int value)
{
    quantity = value;
}

void Army::setLevel(int value)
{
    level = value;
}

//#################################################
// GETTERS
//#################################################
double Army::getPower()
{
    return power;
}

int Army::getLevel()
{
    return level;
}

int Army::getQuantity()
{
    return quantity;
}
