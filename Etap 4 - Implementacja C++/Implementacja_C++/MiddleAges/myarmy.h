#ifndef MYARMY_H
#define MYARMY_H

#include "army.h"

class MyArmy :
        public Army
{
public:
    // CONTSTRUCTORS
    MyArmy();

    MyArmy(int);

    // MEMBER FUNCTIONS
    void buy(int, int, int, int, int);
    void upgrade (double, int, int, int);
    void addArmyLimit(int); // do wymiany z army

    // SETTERS
    void setArmyLimit(int);

    // GETTERS
    int getArmyLimit();

private:
    int armyLimit;
};

#endif // MYARMY_H
