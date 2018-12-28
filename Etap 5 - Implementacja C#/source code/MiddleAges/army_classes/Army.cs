using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MiddleAges
{
    class Army : Price
    {
        //#################################################
        // CONSTRUCTORS
        //#################################################

        //#################################################
        // MEMBER FUNCTIONS
        //#################################################
        public void AddQuantity(int value)
        {
            _quantity += value;
        }

        public void RemoveQuantity(int value)
        {
            _quantity -= value;
        }

        public void AddPower(int value)
        {
            _power += value;
        }

        public void RemovePower(int value)
        {
            _power -= value;
        }

        public void MultiplyPower(double value)
        {
            _power *= value;
        }

        //#################################################
        // GETTERS & SETTERS
        //#################################################
        public double Power
        {
            get { return _power;  }
            set { _power = value; }
        }

        public int Quantity
        {
            get { return _quantity; }
            set { _quantity = value; }
        }

        public int Level
        {
            get { return _level; }
            set { _level = value; }
        }

        //#################################################
        // MEMBER VARIABLES
        //#################################################
        protected double _power;
        protected int _quantity;
        protected int _level;

    }
}
