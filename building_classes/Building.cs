using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MiddleAges
{
    class Building : Price
    {
        //#################################################
        // CONSTRUCTOR
        //#################################################
        public Building() { }

        public Building(int _gold, int _wood, int _stone, double _dropRate = 1.0, int _level = 1)
        {
            PriceUpgradeGold = _gold;
            PriceUpgradeWood = _wood;
            PriceUpgradeStone = _stone;
            BuildingDropRate = _dropRate;
            BuildingLevel = _level;
        }

        //#################################################
        // MEMBER FUNCTIONS
        //#################################################
        public void IncreaseDropRate(double _value)
        {
            _buildingDropRate *= _value;
        }

        public void Upgrade(int _gold, int _wood, int _stone)
        {
            _buildingLevel += 1;
            switch (_buildingLevel)
            {
                case 1:
                    IncreaseUpgradePrice(_gold, _wood, _stone, 0, 0);
                    IncreaseDropRate(1);
                    break;
                case 2:
                    IncreaseUpgradePrice(1.1 * _gold, 1.1 * _wood, 1.1 * _stone, 0, 0);
                    IncreaseDropRate(1.1);
                    break;
                case 3:
                    IncreaseUpgradePrice(1.2 * _gold, 1.2 * _wood, 1.2 * _stone, 0, 0);
                    IncreaseDropRate(1.2);
                    break;
                case 4:
                    IncreaseUpgradePrice(1.5 * _gold, 1.5 * _wood, 1.5 * _stone, 0, 0);
                    IncreaseDropRate(1.3);
                    break;
                case 5:
                    IncreaseUpgradePrice(1.8 * _gold, 1.8 * _wood, 1.8 * _stone, 0, 0);
                    IncreaseDropRate(1.4);
                    break;
                default:
                    IncreaseUpgradePrice(0, 0, 0, 0, 0);
                    IncreaseDropRate(1);
                    break;
            }
        }


        //#################################################
        // GETTERS & SETTERS
        //#################################################
        public double BuildingDropRate
        {
            get { return _buildingDropRate; }
            set { _buildingDropRate = value; }
        }

        public int BuildingLevel
        {
            get { return _buildingLevel; }
            set { _buildingLevel = value; }
        }

        //#################################################
        // MEMBER VARIABLES
        //#################################################
        protected double _buildingDropRate;
        protected int _buildingLevel;
    }
}
