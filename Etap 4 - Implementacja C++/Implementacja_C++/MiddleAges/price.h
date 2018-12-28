#ifndef PRICE_H
#define PRICE_H

class Price
{
public:
    Price();

    // MEMBER FUNCTIONS
    void increasePrice(double, double, double, double, double); //gold | wood | stone | iron | food
    void increaseBuyPrice(double, double, double, double, double);

    // SETTERS
    void setPriceGold(int);
    void setPriceWood(int);
    void setPriceStone(int);
    void setPriceIron(int);
    void setPriceFood(int);

    void setPriceBuyGold(int);
    void setPriceBuyWood(int);
    void setPriceBuyStone(int);
    void setPriceBuyIron(int);
    void setPriceBuyFood(int);

    // GETTERS
    double getPriceGold();
    double getPriceWood();
    double getPriceStone();
    double getPriceIron();
    double getPriceFood();

    double getPriceBuyGold();
    double getPriceBuyWood();
    double getPriceBuyStone();
    double getPriceBuyIron();
    double getPriceBuyFood();

    // MEMBER VARIABLES
protected:
    double priceGold;
    double priceWood;
    double priceStone;
    double priceIron;
    double priceFood;

    double priceBuyGold;
    double priceBuyWood;
    double priceBuyStone;
    double priceBuyIron;
    double priceBuyFood;
};

#endif // PRICE_H
