#include "myarmy.h"

//#################################################
// CONSTRUCTORS
//#################################################
MyArmy::MyArmy()
{

}

MyArmy::MyArmy(int limit)
{
    setArmyLimit(limit);
}

//#################################################
// MEMBER FUNCTIONS
//#################################################
void MyArmy::addArmyLimit(int value)
{
    armyLimit += value;
}


void MyArmy::buy(int value, int quantity, int gold, int iron, int food)
{
    addQuantity(quantity);
    addPower(value);
    increaseBuyPrice(gold, 0, 0, iron, food);
}

void MyArmy::upgrade(double powerRate, int gold, int food, int iron)
{
    level += 1;

    multiplyPower(powerRate);

    switch (level)
    {
    case 1:
        increasePrice(gold, 0, 0, iron, food);
        break;
    case 2:
        increasePrice(1.1 * gold, 0, 0, 1.1 * iron, 1.1 * food);
        break;
    case 3:
        increasePrice(1.2 * gold, 0, 0, 1.2 * iron, 1.2 * food);
        break;
    case 4:
        increasePrice(1.3 * gold, 0, 0, 1.3 * iron, 1.3 * food);
        break;
    case 5:
        increasePrice(1.4 * gold, 0, 0, 1.4 * iron, 1.4 * food);
        break;
    default:
        increasePrice(0, 0, 0, 0, 0);
    }
}


//#################################################
// SETTERS
//#################################################
void MyArmy::setArmyLimit(int value)
{
    armyLimit = value;
}

//#################################################
// GETTERS
//#################################################
int MyArmy::getArmyLimit()
{
    return armyLimit;
}
