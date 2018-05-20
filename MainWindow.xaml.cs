using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Threading;


// TO DO
// ciekawostki

namespace MiddleAges
{

    //#################################################
    // POLYMORPHISM
    //#################################################
    abstract public class Napis
    {
        abstract public string PobierzTekst();
    }

    public class Ciekawostka1 : Napis
    {
        public override string PobierzTekst()
        {
            return "Ciekawostka 1: Magowie uzywaja magicznych zaklec.";
            throw new NotImplementedException();
        }
    }

    public class Ciekawostka2 : Napis
    {
        public override string PobierzTekst()
        {
            return "Ciekawostka2: Wojownicy sa silni.";
            throw new NotImplementedException();
        }
    }

    /// <summary>
    /// Logika interakcji dla klasy MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        //#################################################
        // OBJECTS DECLARATION
        //#################################################
        Resource zasoby = new Resource(5000, 5000, 5000, 5000, 1000);
        Sawmill tartak = new Sawmill(300, 100, 30, 1.0, 1);
        StonePit kamieniolom = new StonePit(300, 100, 30, 1.0, 1);
        Farm farma = new Farm(200, 50, 50, 1.0, 1);
        IronMine kopalnia_zelaza = new IronMine(400, 100, 200, 1.0, 1);
        Hut domek = new Hut(50, 50, 50, 1.0, 1);
        Barracks koszary = new Barracks(500, 300, 400, 1.0, 1);
        MyArmy armia = new MyArmy(0);
        Pikeman piknier = new Pikeman(0, 0, 1, 10, 10, 10);
        Archer strzelec = new Archer(0, 0, 1, 20, 20, 20);
        Horseman jezdziec = new Horseman(0, 0, 1, 30, 30, 30);
        Enemy wrog = new Enemy(10, 500, 500, 500, 500, 500);
        DispatcherTimer goldTimer = new DispatcherTimer();
        DispatcherTimer woodTimer = new DispatcherTimer();
        DispatcherTimer stoneTimer = new DispatcherTimer();
        DispatcherTimer ironTimer = new DispatcherTimer();
        DispatcherTimer foodTimer = new DispatcherTimer();
        DispatcherTimer foodMinusTimer = new DispatcherTimer();
        Random rnd = new Random();
        int goldDropValue = 0;
        int woodDropValue = 0;
        int stoneDropValue = 0;
        int ironDropValue = 0;
        int foodDropValue = 0;
        Napis c1 = new Ciekawostka1();
        Napis c2 = new Ciekawostka2();

