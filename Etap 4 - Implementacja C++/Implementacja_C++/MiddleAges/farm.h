#ifndef FARM_H
#define FARM_H

#include "building.h"

class Farm :
    public Building
{
public:
    // CONTSTRUCTORS
    Farm();
    Farm(int, int, int, double, int);
};

#endif // FARM_H
