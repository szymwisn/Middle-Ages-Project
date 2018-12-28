#include "farm.h"

//#################################################
// CONSTRUCTORS
//#################################################
Farm::Farm()
{

}

Farm::Farm(int priceGold, int priceWood, int priceStone, double dropRate = 1.0, int level = 1)
{
    setPriceGold(priceGold);
    setPriceWood(priceWood);
    setPriceStone(priceStone);
    setDropRate(dropRate);
    setLevel(level);
}