        //#################################################
        // Constructor
        //#################################################
        public MainWindow()
        {
            InitializeComponent();

            //#################################################
            // DEFAULT LABELS
            //#################################################
            // Resource values
            label_GoldValue.Text = zasoby.GoldQuantity.ToString();
            label_WoodValue.Text = zasoby.WoodQuantity.ToString();
            label_StoneValue.Text = zasoby.StoneQuantity.ToString();
            label_IronValue.Text = zasoby.IronQuantity.ToString();
            label_FoodValue.Text = zasoby.FoodQuantity.ToString();

            // Sawmill
            label_SawmillLevel.Text = "Level: " + tartak.BuildingLevel.ToString();
            label_SawmillGoldCost.Text = tartak.PriceUpgradeGold.ToString();
            label_SawmillWoodCost.Text = tartak.PriceUpgradeWood.ToString();
            label_SawmillStoneCost.Text = tartak.PriceUpgradeStone.ToString();

            // Stone Pit
            label_StonePitLevel.Text = "Level: " + kamieniolom.BuildingLevel.ToString();
            label_StonePitGoldCost.Text = kamieniolom.PriceUpgradeGold.ToString();
            label_StonePitWoodCost.Text = kamieniolom.PriceUpgradeWood.ToString();
            label_StonePitStoneCost.Text = kamieniolom.PriceUpgradeStone.ToString();

            // Iron Mine
            label_IronMineLevel.Text = "Level: " + kopalnia_zelaza.BuildingLevel.ToString();
            label_IronMineGoldCost.Text = kopalnia_zelaza.PriceUpgradeGold.ToString();
            label_IronMineWoodCost.Text = kopalnia_zelaza.PriceUpgradeWood.ToString();
            label_IronMineStoneCost.Text = kopalnia_zelaza.PriceUpgradeStone.ToString();

            // Farm
            label_FarmLevel.Text = "Level: " + farma.BuildingLevel.ToString();
            label_FarmGoldCost.Text = farma.PriceUpgradeGold.ToString();
            label_FarmWoodCost.Text = farma.PriceUpgradeWood.ToString();
            label_FarmStoneCost.Text = farma.PriceUpgradeStone.ToString();

            // Hut
            label_HutLevel.Text = "Level: " + domek.BuildingLevel.ToString();
            label_HutGoldCost.Text = domek.PriceUpgradeGold.ToString();
            label_HutWoodCost.Text = domek.PriceUpgradeWood.ToString();
            label_HutStoneCost.Text = domek.PriceUpgradeStone.ToString();

            // Barracks
            label_BarracksLevel.Text = "Level: " + koszary.BuildingLevel.ToString();
            label_BarracksGoldCost.Text = koszary.PriceUpgradeGold.ToString();
            label_BarracksWoodCost.Text = koszary.PriceUpgradeWood.ToString();
            label_BarracksStoneCost.Text = koszary.PriceUpgradeStone.ToString();

            // Army
            label_PikemanQuantity.Text = "Quantity: " + piknier.Quantity.ToString();
            label_PikemanLevel.Text = "Level: " + piknier.Level.ToString();
            label_ArcherQuantity.Text = "Quantity: " + strzelec.Quantity.ToString();
            label_ArcherLevel.Text = "Level: " + strzelec.Level.ToString();
            label_HorsemanQuantity.Text = "Quantity: " + jezdziec.Quantity.ToString();
            label_HorsemanLevel.Text = "Level: " + jezdziec.Level.ToString();

            // disable army buttons
            button_PikemanBuy.IsEnabled = false;
            button_ArcherBuy.IsEnabled = false;
            button_HorsemanBuy.IsEnabled = false;
            button_PikemanUpgrade.IsEnabled = false;
            button_ArcherUpgrade.IsEnabled = false;
            button_HorsemanUpgrade.IsEnabled = false;

            // set timers
            goldTimer.Tick += goldTimer_Tick;
            goldTimer.Interval = new TimeSpan(0, 0, 1);
            goldTimer.Start();
            woodTimer.Tick += woodTimer_Tick;
            woodTimer.Interval = new TimeSpan(0, 0, 1);
            woodTimer.Start();
            stoneTimer.Tick += stoneTimer_Tick;
            stoneTimer.Interval = new TimeSpan(0, 0, 1);
            stoneTimer.Start();
            ironTimer.Tick += ironTimer_Tick;
            ironTimer.Interval = new TimeSpan(0, 0, 1);
            ironTimer.Start();
            foodTimer.Tick += foodTimer_Tick;
            foodTimer.Interval = new TimeSpan(0, 0, 1);
            foodTimer.Start();
            foodMinusTimer.Tick += foodMinusTimer_Tick;
            foodMinusTimer.Interval = new TimeSpan(0, 0, 10);
            foodMinusTimer.Start();


            // army buy and upgrade tooltips
            button_PikemanBuy.ToolTip = "Gold: " + piknier.PriceBuyGold.ToString() + " | Iron: " + piknier.PriceBuyIron.ToString() + " | Food: " + piknier.PriceBuyFood.ToString();
            button_ArcherBuy.ToolTip = "Gold: " + strzelec.PriceBuyGold.ToString() + " | Iron: " + strzelec.PriceBuyIron.ToString() + " | Food: " + strzelec.PriceBuyFood.ToString();
            button_HorsemanBuy.ToolTip = "Gold: " + jezdziec.PriceBuyGold.ToString() + " | Iron: " + jezdziec.PriceBuyIron.ToString() + " | Food: " + jezdziec.PriceBuyFood.ToString();
            button_PikemanUpgrade.ToolTip = "Gold: " + piknier.PriceUpgradeGold.ToString() + " | Iron: " + piknier.PriceUpgradeIron.ToString() + " | Food: " + piknier.PriceUpgradeFood.ToString();
            button_ArcherUpgrade.ToolTip = "Gold: " + strzelec.PriceUpgradeGold.ToString() + " | Iron: " + strzelec.PriceUpgradeIron.ToString() + " | Food: " + strzelec.PriceUpgradeFood.ToString();
            button_HorsemanUpgrade.ToolTip = "Gold: " + jezdziec.PriceUpgradeGold.ToString() + " | Iron: " + jezdziec.PriceUpgradeIron.ToString() + " | Food: " + jezdziec.PriceUpgradeFood.ToString();

            // barracks level 1 tooltip
            button_BarracksUpgrade.ToolTip = "Unlocks PIKEMEN";

            label_Ciekawostka.Content = c1.PobierzTekst();
        }

        //#################################################
        // TIMERS
        //#################################################
        private void goldTimer_Tick(object sender, EventArgs e)
        {
            zasoby.AddGold(goldDropValue);
            label_GoldValue.Text = zasoby.GoldQuantity.ToString();
        }

        private void woodTimer_Tick(object sender, EventArgs e)
        {
            zasoby.AddWood(woodDropValue);
            label_WoodValue.Text = zasoby.WoodQuantity.ToString();
        }

        private void stoneTimer_Tick(object sender, EventArgs e)
        {
            zasoby.AddStone(stoneDropValue);
            label_StoneValue.Text = zasoby.StoneQuantity.ToString();
        }

        private void ironTimer_Tick(object sender, EventArgs e)
        {
            zasoby.AddIron(ironDropValue);
            label_IronValue.Text = zasoby.IronQuantity.ToString();
        }

        private void foodTimer_Tick(object sender, EventArgs e)
        {
            zasoby.AddFood(foodDropValue);
            label_FoodValue.Text = zasoby.FoodQuantity.ToString();
        }

