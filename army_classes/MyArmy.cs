using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MiddleAges
{
    class MyArmy : Army
    {
        //#################################################
        // CONSTRUCTORS
        //#################################################
        public MyArmy() { }

        public MyArmy(int limit)
        {
            ArmyLimit = limit;
        }

        //#################################################
        // MEMBER FUNCTIONS
        //#################################################
        public void AddArmyLimit(int value)
        {
            _armyLimit += value;
        }

        public void Buy(int value, int quantity, int gold, int iron, int food)
        {
            AddQuantity(quantity);
            AddPower(value);
            IncreaseBuyPrice(gold, 0, 0, iron, food);
        }

        public void Upgrade(double powerRate, int gold, int food, int iron)
        {
            _level += 1;

            MultiplyPower(powerRate);

            switch (_level)
            {
                case 1:
                    IncreaseUpgradePrice(gold, 0, 0, iron, food);
                    break;
                case 2:
                    IncreaseUpgradePrice(1.1 * gold, 0, 0, 1.1 * iron, 1.1 * food);
                    break;
                case 3:
                    IncreaseUpgradePrice(1.2 * gold, 0, 0, 1.2 * iron, 1.2 * food);
                    break;
                case 4:
                    IncreaseUpgradePrice(1.3 * gold, 0, 0, 1.3 * iron, 1.3 * food);
                    break;
                case 5:
                    IncreaseUpgradePrice(1.4 * gold, 0, 0, 1.4 * iron, 1.4 * food);
                    break;
                default:
                    IncreaseUpgradePrice(0, 0, 0, 0, 0);
                    break;
            }
        }

        //#################################################
        // GETTERS & SETTERS
        //#################################################
        public int ArmyLimit
        {
            get { return _armyLimit; }
            set { _armyLimit = value; }
        }

        //#################################################
        // MEMBER VARIABLES
        //#################################################
        private int _armyLimit;
    }
}
