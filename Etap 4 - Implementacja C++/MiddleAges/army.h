#ifndef ARMY_H
#define ARMY_H

#include "resource.h"
#include "price.h"

class Army :
        public Price
{
public:
    // CONTSTRUCTORS
    Army();

    // MEMBER FUNCTIONS
    void addQuantity(int);
    void removeQuantity(int);
    void addPower(int);
    void removePower(int);
    void multiplyPower(double);

    // SETTERS
    void setPower(int);
    void setQuantity(int);
    void setLevel(int);

    // GETTERS
    double getPower();
    int getQuantity();
    int getLevel();

protected:
    // MEMBER VARIABLES
    double power;
    int quantity;
    int level;
};

#endif // ARMY_H
