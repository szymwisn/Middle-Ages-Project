#ifndef RESOURCE_H
#define RESOURCE_H

class Resource
{
public:
    // CONTSTRUCTORS
    Resource();
    Resource(int, int, int, int, int); //gold, wood, stone, iron, food;

    // MEMBER FUNCTIONS
    void removeGold(int);
    void removeWood(int);
    void removeStone(int);
    void removeIron(int);
    void removeFood(int);

    void addGold(int);
    void addWood(int);
    void addStone(int);
    void addIron(int);
    void addFood(int);

    // SETTERS
    void setGoldQuantity(int);
    void setWoodQuantity(int);
    void setStoneQuantity(int);
    void setIronQuantity(int);
    void setFoodQuantity(int);

    // GETTERS
    int getGoldQuantity();
    int getWoodQuantity();
    int getStoneQuantity();
    int getIronQuantity();
    int getFoodQuantity();

private:
    // MEMBER VARIABLES
    int goldQuantity;
    int woodQuantity;
    int stoneQuantity;
    int ironQuantity;
    int foodQuantity;
};

#endif // RESOURCE_H
