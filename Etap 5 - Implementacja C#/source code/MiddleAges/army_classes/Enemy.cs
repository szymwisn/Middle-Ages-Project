using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MiddleAges
{
    class Enemy : Army
    {
        //#################################################
        // CONSTRUCTORS
        //#################################################
        public Enemy(double _enemyPower, int _rewardGold, int _rewardWood, int _rewardStone, int _rewardIron, int _rewardFood)
        {
            Power = _enemyPower;
            RewardGold = _rewardGold;
            RewardWood = _rewardWood;
            RewardStone = _rewardStone;
            RewardIron = _rewardIron;
            RewardFood = _rewardFood;
        }

        //#################################################
        // MEMBER FUNCTIONS
        //#################################################

        //#################################################
        // GETTERS & SETTERS
        //#################################################
        public int RewardGold
        {
            get { return _rewardGold; }
            set { _rewardGold = value; }
        }

        public int RewardWood
        {
            get { return _rewardWood; }
            set { _rewardWood = value; }
        }

        public int RewardStone
        {
            get { return _rewardStone; }
            set { _rewardStone = value; }
        }

        public int RewardIron
        {
            get { return _rewardIron; }
            set { _rewardIron = value; }
        }

        public int RewardFood
        {
            get { return _rewardFood; }
            set { _rewardFood = value; }
        }

        //#################################################
        // MEMBER VARIABLES
        //#################################################
        private int _rewardGold;
        private int _rewardWood;
        private int _rewardStone;
        private int _rewardIron;
        private int _rewardFood;
    }
}
