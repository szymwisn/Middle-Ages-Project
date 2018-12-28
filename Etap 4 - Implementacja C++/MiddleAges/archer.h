#ifndef ARCHER_H
#define ARCHER_H

#include "myarmy.h"

class Archer :
        public MyArmy
{
public:
    Archer();
    Archer(int, int, int, int, int, int);
};

#endif // ARCHER_H
