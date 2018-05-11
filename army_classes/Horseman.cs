using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MiddleAges
{
    class Horseman : MyArmy
    {
        public Horseman(int powerValue, int quantityValue, int levelValue, int goldValue, int foodValue, int ironValue)
        {
            Power = powerValue;
            Quantity = quantityValue;
            Level = levelValue;
            PriceBuyGold = goldValue;
            PriceBuyIron = ironValue;
            PriceBuyFood = PriceBuyFood;
            PriceUpgradeGold = goldValue;
            PriceUpgradeIron = ironValue;
            PriceUpgradeFood = PriceBuyFood;
        }
    }
}
