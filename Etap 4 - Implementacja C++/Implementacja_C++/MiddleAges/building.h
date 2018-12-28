#ifndef BUILDING_H
#define BUILDING_H

#include "resource.h"
#include "price.h"

class Building :
    public Price
{
public:
    // CONTSTRUCTORS
    Building();
    Building(int, int, int, double, int); //priceGold | priceWood | priceStone | dropRate | level

    // MEMBER FUNCTIONS
    void increaseDropRate(double);
    void upgrade(int, int, int, double);

    // SETTERS
    void setDropRate(double);
    void setLevel(int);

    // GETTERS
    double getDropRate();
    int getLevel();

protected:
    // MEMBER VARIABLES
    double buildingDropRate;
    int buildingLevel;

};

#endif // BUILDING_H
