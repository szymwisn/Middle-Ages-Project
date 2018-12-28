#include "price.h"

// CONSTRUCTORS
Price::Price()
{
}

// MEMBER FUNCTIONS
void Price::increasePrice(double gold, double wood, double stone, double iron, double food)
{
    priceGold += gold;
    priceWood += wood;
    priceStone += stone;
    priceIron += iron;
    priceFood += food;
}


void Price::increaseBuyPrice(double gold, double wood, double stone, double iron, double food)
{
    priceBuyGold += gold;
    priceBuyWood += wood;
    priceBuyStone += stone;
    priceBuyIron += iron;
    priceBuyFood += food;
}
// SETTERS
void Price::setPriceGold(int price)
{
    priceGold = price;
}

void Price::setPriceWood(int price)
{
    priceWood = price;
}

void Price::setPriceStone(int price)
{
    priceStone = price;
}

void Price::setPriceIron(int price)
{
    priceIron = price;
}

void Price::setPriceFood(int price)
{
    priceFood = price;
}


void Price::setPriceBuyGold(int price)
{
    priceBuyGold = price;
}

void Price::setPriceBuyWood(int price)
{
    priceBuyWood = price;
}

void Price::setPriceBuyStone(int price)
{
    priceBuyStone = price;
}

void Price::setPriceBuyIron(int price)
{
    priceBuyIron = price;
}

void Price::setPriceBuyFood(int price)
{
    priceBuyFood = price;
}

// GETTERS
double Price::getPriceGold()
{
    return priceGold;
}

double Price::getPriceWood()
{
    return priceWood;
}

double Price::getPriceStone()
{
    return priceStone;
}

double Price::getPriceIron()
{
    return priceIron;
}

double Price::getPriceFood()
{
    return priceFood;
}


double Price::getPriceBuyGold()
{
    return priceBuyGold;
}

double Price::getPriceBuyWood()
{
    return priceBuyWood;
}

double Price::getPriceBuyStone()
{
    return priceBuyStone;
}

double Price::getPriceBuyIron()
{
    return priceBuyIron;
}

double Price::getPriceBuyFood()
{
    return priceBuyFood;
}