        private void foodMinusTimer_Tick(object sender, EventArgs e)
        {
            int x = piknier.Quantity + jezdziec.Quantity + strzelec.Quantity;
            if(x>0)
            {
                if (zasoby.FoodQuantity - x >= 0)
                {
                    for (int i = 0; i < x; i++)
                        zasoby.RemoveFood(1);

                    label_FoodValue.Text = zasoby.FoodQuantity.ToString();

                    // show up the tax message
                    MessageBox.Show("Food tax taken. " + x + " food removed.");
                }
                else
                    desertion();
            }
        }

        private void desertion()
        {
            int randomNumber = rnd.Next(piknier.Quantity);
            int randomNumber2 = rnd.Next(strzelec.Quantity);
            int randomNumber3 = rnd.Next(jezdziec.Quantity);

            if (piknier.Quantity > 0)
            {
                piknier.RemoveQuantity(randomNumber);
                piknier.RemovePower(randomNumber * 5);
            }
            if (strzelec.Quantity > 0)
            {
                strzelec.RemoveQuantity(randomNumber2);
                strzelec.RemovePower(randomNumber2 * 5);
            }
            if (jezdziec.Quantity > 0)
            {
                jezdziec.RemoveQuantity(randomNumber3);
                jezdziec.RemovePower(randomNumber3 * 5);
            }

            // update labels
            label_ArmyPower.Text = "Army power: " + (piknier.Power + strzelec.Power + jezdziec.Power).ToString();
            label_PikemanQuantity.Text = "Quantity: " + piknier.Quantity.ToString();
            label_ArcherQuantity.Text = "Quantity: " + strzelec.Quantity.ToString();
            label_HorsemanQuantity.Text = "Quantity: " + jezdziec.Quantity.ToString();
            label_peopleValue.Text = (piknier.Quantity + strzelec.Quantity + jezdziec.Quantity).ToString();

            // show up desertion message
            MessageBox.Show("People are starving!\nSoldiers have deserted.\n" +
                randomNumber + " pikemen, " +
                randomNumber2 + " archers, " +
                randomNumber3 + " horsemen run away.");
        }

        //#################################################
        // BUILDING UPGRADE BUTTONS
        //#################################################
        // sawmill upgrade button
        private void button_SawmillUpgrade_Click(object sender, RoutedEventArgs e)
        {
           if(tartak.BuildingLevel < 6 && zasoby.GoldQuantity - tartak.PriceUpgradeGold >= 0 && zasoby.WoodQuantity - tartak.PriceUpgradeWood >= 0 && zasoby.StoneQuantity - tartak.PriceUpgradeStone >= 0)
            {
                // increase the drop value
                woodDropValue++;

                // remove required resources
                zasoby.RemoveGold((int)tartak.PriceUpgradeGold);
                zasoby.RemoveWood((int)tartak.PriceUpgradeWood);
                zasoby.RemoveStone((int)tartak.PriceUpgradeStone);

                // upgrade building
                tartak.Upgrade(50, 30, 30);

                //update labels
                label_SawmillLevel.Text = "Level: " + tartak.BuildingLevel.ToString();
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_WoodValue.Text = zasoby.WoodQuantity.ToString();
                label_StoneValue.Text = zasoby.StoneQuantity.ToString();
                label_WoodIncome.Text = "+ " + woodDropValue.ToString() + "/sec";
                if (label_SawmillLevel.Text == "Level: 6")
                {
                    label_SawmillGoldCost.Text = "--";
                    label_SawmillWoodCost.Text = "--";
                    label_SawmillStoneCost.Text = "--";
                }
                else
                {
                    label_SawmillGoldCost.Text = tartak.PriceUpgradeGold.ToString();
                    label_SawmillWoodCost.Text = tartak.PriceUpgradeWood.ToString();
                    label_SawmillStoneCost.Text = tartak.PriceUpgradeStone.ToString();
                }

                // disable upgrade button when level == 6
                if(tartak.BuildingLevel == 6)
                {
                    button_SawmillUpgrade.IsEnabled = false;
                }
            }
           else
                // show error dialog window
                MessageBox.Show("Not enough resources!");
        }

        // farm upgrade button
        private void button_FarmUpgrade_Click(object sender, RoutedEventArgs e)
        {
            if (farma.BuildingLevel < 6 && zasoby.GoldQuantity - farma.PriceUpgradeGold >= 0 && zasoby.WoodQuantity - farma.PriceUpgradeWood >= 0 && zasoby.StoneQuantity - farma.PriceUpgradeStone >= 0)
            {
                // increase the drop value
                foodDropValue++;

                // remove required resources
                zasoby.RemoveGold((int)farma.PriceUpgradeGold);
                zasoby.RemoveWood((int)farma.PriceUpgradeWood);
                zasoby.RemoveStone((int)farma.PriceUpgradeStone);

                // upgrade building
                farma.Upgrade(50, 30, 30);

                //update labels
                label_FarmLevel.Text = "Level: " + farma.BuildingLevel.ToString();
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_WoodValue.Text = zasoby.WoodQuantity.ToString();
                label_StoneValue.Text = zasoby.StoneQuantity.ToString();
                label_FoodIncome.Text = "+ " + foodDropValue.ToString() + "/sec";
                if (label_FarmLevel.Text == "Level: 6")
                {
                    label_FarmGoldCost.Text = "--";
                    label_FarmWoodCost.Text = "--";
                    label_FarmStoneCost.Text = "--";
                }
                else
                {
                    label_FarmGoldCost.Text = farma.PriceUpgradeGold.ToString();
                    label_FarmWoodCost.Text = farma.PriceUpgradeWood.ToString();
                    label_FarmStoneCost.Text = farma.PriceUpgradeStone.ToString();
                }

                // disable upgrade button when level == 6
                if (farma.BuildingLevel == 6)
                {
                    button_FarmUpgrade.IsEnabled = false;
                }
            }
            else
                // show error dialog window
                MessageBox.Show("Not enough resources!");        
        }

