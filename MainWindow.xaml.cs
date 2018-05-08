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

namespace MiddleAges
{
    /// <summary>
    /// Logika interakcji dla klasy MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        //#################################################
        // Constructor
        //#################################################
        public MainWindow()
        {
            InitializeComponent();

            // Objects declaration
            Resource zasoby = new Resource(5000, 5000, 5000, 5000, 1000);

            // Set all the labels
            // resources
            label_GoldValue.Text = zasoby.GoldQuantity.ToString();
            label_WoodValue.Text = zasoby.WoodQuantity.ToString();
            label_StoneValue.Text = zasoby.StoneQuantity.ToString();
            label_IronValue.Text = zasoby.IronQuantity.ToString();
            label_FoodValue.Text = zasoby.FoodQuantity.ToString();
        }
    }
}
