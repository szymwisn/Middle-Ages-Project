#include "barracks.h"

//#################################################
// CONSTRUCTORS
//#################################################
Barracks::Barracks()
{

}

Barracks::Barracks(int priceGold, int priceWood, int priceStone, double dropRate = 1.0, int level = 1)
{
    setPriceGold(priceGold);
    setPriceWood(priceWood);
    setPriceStone(priceStone);
    setDropRate(dropRate);
    setLevel(level);
}