        // stone pit upgrade
        private void button_StonePitUpgrade_Click(object sender, RoutedEventArgs e)
        {
            if (kamieniolom.BuildingLevel < 6 && zasoby.GoldQuantity - kamieniolom.PriceUpgradeGold >= 0 && zasoby.WoodQuantity - kamieniolom.PriceUpgradeWood >= 0 && zasoby.StoneQuantity - kamieniolom.PriceUpgradeStone >= 0)
            {
                // increase the drop value
                stoneDropValue++;

                // remove required resources
                zasoby.RemoveGold((int)kamieniolom.PriceUpgradeGold);
                zasoby.RemoveWood((int)kamieniolom.PriceUpgradeWood);
                zasoby.RemoveStone((int)kamieniolom.PriceUpgradeStone);

                // upgrade building
                kamieniolom.Upgrade(50, 30, 30);

                //update labels
                label_StonePitLevel.Text = "Level: " + kamieniolom.BuildingLevel.ToString();
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_WoodValue.Text = zasoby.WoodQuantity.ToString();
                label_StoneValue.Text = zasoby.StoneQuantity.ToString();
                label_StoneIncome.Text = "+ " + stoneDropValue.ToString() + "/sec";
                if (label_StonePitLevel.Text == "Level: 6")
                {
                    label_StonePitGoldCost.Text = "--";
                    label_StonePitWoodCost.Text = "--";
                    label_StonePitStoneCost.Text = "--";
                }
                else
                {
                    label_StonePitGoldCost.Text = kamieniolom.PriceUpgradeGold.ToString();
                    label_StonePitWoodCost.Text = kamieniolom.PriceUpgradeWood.ToString();
                    label_StonePitStoneCost.Text = kamieniolom.PriceUpgradeStone.ToString();
                }

                // disable upgrade button when level == 6
                if (kamieniolom.BuildingLevel == 6)
                {
                    button_StonePitUpgrade.IsEnabled = false;
                }
            }
            else
                // show error dialog window
                MessageBox.Show("Not enough resources!");
        }
    
        // iron mine upgrade button
        private void button_IronMineUpgrade_Click(object sender, RoutedEventArgs e)
        {
            if (kopalnia_zelaza.BuildingLevel < 6 && zasoby.GoldQuantity - kopalnia_zelaza.PriceUpgradeGold >= 0 && zasoby.WoodQuantity - kopalnia_zelaza.PriceUpgradeWood >= 0 && zasoby.StoneQuantity - kopalnia_zelaza.PriceUpgradeStone >= 0)
            {
                // increase the drop value
                ironDropValue++;

                // remove required resources
                zasoby.RemoveGold((int)kopalnia_zelaza.PriceUpgradeGold);
                zasoby.RemoveWood((int)kopalnia_zelaza.PriceUpgradeWood);
                zasoby.RemoveStone((int)kopalnia_zelaza.PriceUpgradeStone);

                // upgrade building
                kopalnia_zelaza.Upgrade(50, 30, 30);

                //update labels
                label_IronMineLevel.Text = "Level: " + kopalnia_zelaza.BuildingLevel.ToString();
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_WoodValue.Text = zasoby.WoodQuantity.ToString();
                label_StoneValue.Text = zasoby.StoneQuantity.ToString();
                label_IronIncome.Text = "+ " + ironDropValue.ToString() + "/sec";
                if (label_IronMineLevel.Text == "Level: 6")
                {
                    label_IronMineGoldCost.Text = "--";
                    label_IronMineWoodCost.Text = "--";
                    label_IronMineStoneCost.Text = "--";
                }
                else
                {
                    label_IronMineGoldCost.Text = kopalnia_zelaza.PriceUpgradeGold.ToString();
                    label_IronMineWoodCost.Text = kopalnia_zelaza.PriceUpgradeWood.ToString();
                    label_IronMineStoneCost.Text = kopalnia_zelaza.PriceUpgradeStone.ToString();
                }

                // disable upgrade button when level == 6
                if (kopalnia_zelaza.BuildingLevel == 6)
                {
                    button_IronMineUpgrade.IsEnabled = false;
                }
            }
            else
                // show error dialog window
                MessageBox.Show("Not enough resources!");
        }

