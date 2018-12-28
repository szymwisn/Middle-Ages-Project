#ifndef ENEMY_H
#define ENEMY_H

#include "army.h"

class Enemy :
        public Army
{
public:
    // CONTSTRUCTORS
    Enemy();
    Enemy(double, int, int, int, int, int);

    // MEMBER FUNCTIONS

    // SETTERS
    void setRewardGold(int);
    void setRewardWood(int);
    void setRewardStone(int);
    void setRewardIron(int);
    void setRewardFood(int);

    // GETTERS
    int getRewardGold();
    int getRewardWood();
    int getRewardStone();
    int getRewardIron();
    int getRewardFood();

private:
    // MEMBER VARIABLES
    int rewardGold;
    int rewardWood;
    int rewardStone;
    int rewardIron;
    int rewardFood;
};

#endif // ENEMY_H
