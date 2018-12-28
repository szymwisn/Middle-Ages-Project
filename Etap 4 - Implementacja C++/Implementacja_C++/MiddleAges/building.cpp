#include "building.h"

//#################################################
// CONSTRUCTORS
//#################################################
Building::Building()
{

}

Building::Building(int priceGold, int priceWood, int priceStone, double dropRate = 1.0, int level = 1)
{
    setPriceGold(priceGold);
    setPriceWood(priceWood);
    setPriceStone(priceStone);
    setDropRate(dropRate);
    setLevel(level);
}

//#################################################
// MEMBER FUNCTIONS
//#################################################

void Building::increaseDropRate(double value)
{
    buildingDropRate *= value;
}

void Building::upgrade(int gold, int wood, int stone, double dropRate)
{
    buildingLevel += 1;
    switch (buildingLevel)
    {
    case 1:
        increasePrice(gold, wood, stone, 0, 0);
        increaseDropRate(1);
        break;
    case 2:
        increasePrice(1.1 * gold, 1.1 * wood, 1.1 * stone, 0, 0);
        increaseDropRate(1.1 * dropRate);
        break;
    case 3:
        increasePrice(1.2 * gold, 1.2 * wood, 1.2 * stone, 0, 0);
        increaseDropRate(1.2 * dropRate);
        break;
    case 4:
        increasePrice(1.5 * gold, 1.5 * wood, 1.5 * stone, 0, 0);
        increaseDropRate(1.3);
        break;
    case 5:
        increasePrice(1.8 * gold, 1.8 * wood, 1.8 * stone, 0, 0);
        increaseDropRate(1.4);
        break;
    default:
        increasePrice(0, 0, 0, 0, 0);
        increaseDropRate(1);
    }
}

//#################################################
// SETTERS
//#################################################
void Building::setDropRate(double dropRate)
{
    buildingDropRate = dropRate;
}

void Building::setLevel(int level)
{
    buildingLevel = level;
}

//#################################################
// GETTERS
//#################################################
double Building::getDropRate()
{
    return buildingDropRate;
}

int Building::getLevel()
{
    return buildingLevel;
}