        // hut upgrade button
        private void button_HutUpgrade_Click(object sender, RoutedEventArgs e)
        {
            if (domek.BuildingLevel < 6 && zasoby.GoldQuantity - domek.PriceUpgradeGold >= 0 && zasoby.WoodQuantity - domek.PriceUpgradeWood >= 0 && zasoby.StoneQuantity - domek.PriceUpgradeStone >= 0)
            {
                // increase the drop value
                goldDropValue++;

                // remove required resources
                zasoby.RemoveGold((int)domek.PriceUpgradeGold);
                zasoby.RemoveWood((int)domek.PriceUpgradeWood);
                zasoby.RemoveStone((int)domek.PriceUpgradeStone);

                // upgrade building
                domek.Upgrade(50, 30, 30);
                armia.AddArmyLimit(10);

                //update labels
                label_HutLevel.Text = "Level: " + domek.BuildingLevel.ToString();
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_WoodValue.Text = zasoby.WoodQuantity.ToString();
                label_StoneValue.Text = zasoby.StoneQuantity.ToString();
                label_GoldIncome.Text = "+ " + goldDropValue.ToString() + "/sec";
                if (label_HutLevel.Text == "Level: 6")
                {
                    label_HutGoldCost.Text = "--";
                    label_HutWoodCost.Text = "--";
                    label_HutStoneCost.Text = "--";
                }
                else
                {
                    label_HutGoldCost.Text = domek.PriceUpgradeGold.ToString();
                    label_HutWoodCost.Text = domek.PriceUpgradeWood.ToString();
                    label_HutStoneCost.Text = domek.PriceUpgradeStone.ToString();
                }
                label_maxPeopleValue.Text = "Limit: " + armia.ArmyLimit.ToString();

                // disable upgrade button when level == 6
                if (domek.BuildingLevel == 6)
                {
                    button_HutUpgrade.IsEnabled = false;
                }
            }
            else
                // show error dialog window
                MessageBox.Show("Not enough resources!");
        }

        // barracks update button
        private void button_BarracksUpgrade_Click(object sender, RoutedEventArgs e)
        {
            
            if (koszary.BuildingLevel < 4 && zasoby.GoldQuantity - koszary.PriceUpgradeGold >= 0 && zasoby.WoodQuantity - koszary.PriceUpgradeWood >= 0 && zasoby.StoneQuantity - koszary.PriceUpgradeStone >= 0)
            {
                // update tooltips and enable army buttons
                if(koszary.BuildingLevel == 1)
                {
                    button_BarracksUpgrade.ToolTip = "Unlocks ARCHERS";
                    button_PikemanBuy.IsEnabled = true;
                    button_PikemanUpgrade.IsEnabled = true;
                }
                else if (koszary.BuildingLevel == 2)
                {
                    button_BarracksUpgrade.ToolTip = "Unlocks HORSEMEN";
                    button_ArcherBuy.IsEnabled = true;
                    button_ArcherUpgrade.IsEnabled = true;
                }
                else if (koszary.BuildingLevel == 3)
                {        
                    button_HorsemanBuy.IsEnabled = true;
                    button_HorsemanUpgrade.IsEnabled = true;
                }

                // remove required resources
                zasoby.RemoveGold((int)koszary.PriceUpgradeGold);
                zasoby.RemoveWood((int)koszary.PriceUpgradeWood);
                zasoby.RemoveStone((int)koszary.PriceUpgradeStone);

                // upgrade building
                koszary.Upgrade(50, 30, 30);

                //update labels
                label_BarracksLevel.Text = "Level: " + koszary.BuildingLevel.ToString();
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_WoodValue.Text = zasoby.WoodQuantity.ToString();
                label_StoneValue.Text = zasoby.StoneQuantity.ToString();
                label_WoodIncome.Text = "+ " + woodDropValue.ToString() + "/sec";
                if (label_BarracksLevel.Text == "Level: 4")
                {
                    label_BarracksGoldCost.Text = "--";
                    label_BarracksWoodCost.Text = "--";
                    label_BarracksStoneCost.Text = "--";
                }
                else
                {
                    label_BarracksGoldCost.Text = koszary.PriceUpgradeGold.ToString();
                    label_BarracksWoodCost.Text = koszary.PriceUpgradeWood.ToString();
                    label_BarracksStoneCost.Text = koszary.PriceUpgradeStone.ToString();
                }

                // disable upgrade button when level == 6
                if (koszary.BuildingLevel == 4)
                {
                    button_BarracksUpgrade.IsEnabled = false;
                }
            }
            else
                // show error dialog window
                MessageBox.Show("Not enough resources!");
            }

