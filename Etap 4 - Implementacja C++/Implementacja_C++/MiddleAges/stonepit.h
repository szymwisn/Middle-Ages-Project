#ifndef STONEPIT_H
#define STONEPIT_H

#include "building.h"

class StonePit :
    public Building
{
public:
    // CONTSTRUCTORS
    StonePit();
    StonePit(int, int, int, double, int);
};

#endif // STONEPIT_H
