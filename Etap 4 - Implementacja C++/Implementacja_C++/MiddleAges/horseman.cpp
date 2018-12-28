#include "horseman.h"

Horseman::Horseman()
{

}

Horseman::Horseman(int powerValue, int quantityValue, int levelValue, int goldValue, int foodValue, int ironValue)
{
    setPower(powerValue);
    setQuantity(quantityValue);
    setLevel(levelValue);
    setPriceFood(foodValue);
    setPriceGold(goldValue);
    setPriceIron(ironValue);
    setPriceBuyFood(foodValue);
    setPriceBuyGold(goldValue);
    setPriceBuyIron(ironValue);
}
