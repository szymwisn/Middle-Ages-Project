using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MiddleAges
{
    class Resource
    {
        public Resource(int _gold, int _wood, int _stone, int _iron, int _food)
        {
            GoldQuantity = _gold;
            WoodQuantity = _wood;
            StoneQuantity = _stone;
            IronQuantity = _iron;
            FoodQuantity = _food;
        }

        //#################################################
        // MEMBER FUNCTIONS
        //#################################################
        // Remove
        public void RemoveGold(int quantity)
        {
            _goldQuantity -= quantity;
        }
        public void RemoveWood(int quantity)
        {
            _woodQuantity -= quantity;
        }
        public void RemoveStone(int quantity)
        {
            _stoneQuantity -= quantity;
        }
        public void RemoveIron(int quantity)
        {
            _ironQuantity -= quantity;
        }
        public void RemoveFood(int quantity)
        {
            _foodQuantity -= quantity;
        }
    
        // Add 
        public void AddGold(int quantity)
        {
            _goldQuantity += quantity;
        }
        public void AddWood(int quantity)
        {
            _woodQuantity += quantity;
        }
        public void AddStone(int quantity)
        {
            _stoneQuantity += quantity;
        }
        public void AddIron(int quantity)
        {
            _ironQuantity += quantity;
        }
        public void AddFood(int quantity)
        {
            _foodQuantity += quantity;
        }

        //#################################################
        // SETTERS & GETTERS
        //#################################################

        public int GoldQuantity
        {
            get
            {
                return _goldQuantity;
            }
            set
            {
                _goldQuantity = value;
            }
        }

        public int WoodQuantity
        {
            get
            {
                return _woodQuantity;
            }
            set
            {
                _woodQuantity = value;
            }
        }

        public int StoneQuantity
        {
            get
            {
                return _stoneQuantity;
            }
            set
            {
                _stoneQuantity = value;
            }
        }

        public int IronQuantity
        {
            get
            {
                return _ironQuantity;
            }
            set
            {
                _ironQuantity = value;
            }
        }

        public int FoodQuantity
        {
            get
            {
                return _foodQuantity;
            }
            set
            {
                _foodQuantity = value;
            }
        }

        //#################################################
        // MEMBER VARIABLES
        //#################################################
        private int _goldQuantity;
        private int _woodQuantity;
        private int _stoneQuantity;
        private int _ironQuantity;
        private int _foodQuantity;
    }
}
