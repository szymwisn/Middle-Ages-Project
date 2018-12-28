#ifndef HUT_H
#define HUT_H

#include "building.h"

class Hut :
    public Building
{
public:
    // CONTSTRUCTORS
    Hut();
    Hut(int, int, int, double, int);
};

#endif // HUT_H
