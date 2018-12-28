#include "resource.h"

//#################################################
// CONSTRUCTORS
//#################################################
Resource::Resource()
{
}

Resource::Resource(int gold, int wood, int stone, int iron, int food)
{
    setGoldQuantity(gold);
    setWoodQuantity(wood);
    setStoneQuantity(stone);
    setIronQuantity(iron);
    setFoodQuantity(food);
}

//#################################################
// MEMBER FUNCTIONS
//#################################################
// remove
void Resource::removeGold(int quantity)
{
    goldQuantity -= quantity;
}

void Resource::removeWood(int quantity)
{
    woodQuantity -= quantity;
}

void Resource::removeStone(int quantity)
{
    stoneQuantity -= quantity;
}

void Resource::removeIron(int quantity)
{
    ironQuantity -= quantity;
}

void Resource::removeFood(int quantity)
{
    foodQuantity -= quantity;
}

// add
void Resource::addGold(int quantity)
{
    goldQuantity += quantity;
}

void Resource::addWood(int quantity)
{
    woodQuantity += quantity;
}

void Resource::addStone(int quantity)
{
    stoneQuantity += quantity;
}

void Resource::addIron(int quantity)
{
    ironQuantity += quantity;
}

void Resource::addFood(int quantity)
{
    foodQuantity += quantity;
}

//#################################################
// SETTERS
//#################################################
void Resource::setGoldQuantity(int gold)
{
    goldQuantity = gold;
}

void Resource::setWoodQuantity(int wood)
{
    woodQuantity = wood;
}

void Resource::setStoneQuantity(int stone)
{
    stoneQuantity = stone;
}

void Resource::setIronQuantity(int iron)
{
    ironQuantity = iron;
}

void Resource::setFoodQuantity(int food)
{
    foodQuantity = food;
}

//#################################################
// GETTERS
//#################################################
int Resource::getGoldQuantity()
{
    return goldQuantity;
}
int Resource::getWoodQuantity()
{
    return woodQuantity;
}
int Resource::getStoneQuantity()
{
    return stoneQuantity;
}
int Resource::getIronQuantity()
{
    return ironQuantity;
}
int Resource::getFoodQuantity()
{
    return foodQuantity;
}