        //#################################################
        // ARMY BUY BUTTONS
        //#################################################
        // pikeman buy button
        private void button_PikemanBuy_Click(object sender, RoutedEventArgs e)
        {
            int quantity = 1;

            if(piknier.Quantity + strzelec.Quantity + jezdziec.Quantity + quantity <= armia.ArmyLimit
                && zasoby.GoldQuantity - piknier.PriceBuyGold >= 0 && zasoby.IronQuantity - piknier.PriceBuyIron >= 0 && zasoby.FoodQuantity - piknier.PriceBuyFood >= 0)
            {
                piknier.Buy(5, quantity, 10, 10, 10);

                // remove resources
                zasoby.RemoveGold((int)piknier.PriceBuyGold);
                zasoby.RemoveIron((int)piknier.PriceBuyIron);
                zasoby.RemoveFood((int)piknier.PriceBuyFood);

                // update labels
                label_PikemanQuantity.Text = "Quantity: " + piknier.Quantity.ToString();
                int x = piknier.Quantity + strzelec.Quantity + jezdziec.Quantity;
                label_peopleValue.Text = x.ToString();
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_IronValue.Text = zasoby.IronQuantity.ToString();
                label_FoodValue.Text = zasoby.FoodQuantity.ToString();
                label_ArmyPower.Text = "Army power: " + (piknier.Power + strzelec.Power + jezdziec.Power).ToString();

                // update tooltip
                button_PikemanBuy.ToolTip = "Gold: " + piknier.PriceBuyGold.ToString() + " | Iron: " + piknier.PriceBuyIron.ToString() + " | Food: " + piknier.PriceBuyFood.ToString();
            }
            else if (piknier.Quantity + strzelec.Quantity + jezdziec.Quantity + quantity > armia.ArmyLimit)
                MessageBox.Show("Army limit exceeded!");
            else
                MessageBox.Show("Not enough resources!");
        }

        // archer buy button
        private void button_ArcherBuy_Click(object sender, RoutedEventArgs e)
        {
            int quantity = 1;

            if (strzelec.Quantity + strzelec.Quantity + jezdziec.Quantity + quantity <= armia.ArmyLimit
                && zasoby.GoldQuantity - strzelec.PriceBuyGold >= 0 && zasoby.IronQuantity - strzelec.PriceBuyIron >= 0 && zasoby.FoodQuantity - strzelec.PriceBuyFood >= 0)
            {
                strzelec.Buy(5, quantity, 20, 20, 20);

                // remove resources
                zasoby.RemoveGold((int)strzelec.PriceBuyGold);
                zasoby.RemoveIron((int)strzelec.PriceBuyIron);
                zasoby.RemoveFood((int)strzelec.PriceBuyFood);

                // update labels
                label_ArcherQuantity.Text = "Quantity: " + strzelec.Quantity.ToString();
                int x = piknier.Quantity + strzelec.Quantity + jezdziec.Quantity;
                label_peopleValue.Text = x.ToString();
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_IronValue.Text = zasoby.IronQuantity.ToString();
                label_FoodValue.Text = zasoby.FoodQuantity.ToString();
                label_ArmyPower.Text = "Army power: " + (piknier.Power + strzelec.Power + jezdziec.Power).ToString();

                // update tooltip
                button_ArcherBuy.ToolTip = "Gold: " + strzelec.PriceBuyGold.ToString() + " | Iron: " + strzelec.PriceBuyIron.ToString() + " | Food: " + strzelec.PriceBuyFood.ToString();
            }
            else if (piknier.Quantity + strzelec.Quantity + jezdziec.Quantity + quantity > armia.ArmyLimit)
                MessageBox.Show("Army limit exceeded!");
            else
                MessageBox.Show("Not enough resources!");
        }

        // horseman buy button
        private void button_HorsemanBuy_Click(object sender, RoutedEventArgs e)
        {
            int quantity = 1;

            if (jezdziec.Quantity + strzelec.Quantity + jezdziec.Quantity + quantity <= armia.ArmyLimit
                && zasoby.GoldQuantity - jezdziec.PriceBuyGold >= 0 && zasoby.IronQuantity - jezdziec.PriceBuyIron >= 0 && zasoby.FoodQuantity - jezdziec.PriceBuyFood >= 0)
            {
                jezdziec.Buy(5, quantity, 30, 30, 30);

                // remove resources
                zasoby.RemoveGold((int)jezdziec.PriceBuyGold);
                zasoby.RemoveIron((int)jezdziec.PriceBuyIron);
                zasoby.RemoveFood((int)jezdziec.PriceBuyFood);

                // update labels
                label_HorsemanQuantity.Text = "Quantity: " + jezdziec.Quantity.ToString();
                int x = piknier.Quantity + strzelec.Quantity + jezdziec.Quantity;
                label_peopleValue.Text = x.ToString();
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_IronValue.Text = zasoby.IronQuantity.ToString();
                label_FoodValue.Text = zasoby.FoodQuantity.ToString();
                label_ArmyPower.Text = "Army power: " + (piknier.Power + strzelec.Power + jezdziec.Power).ToString();

                // update tooltip
                button_HorsemanBuy.ToolTip = "Gold: " + jezdziec.PriceBuyGold.ToString() + " | Iron: " + jezdziec.PriceBuyIron.ToString() + " | Food: " + jezdziec.PriceBuyFood.ToString();
            }
            else if (piknier.Quantity + strzelec.Quantity + jezdziec.Quantity + quantity > armia.ArmyLimit)
                MessageBox.Show("Army limit exceeded!");
            else
                MessageBox.Show("Not enough resources!");
        }

