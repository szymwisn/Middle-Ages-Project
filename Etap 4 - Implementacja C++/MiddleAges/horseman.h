#ifndef HORSEMAN_H
#define HORSEMAN_H

#include "myarmy.h"

class Horseman :
        public MyArmy
{
public:
    Horseman();
    Horseman(int, int, int, int, int, int);
};

#endif // HORSEMAN_H
