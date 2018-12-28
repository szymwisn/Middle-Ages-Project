#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QTimer *timerGold;
    QTimer *timerWood;
    QTimer *timerStone;
    QTimer *timerIron;
    QTimer *timerFood;
    QTimer *timerFoodMinus;

    double goldDropValue;
    double woodDropValue;
    double stoneDropValue;
    double ironDropValue;
    double foodDropValue;

private slots:
    void buyBuildingButtonPressed();
    void upgradeBuildingButtonPressed();
    void upgradeArmyButtonPressed();
    void buyArmyButtonPressed();
    void creditsButtonPressed();
    void goldIncome();
    void woodIncome();
    void stoneIncome();
    void ironIncome();
    void foodIncome();
    void foodMinus();
    void desertion();
    void attackEnemyButton();
};

#endif // MAINWINDOW_H
