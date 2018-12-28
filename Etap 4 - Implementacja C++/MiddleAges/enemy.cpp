#include "enemy.h"

//#################################################
// CONSTRUCTORS
//#################################################
Enemy::Enemy()
{

}

Enemy::Enemy(double enemyPower, int rewardGold, int rewardWood, int rewardStone, int rewardIron, int rewardFood)
{
    setPower(enemyPower);
    setRewardGold(rewardGold);
    setRewardStone(rewardStone);
    setRewardWood(rewardWood);
    setRewardIron(rewardIron);
    setRewardFood(rewardFood);
}

//#################################################
// MEMBER FUNCTIONS
//#################################################

//#################################################
// SETTERS
//#################################################
void Enemy::setRewardGold(int value)
{
    rewardGold = value;
}

void Enemy::setRewardWood(int value)
{
    rewardWood = value;
}

void Enemy::setRewardStone(int value)
{
    rewardStone = value;
}

void Enemy::setRewardIron(int value)
{
    rewardIron = value;
}

void Enemy::setRewardFood(int value)
{
    rewardFood = value;
}

//#################################################
// GETTERS
//#################################################
int Enemy::getRewardGold()
{
    return rewardGold;
}

int Enemy::getRewardWood()
{
    return rewardWood;
}

int Enemy::getRewardStone()
{
    return rewardStone;
}

int Enemy::getRewardIron()
{
    return rewardIron;
}

int Enemy::getRewardFood()
{
    return rewardFood;
}
