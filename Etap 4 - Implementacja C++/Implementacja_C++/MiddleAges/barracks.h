#ifndef BARRACKS_H
#define BARRACKS_H

#include "building.h"

class Barracks :
    public Building
{
public:
    // CONTSTRUCTORS
    Barracks();
    Barracks(int, int, int, double, int);
};

#endif // BARRACKS_H
