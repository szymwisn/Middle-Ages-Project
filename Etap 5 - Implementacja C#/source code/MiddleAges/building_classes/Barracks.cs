using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MiddleAges
{
    class Barracks : Building
    {
        public Barracks(int priceGold, int priceWood, int priceStone, double dropRate = 1.0, int level = 1)
        {
            PriceUpgradeGold = priceGold;
            PriceUpgradeWood = priceWood;
            PriceUpgradeStone = priceStone;
            BuildingDropRate = dropRate;
            BuildingLevel = level;
        }
    }
}
