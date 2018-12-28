using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MiddleAges
{
    class Price
    {
        //#################################################
        // MEMBER FUNCTIONS
        //#################################################
        public void IncreaseUpgradePrice(double gold, double wood, double stone, double iron, double food)
        {
            _priceUpgradeGold += gold;
            _priceUpgradeWood += wood;
            _priceUpgradeStone += stone;
            _priceUpgradeIron += iron;
            _priceUpgradeFood += food;
        }

        public void IncreaseBuyPrice(double gold, double wood, double stone, double iron, double food)
        {
            _priceBuyGold += gold;
            _priceBuyWood += wood;
            _priceBuyStone += stone;
            _priceBuyIron += iron;
            _priceBuyFood += food;
        }

        //#################################################
        // GETTERS & SETTERS
        //#################################################
        public double PriceBuyGold
        {
            get { return _priceBuyGold; }
            set { _priceBuyGold = value; }
        }
        public double PriceBuyWood
        {
            get { return _priceBuyWood; }
            set { _priceBuyWood = value; }
        }
        public double PriceBuyStone
        {
            get { return _priceBuyStone; }
            set { _priceBuyStone = value; }
        }
        public double PriceBuyIron
        {
            get { return _priceBuyIron; }
            set { _priceBuyIron = value; }
        }
        public double PriceBuyFood
        {
            get { return _priceBuyFood; }
            set { _priceBuyFood = value; }
        }

        public double PriceUpgradeGold
        {
            get { return _priceUpgradeGold; }
            set { _priceUpgradeGold = value; }
        }
        public double PriceUpgradeWood
        {
            get { return _priceUpgradeWood; }
            set { _priceUpgradeWood = value; }
        }
        public double PriceUpgradeStone
        {
            get { return _priceUpgradeStone; }
            set { _priceUpgradeStone = value; }
        }
        public double PriceUpgradeIron
        {
            get { return _priceUpgradeIron; }
            set { _priceUpgradeIron = value; }
        }
        public double PriceUpgradeFood
        {
            get { return _priceUpgradeFood; }
            set { _priceUpgradeFood = value; }
        }

        //#################################################
        // MEMBER VARIABLES
        //#################################################
        private double _priceBuyGold;
        private double _priceBuyWood;
        private double _priceBuyStone;
        private double _priceBuyIron;
        private double _priceBuyFood;

        private double _priceUpgradeGold;
        private double _priceUpgradeWood;
        private double _priceUpgradeStone;
        private double _priceUpgradeIron;
        private double _priceUpgradeFood;
    }
}
