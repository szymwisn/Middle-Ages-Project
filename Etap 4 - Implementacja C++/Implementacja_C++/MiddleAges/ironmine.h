#ifndef IRONMINE_H
#define IRONMINE_H

#include "building.h"

class IronMine :
    public Building
{
public:
    // CONTSTRUCTORS
    IronMine();
    IronMine(int, int, int, double, int);
};

#endif // IRONMINE_H
