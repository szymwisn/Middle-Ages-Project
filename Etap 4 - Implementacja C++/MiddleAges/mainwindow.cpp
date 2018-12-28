/*

Szymon Wiśniewski
Programowanie Obiektowe Projekt
2018

*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTimer>
#include <QDateTime>
#include <string>
#include "time.h"

#include "sawmill.h"
#include "stonepit.h"
#include "ironmine.h"
#include "farm.h"
#include "hut.h"
#include "barracks.h"

#include "resource.h"
#include "llimitexceedederror.h"
#include "noresourceerror.h"
#include "credits.h"
#include "youdied.h"
#include "fooddelete.h"
#include "desertiondialog.h"

#include "pikeman.h"
#include "horseman.h"
#include "archer.h"

#include "enemy.h"

//#####################################
// Objects declaration
SawMill tartak(150, 50, 30, 1.0, 1);
StonePit kamieniolom(300, 100, 30, 1.0, 1);
Farm farma(200, 50, 50, 1.0, 1);
IronMine kopalnia_zelaza(400, 100, 200, 1.0, 1);
Hut domek(50, 50, 50, 1.0, 1);
Barracks koszary(500, 300, 400, 1.0, 1);

MyArmy armia(0); // army limit
Pikeman piknier(0, 0, 1, 10, 10, 10); // power, quantity, level, gold, food, iron
Archer strzelec(0, 0, 1, 20, 20, 20);
Horseman jezdziec(0, 0, 1, 30, 30, 30);

Enemy wrog(10, 500, 500, 500, 500, 500);

Resource zasoby(5000, 5000, 5000, 5000, 1000);
//#####################################

//***********************************************************************************
//***********************************************************************************
//***********************************************************************************

//#####################################
// POLYMORPHISM, why didn't I learn that while writing the project :(
class Napis
{
public:
    virtual std::string pobierzTekst() = 0;
};

class Ciekawostka1 :public Napis
{
    std::string tekst;
public:
    Ciekawostka1(std::string x)
    {
        tekst = x;
    }

    std::string pobierzTekst()
    {
        return tekst;
    }
};

class Ciekawostka2 :public Napis
{
    std::string tekst;
public:
    Ciekawostka2(std::string x)
    {
        tekst = x;
    }

    std::string pobierzTekst()
    {
        return tekst;
    }
};

//#####################################

//***********************************************************************************
//***********************************************************************************
//***********************************************************************************

//#####################################
// CONSTRUCTOR
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // initialize randomize timer
    //srand(time(NULL));
    qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);

    //#####################################
    // set fixed window size
    this->setFixedSize(QSize(970, 654));
    //#####################################

    //#####################################
    // SLOTS
    connect(ui->pushButton_sawmillUpgrade, SIGNAL(released()),this,SLOT(upgradeBuildingButtonPressed()));
    connect(ui->pushButton_farmUpgrade, SIGNAL(released()),this,SLOT(upgradeBuildingButtonPressed()));
    connect(ui->pushButton_hutUpgrade, SIGNAL(released()),this,SLOT(upgradeBuildingButtonPressed()));
    connect(ui->pushButton_ironMineUpgrade, SIGNAL(released()),this,SLOT(upgradeBuildingButtonPressed()));
    connect(ui->pushButton_stonePitUpgrade, SIGNAL(released()),this,SLOT(upgradeBuildingButtonPressed()));
    connect(ui->pushButton_barracksUpgrade, SIGNAL(released()),this,SLOT(upgradeBuildingButtonPressed()));

    connect(ui->pushButton_Upgrade_Archer, SIGNAL(released()),this,SLOT(upgradeArmyButtonPressed()));
    connect(ui->pushButton_Upgrade_Horseman, SIGNAL(released()),this,SLOT(upgradeArmyButtonPressed()));
    connect(ui->pushButton_Upgrade_Pikeman, SIGNAL(released()),this,SLOT(upgradeArmyButtonPressed()));

    connect(ui->pushButton_Buy_Archer, SIGNAL(released()),this,SLOT(buyArmyButtonPressed()));
    connect(ui->pushButton_Buy_Horseman, SIGNAL(released()),this,SLOT(buyArmyButtonPressed()));
    connect(ui->pushButton_Buy_Pikeman, SIGNAL(released()),this,SLOT(buyArmyButtonPressed()));

    connect(ui->pushButtonCredits, SIGNAL(released()),this,SLOT(creditsButtonPressed()));

    connect(ui->pushButtonAttackEnemy, SIGNAL(released()),this,SLOT(attackEnemyButton()));
    //#####################################

    //#####################################
    // TIMERS
    timerGold = new QTimer(this);
    connect(timerGold, SIGNAL(timeout()), this, SLOT(goldIncome()));
    timerGold->start(1000);

    timerWood = new QTimer(this);
    connect(timerWood, SIGNAL(timeout()), this, SLOT(woodIncome()));
    timerWood->start(1000);

    timerStone = new QTimer(this);
    connect(timerStone, SIGNAL(timeout()), this, SLOT(stoneIncome()));
    timerStone->start(1000);

    timerIron = new QTimer(this);
    connect(timerIron, SIGNAL(timeout()), this, SLOT(ironIncome()));
    timerIron->start(1000);

    timerFood = new QTimer(this);
    connect(timerFood, SIGNAL(timeout()), this, SLOT(foodIncome()));
    timerFood->start(1000);

    timerFoodMinus = new QTimer(this);
    connect(timerFoodMinus, SIGNAL(timeout()), this, SLOT(foodMinus()));
    timerFoodMinus->start(10000); // 1 minute
    //#####################################

    //#####################################
    // DEFINE STARTING DROP VALUES
    goldDropValue = 0;
    woodDropValue = 0;
    stoneDropValue = 0;
    ironDropValue = 0;
    foodDropValue = 0;
    //#####################################

    //#####################################
    // SET DEFAULT LABELS
    // sawmill
    ui->label_sawmillLevel->setText("Level: " + QString::number(tartak.getLevel(), 'g', 15));
    ui->label_sawmillPrice_2->setText("G: " + QString::number(tartak.getPriceGold(), 'g', 15) + " | W: " + QString::number(tartak.getPriceWood(), 'g', 15) + " | S: " + QString::number(tartak.getPriceStone(), 'g', 15));
    ui->label_woodIncome->setText("+" + QString::number(woodDropValue) + " / sec");

    // stone pit
    ui->label_stonePitLevel->setText("Level: " + QString::number(kamieniolom.getLevel(), 'g', 15));
    ui->label_stonePitPrice_2->setText("G: " + QString::number(kamieniolom.getPriceGold(), 'g', 15) + " | W: " + QString::number(kamieniolom.getPriceWood(), 'g', 15) + " | S: " + QString::number(kamieniolom.getPriceStone(), 'g', 15));
    ui->label_stoneIncome->setText("+" + QString::number(stoneDropValue) + " / sec");

    // iron mine
    ui->label_ironMineLevel->setText("Level: " + QString::number(kopalnia_zelaza.getLevel(), 'g', 15));
    ui->label_ironMinePrice_2->setText("G: " + QString::number(kopalnia_zelaza.getPriceGold(), 'g', 15) + " | W: " + QString::number(kopalnia_zelaza.getPriceWood(), 'g', 15) + " | S: " + QString::number(kopalnia_zelaza.getPriceStone(), 'g', 15));
    ui->label_ironIncome->setText("+" + QString::number(ironDropValue) + " / sec");

    // farm
    ui->label_farmLevel->setText("Level: " + QString::number(farma.getLevel(), 'g', 15));
    ui->label_farmPrice_2->setText("G: " + QString::number(farma.getPriceGold(), 'g', 15) + " | W: " + QString::number(farma.getPriceWood(), 'g', 15) + " | S: " + QString::number(farma.getPriceStone(), 'g', 15));
    ui->label_foodIncome->setText("+" + QString::number(foodDropValue) + " / sec");

    // hut
    ui->label_hutLevel->setText("Level: " + QString::number(domek.getLevel(), 'g', 15));
    ui->label_hutPrice_2->setText("G: " + QString::number(domek.getPriceGold(), 'g', 15) + " | W: " + QString::number(domek.getPriceWood(), 'g', 15) + " | S: " + QString::number(domek.getPriceStone(), 'g', 15));
    ui->label_goldIncome->setText("+" + QString::number(goldDropValue) + " / sec");
    // PEOPLE LIMIT

    // barracks
    ui->label_barracksLevel->setText("Level: " + QString::number(koszary.getLevel(), 'g', 15));
    ui->label_barracksPrice_2->setText("G: " + QString::number(koszary.getPriceGold(), 'g', 15) + " | W: " + QString::number(koszary.getPriceWood(), 'g', 15) + " | S: " + QString::number(koszary.getPriceStone(), 'g', 15));
    // ARMY LIMIT ui->label_foodIncome->setText("+" + QString::number(foodDropValue) + " / sec");

    // resource values
    ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
    ui->label_woodValue->setText(QString::number(zasoby.getWoodQuantity(), 'g', 15));
    ui->label_stoneValue->setText(QString::number(zasoby.getStoneQuantity(), 'g', 15));
    ui->label_ironValue->setText(QString::number(zasoby.getIronQuantity(), 'g', 15));
    ui->label_foodValue->setText(QString::number(zasoby.getFoodQuantity(), 'g', 15));

    // army
    ui->labelPikemanQuantity->setText("Quantity: " + QString::number(piknier.getQuantity(), 'g', 15));
    ui->labelPikemanLevel->setText("Level: " + QString::number(piknier.getLevel(), 'g', 15));
    ui->labelArcherQuantity->setText("Quantity: " + QString::number(strzelec.getQuantity(), 'g', 15));
    ui->label_ArcherLevel->setText("Level: " + QString::number(strzelec.getLevel(), 'g', 15));
    ui->labelHorsemanQuantity->setText("Quantity: " + QString::number(jezdziec.getQuantity(), 'g', 15));
    ui->label_HorsemanLevel->setText("Level: " + QString::number(jezdziec.getLevel(), 'g', 15));

    ui->labelPikemanQuantity->setText("Quantity: " + QString::number(piknier.getQuantity()));
    ui->label_peopleValue->setText("People: " + QString::number(piknier.getQuantity() + strzelec.getQuantity() + jezdziec.getQuantity()));

    // people limit
    ui->label_peopleLimit->setText(" / " + QString::number(armia.getArmyLimit(), 'g', 15));

    // update army power label
    ui->labelArmyPower->setText("Army power: " + QString::number(piknier.getPower() + jezdziec.getPower() + strzelec.getPower(), 'g', 15));

    // update enemy labels
    ui->label_enemyLevel->setText("Level: 1");
    ui->label_enemyName->setText("Name: Mieszko");
    ui->label_enemyPower->setText("Power: " + QString::number(wrog.getPower(), 'g', 15));
    //#####################################

    //#####################################
    // disable some buttons
    ui->pushButton_Buy_Pikeman->setEnabled(false);
    ui->pushButton_Buy_Archer->setEnabled(false);
    ui->pushButton_Buy_Horseman->setEnabled(false);
    ui->pushButton_Upgrade_Horseman->setEnabled(false);
    ui->pushButton_Upgrade_Archer->setEnabled(false);
    ui->pushButton_Upgrade_Pikeman->setEnabled(false);
    //#####################################

    //#####################################
    // army button tooltips
    ui->pushButton_Buy_Pikeman->setToolTip("<font color='red'><b>Cost:</b></font> "
                                           "<ul>"
                                           "<li>Gold: " + QString::number(piknier.getPriceBuyGold()) + "</li>"
                                           "<li>Food: " + QString::number(piknier.getPriceBuyFood()) + "</li>"
                                           "<li>Iron: " + QString::number(piknier.getPriceBuyIron()) + "</li>"
                                           "</ul>");
    ui->pushButton_Buy_Horseman->setToolTip("<font color='red'><b>Cost:</b></font> "
                                           "<ul>"
                                           "<li>Gold: " + QString::number(jezdziec.getPriceBuyGold()) + "</li>"
                                           "<li>Food: " + QString::number(jezdziec.getPriceBuyFood()) + "</li>"
                                           "<li>Iron: " + QString::number(jezdziec.getPriceBuyIron()) + "</li>"
                                           "</ul>");
    ui->pushButton_Buy_Archer->setToolTip("<font color='red'><b>Cost:</b></font> "
                                           "<ul>"
                                           "<li>Gold: " + QString::number(strzelec.getPriceBuyGold()) + "</li>"
                                           "<li>Food: " + QString::number(strzelec.getPriceBuyFood()) + "</li>"
                                           "<li>Iron: " + QString::number(strzelec.getPriceBuyIron()) + "</li>"
                                           "</ul>");

    ui->pushButton_Upgrade_Pikeman->setToolTip("<font color='red'><b>Cost:</b></font> "
                                           "<ul>"
                                           "<li>Gold: " + QString::number(piknier.getPriceGold()) + "</li>"
                                           "<li>Food: " + QString::number(piknier.getPriceFood()) + "</li>"
                                           "<li>Iron: " + QString::number(piknier.getPriceIron()) + "</li>"
                                           "</ul>");
    ui->pushButton_Upgrade_Horseman->setToolTip("<font color='red'><b>Cost:</b></font> "
                                           "<ul>"
                                           "<li>Gold: " + QString::number(jezdziec.getPriceGold()) + "</li>"
                                           "<li>Food: " + QString::number(jezdziec.getPriceFood()) + "</li>"
                                           "<li>Iron: " + QString::number(jezdziec.getPriceIron()) + "</li>"
                                           "</ul>");
    ui->pushButton_Upgrade_Archer->setToolTip("<font color='red'><b>Cost:</b></font> "
                                           "<ul>"
                                           "<li>Gold: " + QString::number(strzelec.getPriceGold()) + "</li>"
                                           "<li>Food: " + QString::number(strzelec.getPriceFood()) + "</li>"
                                           "<li>Iron: " + QString::number(strzelec.getPriceIron()) + "</li>"
                                           "</ul>");

    // barracks level 1 tooltip
    ui->pushButton_barracksUpgrade->setToolTip("Unlocks <font color='green'><b>PIKEMEN</b></font>.");

    // building upgrade tooltips
    ui->pushButton_sawmillUpgrade->setToolTip("Increases <font color='green'><b>WOOD</b></font> drop rate.");
    ui->pushButton_stonePitUpgrade->setToolTip("Increases <font color='green'><b>STONE</b></font> drop rate.");
    ui->pushButton_ironMineUpgrade->setToolTip("Increases <font color='green'><b>IRON</b></font> drop rate.");
    ui->pushButton_farmUpgrade->setToolTip("Increases <font color='green'><b>FOOD</b></font> drop rate.");
    ui->pushButton_hutUpgrade->setToolTip("Increases <font color='green'><b>GOLD</b></font> drop rate and <font color='green'><b>PEOPLE</b></font> limit</font>.");
    //#####################################


    //#####################################
    // POLYMORPHISM, changing the ciekawostka label
    Ciekawostka1 c1("Ciekawostka 1: Magowie uzywaja magicznych zaklec.");
    Ciekawostka2 c2("Ciekawostka2: Wojownicy sa silni.");
    Napis *wsk;

    wsk = &c1;
    ui->Ciekawostka->setText(QString::fromStdString(wsk->pobierzTekst()));
    //#####################################
}

//#####################################

MainWindow::~MainWindow()
{
    delete ui;
}

//***********************************************************************************
//***********************************************************************************
//***********************************************************************************

//#####################################
// FUNCTION THAT CONTROLLS CREDITS BUTTON
void MainWindow::creditsButtonPressed()
{
    Credits creditsDialog;
    creditsDialog.setModal(true);
    creditsDialog.exec();
}
//#####################################

//***********************************************************************************
//***********************************************************************************
//***********************************************************************************

//#####################################
// RESOURCE INCOME FUNCTIONS
void MainWindow::goldIncome()
{
    zasoby.addGold(goldDropValue);
    ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
}

void MainWindow::woodIncome()
{
    zasoby.addWood(woodDropValue);
    ui->label_woodValue->setText(QString::number(zasoby.getWoodQuantity(), 'g', 15));
}

void MainWindow::stoneIncome()
{
    zasoby.addStone(stoneDropValue);
    ui->label_stoneValue->setText(QString::number(zasoby.getStoneQuantity(), 'g', 15));
}

void MainWindow::ironIncome()
{
    zasoby.addIron(ironDropValue);
    ui->label_ironValue->setText(QString::number(zasoby.getIronQuantity(), 'g', 15));
}

void MainWindow::foodIncome()
{
    zasoby.addFood(foodDropValue);
    ui->label_foodValue->setText(QString::number(zasoby.getFoodQuantity(), 'g', 15));
}

void MainWindow::foodMinus()
{
    int x = piknier.getQuantity() + jezdziec.getQuantity() + strzelec.getQuantity();

    if(x > 0)
    {
        if(zasoby.getFoodQuantity() - x >= 0)
        {
            for(int i = 0; i < x; i++)
                zasoby.removeFood(1);

            ui->label_foodValue->setText(QString::number(zasoby.getFoodQuantity(), 'g', 15));

            // open up the dialog window
            foodDelete deleteFood;
            deleteFood.setModal(true);
            deleteFood.exec();
        }

        // if food quantity < 0 after the food tax units start deserting
        else {
            desertion();
        }
    }
}

void MainWindow::desertion()
{
    if(piknier.getQuantity() > 0)
    {
        int randomNum = static_cast<int>(qrand() % piknier.getQuantity());
        piknier.removeQuantity(randomNum);
        piknier.removePower(randomNum * 5);
    }

    if(strzelec.getQuantity() > 0)
    {
        int randomNum2 = static_cast<int>(qrand() % strzelec.getQuantity());
        strzelec.removeQuantity(randomNum2);
        strzelec.removePower(randomNum2 * 7);
    }

    if(jezdziec.getQuantity() > 0)
    {
        int randomNum3 = static_cast<int>(qrand() % jezdziec.getQuantity());
        jezdziec.removeQuantity(randomNum3);
        jezdziec.removePower(randomNum3 * 10);
    }

    //update power label
    ui->labelArmyPower->setText("Army power: " + QString::number(piknier.getPower() + strzelec.getPower() + jezdziec.getPower(), 'g', 15));

    // update unit quantity labels
    ui->labelPikemanQuantity->setText("Quantity: " + QString::number(piknier.getQuantity(), 'g', 15));
    ui->labelArcherQuantity->setText("Quantity: " + QString::number(strzelec.getQuantity(), 'g', 15));
    ui->labelHorsemanQuantity->setText("Quantity: " + QString::number(jezdziec.getQuantity(), 'g', 15));
    ui->label_peopleValue->setText("People: " + QString::number(piknier.getQuantity() + strzelec.getQuantity() + jezdziec.getQuantity(), 'g', 15));

    desertionDialog desertionmessage;
    desertionmessage.setModal(true);
    desertionmessage.exec();
}
//#####################################

//***********************************************************************************
//***********************************************************************************
//***********************************************************************************

//#####################################
// Function controlling "upgrade building" button
void MainWindow::upgradeBuildingButtonPressed()
{
    QPushButton * button = (QPushButton*)sender();


    // SawMill
    if ((button == ui->pushButton_sawmillUpgrade) && (tartak.getLevel() < 6) && (zasoby.getGoldQuantity() - tartak.getPriceGold() >= 0) && (zasoby.getWoodQuantity() - tartak.getPriceWood() >= 0) && (zasoby.getStoneQuantity() - tartak.getPriceStone() >= 0))
    {
        woodDropValue++;

        // remove resources and update resource values
        zasoby.removeGold(tartak.getPriceGold());
        zasoby.removeWood(tartak.getPriceWood());
        zasoby.removeStone(tartak.getPriceStone());

        tartak.upgrade(50, 30, 30, 1.0);

        // update level label and resource value labels
        ui->label_sawmillLevel->setText("Level: " + QString::number(tartak.getLevel(), 'g', 15));
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_woodValue->setText(QString::number(zasoby.getWoodQuantity(), 'g', 15));
        ui->label_stoneValue->setText(QString::number(zasoby.getStoneQuantity(), 'g', 15));

        // update income label
        ui->label_woodIncome->setText("+" + QString::number(woodDropValue) + " / sec");

        // update price labels
        if(ui->label_sawmillLevel->text() == "Level: 6")
            ui->label_sawmillPrice_2->setText("Max level reached");
        else
            ui->label_sawmillPrice_2->setText("G: " + QString::number(tartak.getPriceGold(), 'g', 15) + " | W: " + QString::number(tartak.getPriceWood(), 'g', 15) + " | S: " + QString::number(tartak.getPriceStone(), 'g', 15));
    }

    // Stone Pit
    else if ((button == ui->pushButton_stonePitUpgrade) && (kamieniolom.getLevel() < 6) && (zasoby.getGoldQuantity() - kamieniolom.getPriceGold() >= 0) && (zasoby.getWoodQuantity() - kamieniolom.getPriceWood() >= 0) && (zasoby.getStoneQuantity() - kamieniolom.getPriceStone() >= 0))
    {
        stoneDropValue++;

        // remove resources and update resource values
        zasoby.removeGold(kamieniolom.getPriceGold());
        zasoby.removeWood(kamieniolom.getPriceWood());
        zasoby.removeStone(kamieniolom.getPriceStone());

        kamieniolom.upgrade(50, 30, 30, 1.0);

        // update level label and resource value labels
        ui->label_stonePitLevel->setText("Level: " + QString::number(kamieniolom.getLevel(), 'g', 15));
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_woodValue->setText(QString::number(zasoby.getWoodQuantity(), 'g', 15));
        ui->label_stoneValue->setText(QString::number(zasoby.getStoneQuantity(), 'g', 15));

        // update income label
        ui->label_stoneIncome->setText("+" + QString::number(stoneDropValue) + " / sec");

        // update price labels
        if(ui->label_stonePitLevel->text() == "Level: 6")
            ui->label_stonePitPrice_2->setText("Max level reached");
        else
            ui->label_stonePitPrice_2->setText("G: " + QString::number(kamieniolom.getPriceGold(), 'g', 15) + " | W: " + QString::number(kamieniolom.getPriceWood(), 'g', 15) + " | S: " + QString::number(kamieniolom.getPriceStone(), 'g', 15));
    }

    // Iron Mine
    else if ((button == ui->pushButton_ironMineUpgrade) && (kopalnia_zelaza.getLevel() < 6) && (zasoby.getGoldQuantity() - kopalnia_zelaza.getPriceGold() >= 0) && (zasoby.getWoodQuantity() - kopalnia_zelaza.getPriceWood() >= 0) && (zasoby.getStoneQuantity() - kopalnia_zelaza.getPriceStone() >= 0))
    {
        ironDropValue++;

        // remove resources and update resource values
        zasoby.removeGold(kopalnia_zelaza.getPriceGold());
        zasoby.removeWood(kopalnia_zelaza.getPriceWood());
        zasoby.removeStone(kopalnia_zelaza.getPriceStone());

        kopalnia_zelaza.upgrade(50, 30, 30, 1.0);

        // update level label and resource value labels
        ui->label_ironMineLevel->setText("Level: " + QString::number(kopalnia_zelaza.getLevel(), 'g', 15));
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_woodValue->setText(QString::number(zasoby.getWoodQuantity(), 'g', 15));
        ui->label_stoneValue->setText(QString::number(zasoby.getStoneQuantity(), 'g', 15));

        // update income label
        ui->label_ironIncome->setText("+" + QString::number(ironDropValue) + " / sec");

        // update price labels
        if(ui->label_ironMineLevel->text() == "Level: 6")
            ui->label_ironMinePrice_2->setText("Max level reached");
        else
            ui->label_ironMinePrice_2->setText("G: " + QString::number(kopalnia_zelaza.getPriceGold(), 'g', 15) + " | W: " + QString::number(kopalnia_zelaza.getPriceWood(), 'g', 15) + " | S: " + QString::number(kopalnia_zelaza.getPriceStone(), 'g', 15));
    }

    // FARM
    else if ((button == ui->pushButton_farmUpgrade) && (farma.getLevel() < 6) && (zasoby.getGoldQuantity() - farma.getPriceGold() >= 0) && (zasoby.getWoodQuantity() - farma.getPriceWood() >= 0) && (zasoby.getStoneQuantity() - farma.getPriceStone() >= 0))
    {
        foodDropValue++;

        // remove resources and update resource values
        zasoby.removeGold(farma.getPriceGold());
        zasoby.removeWood(farma.getPriceWood());
        zasoby.removeStone(farma.getPriceStone());

        farma.upgrade(50, 30, 30, 1.0);

        // update level label and resource value labels
        ui->label_farmLevel->setText("Level: " + QString::number(farma.getLevel(), 'g', 15));
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_woodValue->setText(QString::number(zasoby.getWoodQuantity(), 'g', 15));
        ui->label_stoneValue->setText(QString::number(zasoby.getStoneQuantity(), 'g', 15));

        // update income label
        ui->label_foodIncome->setText("+" + QString::number(foodDropValue) + " / sec");

        // update price labels
        if(ui->label_farmLevel->text() == "Level: 6")
            ui->label_farmPrice_2->setText("Max level reached");
        else
            ui->label_farmPrice_2->setText("G: " + QString::number(farma.getPriceGold(), 'g', 15) + " | W: " + QString::number(farma.getPriceWood(), 'g', 15) + " | S: " + QString::number(farma.getPriceStone(), 'g', 15));
    }

    // Hut
    else if ((button == ui->pushButton_hutUpgrade) && (domek.getLevel() < 6) && (zasoby.getGoldQuantity() - domek.getPriceGold() >= 0) && (zasoby.getWoodQuantity() - domek.getPriceWood() >= 0) && (zasoby.getStoneQuantity() - domek.getPriceStone() >= 0))
    {
        goldDropValue++;

        // remove resources and update resource values
        zasoby.removeGold(domek.getPriceGold());
        zasoby.removeWood(domek.getPriceWood());
        zasoby.removeStone(domek.getPriceStone());

        domek.upgrade(50, 30, 30, 1.0);
        armia.addArmyLimit(10);

        // update people limit label
        ui->label_peopleLimit->setText(" / " + QString::number(armia.getArmyLimit(), 'g', 15));

        // update level label and resource value labels
        ui->label_hutLevel->setText("Level: " + QString::number(domek.getLevel(), 'g', 15));
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_woodValue->setText(QString::number(zasoby.getWoodQuantity(), 'g', 15));
        ui->label_stoneValue->setText(QString::number(zasoby.getStoneQuantity(), 'g', 15));

        // update income label
        ui->label_goldIncome->setText("+" + QString::number(goldDropValue) + " / sec");

        // update price labels
        if(ui->label_hutLevel->text() == "Level: 6")
            ui->label_hutPrice_2->setText("Max level reached");
        else
            ui->label_hutPrice_2->setText("G: " + QString::number(domek.getPriceGold(), 'g', 15) + " | W: " + QString::number(domek.getPriceWood(), 'g', 15) + " | S: " + QString::number(domek.getPriceStone(), 'g', 15));
    }

    // Barracks
    else if ((button == ui->pushButton_barracksUpgrade) && (koszary.getLevel() < 4) && (zasoby.getGoldQuantity() - koszary.getPriceGold() >= 0) && (zasoby.getWoodQuantity() - koszary.getPriceWood() >= 0) && (zasoby.getStoneQuantity() - koszary.getPriceStone() >= 0))
    {

        // UPDATE TOOLTIPS AND ENABLE ARMY BUTTONS
        if(koszary.getLevel() == 1)
        {
            ui->pushButton_barracksUpgrade->setToolTip("Unlocks <font color='green'><b>ARCHERS</b></font>.");
            ui->pushButton_Buy_Pikeman->setEnabled(true);
            ui->pushButton_Upgrade_Pikeman->setEnabled(true);
        }
        else if(koszary.getLevel() == 2)
        {
            ui->pushButton_barracksUpgrade->setToolTip("unlocks <font color='green'><b>HORSEMEN</b></font>.");
            ui->pushButton_Buy_Archer->setEnabled(true);
            ui->pushButton_Upgrade_Archer->setEnabled(true);
        }
        else if(koszary.getLevel() == 3)
        {
            ui->pushButton_Buy_Horseman->setEnabled(true);
            ui->pushButton_Upgrade_Horseman->setEnabled(true);
        }

        // remove resources and update resource values
        zasoby.removeGold(koszary.getPriceGold());
        zasoby.removeWood(koszary.getPriceWood());
        zasoby.removeStone(koszary.getPriceStone());

        koszary.upgrade(50, 30, 30, 1.0);

        // update level label and resource value labels
        ui->label_barracksLevel->setText("Level: " + QString::number(koszary.getLevel(), 'g', 15));
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_woodValue->setText(QString::number(zasoby.getWoodQuantity(), 'g', 15));
        ui->label_stoneValue->setText(QString::number(zasoby.getStoneQuantity(), 'g', 15));


        // update price labels
        if(ui->label_barracksLevel->text() == "Level: 4")
            ui->label_barracksPrice_2->setText("Max level reached");
        else
            ui->label_barracksPrice_2->setText("G: " + QString::number(koszary.getPriceGold(), 'g', 15) + " | W: " + QString::number(koszary.getPriceWood(), 'g', 15) + " | S: " + QString::number(koszary.getPriceStone(), 'g', 15));
    }

    // OPEN ERROR DIALOG
    else
    {
        NoResourceError noResourceError;
        noResourceError.setModal(true);
        noResourceError.exec();
    }

    // disable upgrade buttons when level = 6
    if (tartak.getLevel() == 6)
    {
        ui->pushButton_sawmillUpgrade->setEnabled(false);
    }
    if (kamieniolom.getLevel() == 6)
    {
        ui->pushButton_stonePitUpgrade->setEnabled(false);
    }
    if (kopalnia_zelaza.getLevel() == 6)
    {
        ui->pushButton_ironMineUpgrade->setEnabled(false);
    }
    if (farma.getLevel() == 6)
    {
        ui->pushButton_farmUpgrade->setEnabled(false);
    }
    if (domek.getLevel() == 6)
    {
        ui->pushButton_hutUpgrade->setEnabled(false);
    }
    if (koszary.getLevel() == 4)
    {
        ui->pushButton_barracksUpgrade->setEnabled(false);
    }
}
//#####################################

//***********************************************************************************
//***********************************************************************************
//***********************************************************************************

//#####################################
// Function controlling "buy building" button
void MainWindow::buyBuildingButtonPressed()
{

}
//#####################################

//***********************************************************************************
//***********************************************************************************
//***********************************************************************************

//#####################################
// Function controlling "buy army" button
void MainWindow::buyArmyButtonPressed()
{
    QPushButton * button = (QPushButton*)sender();

    int quantity = 1;

    // pikeman
    if ((button == ui->pushButton_Buy_Pikeman)
            && ((piknier.getQuantity() + quantity + strzelec.getQuantity() + jezdziec.getQuantity()) <= armia.getArmyLimit())
            && (zasoby.getGoldQuantity() - piknier.getPriceBuyGold() >= 0) && (zasoby.getFoodQuantity() - piknier.getPriceBuyFood() >= 0) && (zasoby.getIronQuantity() - piknier.getPriceBuyIron() >= 0))
    {
        piknier.buy(5, quantity, 10, 10, 10);

        // remove resources and update resource values
        zasoby.removeGold(piknier.getPriceBuyGold());
        zasoby.removeIron(piknier.getPriceBuyIron());
        zasoby.removeFood(piknier.getPriceBuyFood());

        // update piknier quantity and people quantity label
        ui->labelPikemanQuantity->setText("Quantity: " + QString::number(piknier.getQuantity()));
        ui->label_peopleValue->setText("People: " + QString::number(piknier.getQuantity() + strzelec.getQuantity() + jezdziec.getQuantity()));

        // update level label and resource value labels
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_ironValue->setText(QString::number(zasoby.getIronQuantity(), 'g', 15));
        ui->label_foodValue->setText(QString::number(zasoby.getFoodQuantity(), 'g', 15));

        // update army power label
        ui->labelArmyPower->setText("Army power: " + QString::number(piknier.getPower() + strzelec.getPower() + jezdziec.getPower()));

        // update pikeman price tooltip
        ui->pushButton_Buy_Pikeman->setToolTip("<font color='red'><b>Cost:</b></font> "
                                               "<ul>"
                                               "<li>Gold: " + QString::number(piknier.getPriceBuyGold()) + "</li>"
                                               "<li>Food: " + QString::number(piknier.getPriceBuyFood()) + "</li>"
                                               "<li>Iron: " + QString::number(piknier.getPriceBuyIron()) + "</li>"
                                               "</ul>");
    }

    // Archer
    else if ((button == ui->pushButton_Buy_Archer)
            && ((piknier.getQuantity() + quantity + strzelec.getQuantity() + jezdziec.getQuantity()) <= armia.getArmyLimit())
            && (zasoby.getGoldQuantity() - strzelec.getPriceBuyGold() >= 0) && (zasoby.getFoodQuantity() - strzelec.getPriceBuyFood() >= 0) && (zasoby.getIronQuantity() - strzelec.getPriceBuyIron() >= 0))
    {
        strzelec.buy(7, quantity, 20, 20, 20);

        // remove resources and update resource values
        zasoby.removeGold(strzelec.getPriceBuyGold());
        zasoby.removeIron(strzelec.getPriceBuyIron());
        zasoby.removeFood(strzelec.getPriceBuyFood());

        // update strzelec quantity and people quantity label
        ui->labelArcherQuantity->setText("Quantity: " + QString::number(strzelec.getQuantity()));
        ui->label_peopleValue->setText("People: " + QString::number(piknier.getQuantity() + strzelec.getQuantity() + jezdziec.getQuantity()));

        // update level label and resource value labels
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_ironValue->setText(QString::number(zasoby.getIronQuantity(), 'g', 15));
        ui->label_foodValue->setText(QString::number(zasoby.getFoodQuantity(), 'g', 15));

        // update army power label
        ui->labelArmyPower->setText("Army power: " + QString::number(piknier.getPower() + strzelec.getPower() + jezdziec.getPower()));

        // update Archer price tooltip
        ui->pushButton_Buy_Archer->setToolTip("<font color='red'><b>Cost:</b></font> "
                                               "<ul>"
                                               "<li>Gold: " + QString::number(strzelec.getPriceBuyGold()) + "</li>"
                                               "<li>Food: " + QString::number(strzelec.getPriceBuyFood()) + "</li>"
                                               "<li>Iron: " + QString::number(strzelec.getPriceBuyIron()) + "</li>"
                                               "</ul>");
    }

    // horseman
    else if ((button == ui->pushButton_Buy_Horseman)
            && ((piknier.getQuantity() + quantity + strzelec.getQuantity() + jezdziec.getQuantity()) <= armia.getArmyLimit())
            && (zasoby.getGoldQuantity() - jezdziec.getPriceBuyGold() >= 0) && (zasoby.getFoodQuantity() - jezdziec.getPriceBuyFood() >= 0) && (zasoby.getIronQuantity() - jezdziec.getPriceBuyIron() >= 0))
    {
        jezdziec.buy(10, quantity, 30, 30, 30);

        // remove resources and update resource values
        zasoby.removeGold(jezdziec.getPriceBuyGold());
        zasoby.removeIron(jezdziec.getPriceBuyIron());
        zasoby.removeFood(jezdziec.getPriceBuyFood());

        // update jezdziec quantity and people quantity label
        ui->labelHorsemanQuantity->setText("Quantity: " + QString::number(jezdziec.getQuantity()));
        ui->label_peopleValue->setText("People: " + QString::number(piknier.getQuantity() + strzelec.getQuantity() + jezdziec.getQuantity()));

        // update level label and resource value labels
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_ironValue->setText(QString::number(zasoby.getIronQuantity(), 'g', 15));
        ui->label_foodValue->setText(QString::number(zasoby.getFoodQuantity(), 'g', 15));

        // update army power label
        ui->labelArmyPower->setText("Army power: " + QString::number(piknier.getPower() + strzelec.getPower() + jezdziec.getPower()));

        // update jezdziec price tooltip
        ui->pushButton_Buy_Horseman->setToolTip("<font color='red'><b>Cost:</b></font> "
                                               "<ul>"
                                               "<li>Gold: " + QString::number(jezdziec.getPriceBuyGold()) + "</li>"
                                               "<li>Food: " + QString::number(jezdziec.getPriceBuyFood()) + "</li>"
                                               "<li>Iron: " + QString::number(jezdziec.getPriceBuyIron()) + "</li>"
                                               "</ul>");
    }

    // open limit exceeded error
    else if (piknier.getQuantity() + quantity + strzelec.getQuantity() + jezdziec.getQuantity() > armia.getArmyLimit())
    {
        LlimitExceededError limitExceededError;
        limitExceededError.setModal(true);
        limitExceededError.exec();
    }
    // open not enough resources error
    else
    {
        NoResourceError noResourceError;
        noResourceError.setModal(true);
        noResourceError.exec();
    }

}
//#####################################

//***********************************************************************************
//***********************************************************************************
//***********************************************************************************

//#####################################
// Function controlling "upgrade army" button
void MainWindow::upgradeArmyButtonPressed()
{
    QPushButton * button = (QPushButton*)sender();

    // pikeman
    if ((button == ui->pushButton_Upgrade_Pikeman)
            && (piknier.getLevel() < 6)
            && (zasoby.getGoldQuantity() - piknier.getPriceGold() >= 0) && (zasoby.getFoodQuantity() - piknier.getPriceFood() >= 0) && (zasoby.getIronQuantity() - piknier.getPriceIron() >= 0))
    {

        // remove resources and update resource values
        zasoby.removeGold(piknier.getPriceGold());
        zasoby.removeIron(piknier.getPriceIron());
        zasoby.removeFood(piknier.getPriceFood());

        piknier.upgrade(1.5, 50,50,50);

        // update piknier level label
        ui->labelPikemanLevel->setText("Level: " + QString::number(piknier.getLevel(), 'g', 15));
        if(piknier.getLevel() == 6)
            ui->labelPikemanLevel->setText("Level: 6 (MAX)");

        // update tooltip
        ui->pushButton_Upgrade_Pikeman->setToolTip("<font color='red'><b>Cost:</b></font> "
                                               "<ul>"
                                               "<li>Gold: " + QString::number(piknier.getPriceGold()) + "</li>"
                                               "<li>Food: " + QString::number(piknier.getPriceFood()) + "</li>"
                                               "<li>Iron: " + QString::number(piknier.getPriceIron()) + "</li>"
                                               "</ul>");
    }

    // horseman
    else if ((button == ui->pushButton_Upgrade_Horseman)
            && (jezdziec.getLevel() < 6)
            && (zasoby.getGoldQuantity() - jezdziec.getPriceGold() >= 0) && (zasoby.getFoodQuantity() - jezdziec.getPriceFood() >= 0) && (zasoby.getIronQuantity() - jezdziec.getPriceIron() >= 0))
    {

        // remove resources and update resource values
        zasoby.removeGold(jezdziec.getPriceGold());
        zasoby.removeIron(jezdziec.getPriceIron());
        zasoby.removeFood(jezdziec.getPriceFood());

        jezdziec.upgrade(1.5, 150,150,150);

        // update jezdziec level label
        ui->label_HorsemanLevel->setText("Level: " + QString::number(jezdziec.getLevel(), 'g', 15));
        if(jezdziec.getLevel() == 6)
            ui->label_HorsemanLevel->setText("Level: 6 (MAX)");

        // update tooltip
        ui->pushButton_Upgrade_Horseman->setToolTip("<font color='red'><b>Cost:</b></font> "
                                               "<ul>"
                                               "<li>Gold: " + QString::number(jezdziec.getPriceGold()) + "</li>"
                                               "<li>Food: " + QString::number(jezdziec.getPriceFood()) + "</li>"
                                               "<li>Iron: " + QString::number(jezdziec.getPriceIron()) + "</li>"
                                               "</ul>");
    }

    // Archer
    else if ((button == ui->pushButton_Upgrade_Archer)
            && (strzelec.getLevel() < 6)
            && (zasoby.getGoldQuantity() - strzelec.getPriceGold() >= 0) && (zasoby.getFoodQuantity() - strzelec.getPriceFood() >= 0) && (zasoby.getIronQuantity() - strzelec.getPriceIron() >= 0))
    {

        // remove resources and update resource values
        zasoby.removeGold(strzelec.getPriceGold());
        zasoby.removeIron(strzelec.getPriceIron());
        zasoby.removeFood(strzelec.getPriceFood());

        strzelec.upgrade(1.5, 100,100,100);

        // update strzelec level label
        ui->label_ArcherLevel->setText("Level: " + QString::number(strzelec.getLevel(), 'g', 15));
        if(strzelec.getLevel() == 6)
            ui->label_ArcherLevel->setText("Level: 6 (MAX)");

        // update tooltip
        ui->pushButton_Upgrade_Archer->setToolTip("<font color='red'><b>Cost:</b></font> "
                                               "<ul>"
                                               "<li>Gold: " + QString::number(strzelec.getPriceGold()) + "</li>"
                                               "<li>Food: " + QString::number(strzelec.getPriceFood()) + "</li>"
                                               "<li>Iron: " + QString::number(strzelec.getPriceIron()) + "</li>"
                                               "</ul>");
    }

    // open not enough resources error
    else
    {
        NoResourceError noResourceError;
        noResourceError.setModal(true);
        noResourceError.exec();
    }

    // update resource value labels
    ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
    ui->label_ironValue->setText(QString::number(zasoby.getIronQuantity(), 'g', 15));
    ui->label_foodValue->setText(QString::number(zasoby.getFoodQuantity(), 'g', 15));

    // if max level reached disable upgrade buttons
    if (piknier.getLevel() == 6)
    {
        ui->pushButton_Upgrade_Pikeman->setDisabled(true);
    }
    if (strzelec.getLevel() == 6)
    {
        ui->pushButton_Upgrade_Archer->setDisabled(true);
    }
    if (jezdziec.getLevel() == 6)
    {
        ui->pushButton_Upgrade_Horseman->setDisabled(true);
    }

    // update army power label
    ui->labelArmyPower->setText("Army power: " + QString::number(piknier.getPower() + strzelec.getPower() + jezdziec.getPower(), 'g', 15));
}
//#####################################

//***********************************************************************************
//***********************************************************************************
//***********************************************************************************

//#####################################
// function controlling attack enemy button

void MainWindow::attackEnemyButton()
{
    if ((piknier.getPower() + strzelec.getPower() + jezdziec.getPower()) >= wrog.getPower())
    {
        // level 1
        if (ui->label_enemyLevel->text() == "Level: 1")
        {
            // add resources
            zasoby.addGold(wrog.getRewardGold());
            zasoby.addWood(wrog.getRewardWood());
            zasoby.addStone(wrog.getRewardStone());
            zasoby.addIron(wrog.getRewardIron());
            zasoby.addFood(wrog.getRewardFood());

            // update enemy values
            wrog.setRewardGold(1000);
            wrog.setRewardWood(1000);
            wrog.setRewardStone(1000);
            wrog.setRewardIron(1000);
            wrog.setRewardFood(1000);
            wrog.setPower(30);

            // update enemy labels
            ui->label_enemyLevel->setText("Level: 2");
            ui->label_enemyName->setText("Name: Gandalf");
            ui->label_enemyPower->setText("Power: " + QString::number(wrog.getPower(), 'g', 15));
        }

        // level 2
        else if (ui->label_enemyLevel->text() == "Level: 2")
        {
            // add resources
            zasoby.addGold(wrog.getRewardGold());
            zasoby.addWood(wrog.getRewardWood());
            zasoby.addStone(wrog.getRewardStone());
            zasoby.addIron(wrog.getRewardIron());
            zasoby.addFood(wrog.getRewardFood());

            // update enemy values
            wrog.setRewardGold(1000);
            wrog.setRewardWood(1000);
            wrog.setRewardStone(1000);
            wrog.setRewardIron(1000);
            wrog.setRewardFood(1000);
            wrog.setPower(60);

            // update enemy labels
            ui->label_enemyLevel->setText("Level: 3");
            ui->label_enemyName->setText("Name: Geralt");
            ui->label_enemyPower->setText("Power: " + QString::number(wrog.getPower(), 'g', 15));
        }

        // level 3
        else if (ui->label_enemyLevel->text() == "Level: 3")
        {
            // add resources
            zasoby.addGold(wrog.getRewardGold());
            zasoby.addWood(wrog.getRewardWood());
            zasoby.addStone(wrog.getRewardStone());
            zasoby.addIron(wrog.getRewardIron());
            zasoby.addFood(wrog.getRewardFood());

            // update enemy values
            wrog.setRewardGold(3000);
            wrog.setRewardWood(3000);
            wrog.setRewardStone(3000);
            wrog.setRewardIron(3000);
            wrog.setRewardFood(3000);
            wrog.setPower(90);

            // update enemy labels
            ui->label_enemyLevel->setText("Level: 4");
            ui->label_enemyName->setText("Name: Helga");
            ui->label_enemyPower->setText("Power: " + QString::number(wrog.getPower(), 'g', 15));
        }

        // level 4
        else if (ui->label_enemyLevel->text() == "Level: 4")
        {
            // add resources
            zasoby.addGold(wrog.getRewardGold());
            zasoby.addWood(wrog.getRewardWood());
            zasoby.addStone(wrog.getRewardStone());
            zasoby.addIron(wrog.getRewardIron());
            zasoby.addFood(wrog.getRewardFood());

            ui->pushButtonAttackEnemy->setDisabled(true);

            // update enemy labels
            ui->label_enemyLevel->setText("Level: NONE");
            ui->label_enemyName->setText("Name: NONE");
            ui->label_enemyPower->setText("Power: NONE");

            ui->labelArmySection_2->setText("YOU HAVE DEFEATED ALL THE ENEMIES");

        }

        // kill my units
        if(piknier.getQuantity() > 0)
        {
            int randomNum = static_cast<int>(qrand() % piknier.getQuantity());
            piknier.removeQuantity(randomNum);
            piknier.removePower(randomNum * 5);
        }

        if(strzelec.getQuantity() > 0)
        {
            int randomNum2 = static_cast<int>(qrand() % strzelec.getQuantity());
            strzelec.removeQuantity(randomNum2);
            strzelec.removePower(randomNum2 * 7);
        }

        if(jezdziec.getQuantity() > 0)
        {
            int randomNum3 = static_cast<int>(qrand() % jezdziec.getQuantity());
            jezdziec.removeQuantity(randomNum3);
            jezdziec.removePower(randomNum3 * 10);
        }

        // update resource labels
        ui->label_goldValue->setText(QString::number(zasoby.getGoldQuantity(), 'g', 15));
        ui->label_woodValue->setText(QString::number(zasoby.getWoodQuantity(), 'g', 15));
        ui->label_stoneValue->setText(QString::number(zasoby.getStoneQuantity(), 'g', 15));
        ui->label_ironValue->setText(QString::number(zasoby.getIronQuantity(), 'g', 15));
        ui->label_foodValue->setText(QString::number(zasoby.getFoodQuantity(), 'g', 15));
    }

    // if my army is weaker it DIES.
    else
    {
        // open up the error message
        youDied failure;
        failure.setModal(true);
        failure.exec();

        // kill ALL units
        piknier.setQuantity(0);
        strzelec.setQuantity(0);
        jezdziec.setQuantity(0);

        //  set army power to 0
        piknier.setPower(0);
        strzelec.setPower(0);
        jezdziec.setPower(0);
    }

    //update power label
    ui->labelArmyPower->setText("Army power: " + QString::number(piknier.getPower() + strzelec.getPower() + jezdziec.getPower(), 'g', 15));

    // update unit quantity labels
    ui->labelPikemanQuantity->setText("Quantity: " + QString::number(piknier.getQuantity(), 'g', 15));
    ui->labelArcherQuantity->setText("Quantity: " + QString::number(strzelec.getQuantity(), 'g', 15));
    ui->labelHorsemanQuantity->setText("Quantity: " + QString::number(jezdziec.getQuantity(), 'g', 15));
    ui->label_peopleValue->setText("People: " + QString::number(piknier.getQuantity() + strzelec.getQuantity() + jezdziec.getQuantity(), 'g', 15));
}

//#####################################