        //#################################################
        // ARMY UPGRADE BUTTONS
        //#################################################
        // pikeman upgrade button
        private void button_PikemanUpgrade_Click(object sender, RoutedEventArgs e)
        {
            if(piknier.Level < 6 
                && zasoby.GoldQuantity - piknier.PriceUpgradeGold >= 0 
                && zasoby.IronQuantity - piknier.PriceUpgradeIron >= 0
                && zasoby.FoodQuantity - piknier.PriceUpgradeFood >= 0)
            {
                // remove resources
                zasoby.RemoveGold((int)piknier.PriceUpgradeGold);
                zasoby.RemoveIron((int)piknier.PriceUpgradeIron);
                zasoby.RemoveFood((int)piknier.PriceUpgradeFood);

                piknier.Upgrade(1.5, 50, 50, 50);

                //update labels
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_IronValue.Text = zasoby.IronQuantity.ToString();
                label_FoodValue.Text = zasoby.FoodQuantity.ToString();
                label_ArmyPower.Text = "Army power: " + (piknier.Power + strzelec.Power + jezdziec.Power).ToString();
                label_PikemanLevel.Text = "Level: " + piknier.Level.ToString();

                //update tooltip
                button_PikemanUpgrade.ToolTip = "Gold: " + piknier.PriceUpgradeGold.ToString() + " | Iron: " + piknier.PriceUpgradeIron.ToString() + " | Food: " + piknier.PriceUpgradeFood.ToString();
            }
            else
                MessageBox.Show("Not enough resources!");

            if (piknier.Level == 6)
                button_PikemanUpgrade.IsEnabled = false;
        }

        // archer upgrade button
        private void button_ArcherUpgrade_Click(object sender, RoutedEventArgs e)
        {
            if (strzelec.Level < 6
                && zasoby.GoldQuantity - strzelec.PriceUpgradeGold >= 0
                && zasoby.IronQuantity - strzelec.PriceUpgradeIron >= 0
                && zasoby.FoodQuantity - strzelec.PriceUpgradeFood >= 0)
            {
                // remove resources
                zasoby.RemoveGold((int)strzelec.PriceUpgradeGold);
                zasoby.RemoveIron((int)strzelec.PriceUpgradeIron);
                zasoby.RemoveFood((int)strzelec.PriceUpgradeFood);

                strzelec.Upgrade(1.5, 50, 50, 50);

                //update labels
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_IronValue.Text = zasoby.IronQuantity.ToString();
                label_FoodValue.Text = zasoby.FoodQuantity.ToString();
                label_ArmyPower.Text = "Army power: " + (piknier.Power + strzelec.Power + jezdziec.Power).ToString();
                label_ArcherLevel.Text = "Level: " + strzelec.Level.ToString();

                //update tooltip
                button_ArcherUpgrade.ToolTip = "Gold: " + strzelec.PriceUpgradeGold.ToString() + " | Iron: " + strzelec.PriceUpgradeIron.ToString() + " | Food: " + strzelec.PriceUpgradeFood.ToString();
            }
            else
                MessageBox.Show("Not enough resources!");

            if (strzelec.Level == 6)
                button_ArcherUpgrade.IsEnabled = false;
        }

        // archer upgrade button
        private void button_HorsemanUpgrade_Click(object sender, RoutedEventArgs e)
        {
            if (jezdziec.Level < 6
                && zasoby.GoldQuantity - jezdziec.PriceUpgradeGold >= 0
                && zasoby.IronQuantity - jezdziec.PriceUpgradeIron >= 0
                && zasoby.FoodQuantity - jezdziec.PriceUpgradeFood >= 0)
            {
                // remove resources
                zasoby.RemoveGold((int)jezdziec.PriceUpgradeGold);
                zasoby.RemoveIron((int)jezdziec.PriceUpgradeIron);
                zasoby.RemoveFood((int)jezdziec.PriceUpgradeFood);

                jezdziec.Upgrade(1.5, 50, 50, 50);

                //update labels
                label_GoldValue.Text = zasoby.GoldQuantity.ToString();
                label_IronValue.Text = zasoby.IronQuantity.ToString();
                label_FoodValue.Text = zasoby.FoodQuantity.ToString();
                label_ArmyPower.Text = "Army power: " + (piknier.Power + strzelec.Power + jezdziec.Power).ToString();
                label_HorsemanLevel.Text = "Level: " + jezdziec.Level.ToString();

                //update tooltip
                button_HorsemanUpgrade.ToolTip = "Gold: " + jezdziec.PriceUpgradeGold.ToString() + " | Iron: " + jezdziec.PriceUpgradeIron.ToString() + " | Food: " + jezdziec.PriceUpgradeFood.ToString();
            }
            else
                MessageBox.Show("Not enough resources!");

            if (jezdziec.Level == 6)
                button_HorsemanUpgrade.IsEnabled = false;
        }

