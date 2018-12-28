#ifndef SAWMILL_H
#define SAWMILL_H

#include "building.h"

class SawMill :
    public Building
{
public:
    // CONTSTRUCTORS
    SawMill();
    SawMill(int, int, int, double, int);
};

#endif // SAWMILL_H
