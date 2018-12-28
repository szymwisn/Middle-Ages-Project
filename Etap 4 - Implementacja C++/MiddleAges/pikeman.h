#ifndef PIKEMAN_H
#define PIKEMAN_H

#include "myarmy.h"

class Pikeman :
        public MyArmy
{
public:
    Pikeman();
    Pikeman(int, int, int, int, int, int);
};

#endif // PIKEMAN_H