        //#################################################
        // ENEMY INTERACTION BUTTONS
        //#################################################
        // attack enemy button
        private void button_EnemyAttack_Click(object sender, RoutedEventArgs e)
        {
            if(piknier.Power + strzelec.Power + jezdziec.Power >= wrog.Power)
            {
                // add resources as a reward
                zasoby.AddGold(wrog.RewardGold);
                zasoby.AddWood(wrog.RewardFood);
                zasoby.AddStone(wrog.RewardStone);
                zasoby.AddIron(wrog.RewardIron);
                zasoby.AddFood(wrog.RewardFood);

                // enemy level 1
                if (label_EnemyLevel.Text == "Level: 1")
                {
                    //update enemy values
                    wrog.RewardGold = 1000;
                    wrog.RewardWood = 1000;
                    wrog.RewardStone = 1000;
                    wrog.RewardIron = 1000;
                    wrog.RewardFood = 1000;
                    wrog.Power = 30;

                    // update enemy labels
                    label_EnemyLevel.Text = "Level: 2";
                    label_EnemyName.Text = "Name: Gandalf";
                    label_EnemyPower.Text = "Power: " + wrog.Power.ToString();
                }

                // enemy level 2
                else if (label_EnemyLevel.Text == "Level: 2")
                {
                    //update enemy values
                    wrog.RewardGold = 2000;
                    wrog.RewardWood = 2000;
                    wrog.RewardStone = 2000;
                    wrog.RewardIron = 2000;
                    wrog.RewardFood = 2000;
                    wrog.Power = 60;

                    // update enemy labels
                    label_EnemyLevel.Text = "Level: 3";
                    label_EnemyName.Text = "Name: Geralt";
                    label_EnemyPower.Text = "Power: " + wrog.Power.ToString();
                }

                // enemy level 3
                else if (label_EnemyLevel.Text == "Level: 3")
                {
                    //update enemy values
                    wrog.RewardGold = 3000;
                    wrog.RewardWood = 3000;
                    wrog.RewardStone = 3000;
                    wrog.RewardIron = 3000;
                    wrog.RewardFood = 3000;
                    wrog.Power = 90;

                    // update enemy labels
                    label_EnemyLevel.Text = "Level: 4";
                    label_EnemyName.Text = "Name: Helga";
                    label_EnemyPower.Text = "Power: " + wrog.Power.ToString();
                }

                // enemy level 4
                else if (label_EnemyLevel.Text == "Level: 4")
                {
                    // disable attack button
                    button_EnemyAttack.IsEnabled = false;

                    // update enemy labels
                    label_EnemyLevel.Text = "Level: NONE";
                    label_EnemyName.Text = "Name: NONE";
                    label_EnemyPower.Text = "Power: NONE";

                    label_ArmySection.Text = "YOU HAVE DEFEATED ALL THE ENEMIES";

                }
                // kill my units
                int randomNumber = rnd.Next(piknier.Quantity);
                int randomNumber2 = rnd.Next(strzelec.Quantity);
                int randomNumber3 = rnd.Next(jezdziec.Quantity);

                if (piknier.Quantity > 0)
                {
                    piknier.RemoveQuantity(randomNumber);
                    piknier.RemovePower(randomNumber * 5);
                }
                if (strzelec.Quantity > 0)
                {
                    strzelec.RemoveQuantity(randomNumber2);
                    strzelec.RemovePower(randomNumber * 5);
                }
                if (jezdziec.Quantity > 0)
                {
                    jezdziec.RemoveQuantity(randomNumber3);
                    jezdziec.RemovePower(randomNumber * 5);
                }

                MessageBox.Show("You won!\n" + 
                    randomNumber + " pikemen, " + 
                    randomNumber2 + " archers, " +
                    randomNumber3 + " horsemen died.");
            }

            // if my army is weaker all my soldiers die
            else
            {
                // show up the error message
                MessageBox.Show("You lost!\n All your soldiers died!");

                // kill all the soldiers
                piknier.Quantity = 0;
                strzelec.Quantity = 0;
                jezdziec.Quantity = 0;

                // set army power to 0
                piknier.Power = 0;
                strzelec.Power = 0;
                jezdziec.Power = 0;
            }

            // update resource labels
            label_GoldValue.Text = zasoby.GoldQuantity.ToString();
            label_WoodValue.Text = zasoby.WoodQuantity.ToString();
            label_StoneValue.Text = zasoby.StoneQuantity.ToString();
            label_IronValue.Text = zasoby.IronQuantity.ToString();
            label_FoodValue.Text = zasoby.FoodQuantity.ToString();

            //update power label and unit quantity labels
            label_ArmyPower.Text = "Army power: " + (piknier.Power + strzelec.Power + jezdziec.Power).ToString();
            label_PikemanQuantity.Text = "Quantity: " + piknier.Quantity.ToString();
            label_ArcherQuantity.Text = "Quantity: " + strzelec.Quantity.ToString();
            label_HorsemanQuantity.Text = "Quantity: " + jezdziec.Quantity.ToString();
            label_peopleValue.Text = (piknier.Quantity + strzelec.Quantity + jezdziec.Quantity).ToString();
        }

        // credits button 
        private void button_Credits_Click(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("Code, idea: Szymon Wiśniewski\n" +
                "Icons: https://www.flaticon.com/authors/smashicons\n" +
                "https://www.flaticon.com/authors/freepik\n" +
                "https://www.flaticon.com/authors/roundicons\n" +
                "Building's images: Forge of Empires\n");
        }
    }
}
