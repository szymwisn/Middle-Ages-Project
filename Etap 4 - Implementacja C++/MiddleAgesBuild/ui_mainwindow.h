/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame_topBar;
    QLabel *label_goldText;
    QLabel *label_goldValue;
    QLabel *label_woodValue;
    QLabel *label_woodText;
    QLabel *label_stoneValue;
    QLabel *label_stoneText;
    QLabel *label_ironValue;
    QLabel *label_ironText;
    QLabel *label_peopleValue;
    QLabel *label_peopleLimit;
    QLabel *label_goldIncome;
    QLabel *label_woodIncome;
    QLabel *label_stoneIncome;
    QLabel *label_ironIncome;
    QLabel *label_foodText;
    QLabel *label_foodValue;
    QLabel *label_foodIncome;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QFrame *frame_logoHolder;
    QLabel *label_appName;
    QLabel *label;
    QPushButton *pushButtonCredits;
    QFrame *frameBuildings;
    QLabel *labelBuildingsSection;
    QFrame *frameSawmill;
    QLabel *label_sawmillName;
    QLabel *label_sawmillLevel;
    QPushButton *pushButton_sawmillUpgrade;
    QLabel *label_sawmillPrice;
    QLabel *label_sawmillPrice_2;
    QLabel *sawmillImage;
    QFrame *frameFarm;
    QLabel *label_farmName;
    QLabel *label_farmLevel;
    QPushButton *pushButton_farmUpgrade;
    QLabel *label_farmPrice;
    QLabel *label_farmPrice_2;
    QLabel *farmImage;
    QFrame *frameStonePit;
    QLabel *label_stonePitName;
    QLabel *label_stonePitLevel;
    QPushButton *pushButton_stonePitUpgrade;
    QLabel *label_stonePitPrice;
    QLabel *label_stonePitPrice_2;
    QLabel *stonePitImage;
    QFrame *frameironMine;
    QLabel *label_ironMineName;
    QLabel *label_ironMineLevel;
    QPushButton *pushButton_ironMineUpgrade;
    QLabel *label_ironMinePrice;
    QLabel *label_ironMinePrice_2;
    QLabel *ironMineImage;
    QFrame *frameHut;
    QLabel *label_hutName;
    QLabel *label_hutLevel;
    QPushButton *pushButton_hutUpgrade;
    QLabel *label_hutPrice;
    QLabel *label_hutPrice_2;
    QLabel *hutImage;
    QFrame *frameBarracks;
    QLabel *label_barracksName;
    QLabel *label_barracksLevel;
    QPushButton *pushButton_barracksUpgrade;
    QLabel *label_barracksPrice;
    QLabel *label_barracksPrice_2;
    QLabel *barracksImage;
    QLabel *label_2;
    QFrame *frameArmy;
    QLabel *labelArmySection;
    QLabel *labelPikeman;
    QLabel *labelHorseman;
    QLabel *labelArcher;
    QLabel *labelPikemanQuantity;
    QLabel *labelHorsemanQuantity;
    QLabel *labelArcherQuantity;
    QLabel *labelPikemanLevel;
    QLabel *label_HorsemanLevel;
    QLabel *label_ArcherLevel;
    QPushButton *pushButton_Upgrade_Horseman;
    QPushButton *pushButton_Upgrade_Archer;
    QPushButton *pushButton_Buy_Archer;
    QPushButton *pushButton_Buy_Horseman;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_Upgrade_Pikeman;
    QPushButton *pushButton_Buy_Pikeman;
    QFrame *frame;
    QLabel *labelArmyPower;
    QFrame *frameEnemies;
    QLabel *labelArmySection_2;
    QPushButton *pushButtonAttackEnemy;
    QLabel *label_enemyImage;
    QLabel *label_enemyLevel;
    QLabel *label_enemyName;
    QLabel *label_enemyPower;
    QLabel *Ciekawostka;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(977, 654);
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: rgb(18, 18, 18)"));
        frame_topBar = new QFrame(centralWidget);
        frame_topBar->setObjectName(QStringLiteral("frame_topBar"));
        frame_topBar->setGeometry(QRect(0, 0, 981, 91));
        frame_topBar->setStyleSheet(QStringLiteral("background-color: #2a1e06;"));
        frame_topBar->setFrameShape(QFrame::StyledPanel);
        frame_topBar->setFrameShadow(QFrame::Raised);
        label_goldText = new QLabel(frame_topBar);
        label_goldText->setObjectName(QStringLiteral("label_goldText"));
        label_goldText->setGeometry(QRect(30, 10, 31, 16));
        label_goldText->setStyleSheet(QStringLiteral("color: white;"));
        label_goldValue = new QLabel(frame_topBar);
        label_goldValue->setObjectName(QStringLiteral("label_goldValue"));
        label_goldValue->setGeometry(QRect(70, 40, 31, 16));
        label_goldValue->setStyleSheet(QStringLiteral("color: white;"));
        label_woodValue = new QLabel(frame_topBar);
        label_woodValue->setObjectName(QStringLiteral("label_woodValue"));
        label_woodValue->setGeometry(QRect(150, 40, 31, 16));
        label_woodValue->setStyleSheet(QStringLiteral("color: white;"));
        label_woodText = new QLabel(frame_topBar);
        label_woodText->setObjectName(QStringLiteral("label_woodText"));
        label_woodText->setGeometry(QRect(100, 10, 31, 16));
        label_woodText->setStyleSheet(QStringLiteral("color: white;"));
        label_stoneValue = new QLabel(frame_topBar);
        label_stoneValue->setObjectName(QStringLiteral("label_stoneValue"));
        label_stoneValue->setGeometry(QRect(220, 40, 31, 16));
        label_stoneValue->setStyleSheet(QStringLiteral("color: white;"));
        label_stoneText = new QLabel(frame_topBar);
        label_stoneText->setObjectName(QStringLiteral("label_stoneText"));
        label_stoneText->setGeometry(QRect(180, 10, 31, 16));
        label_stoneText->setStyleSheet(QStringLiteral("color: white;"));
        label_ironValue = new QLabel(frame_topBar);
        label_ironValue->setObjectName(QStringLiteral("label_ironValue"));
        label_ironValue->setGeometry(QRect(290, 40, 31, 16));
        label_ironValue->setStyleSheet(QStringLiteral("color: white;"));
        label_ironText = new QLabel(frame_topBar);
        label_ironText->setObjectName(QStringLiteral("label_ironText"));
        label_ironText->setGeometry(QRect(250, 10, 31, 16));
        label_ironText->setStyleSheet(QStringLiteral("color: white;"));
        label_peopleValue = new QLabel(frame_topBar);
        label_peopleValue->setObjectName(QStringLiteral("label_peopleValue"));
        label_peopleValue->setGeometry(QRect(700, 40, 71, 16));
        label_peopleValue->setStyleSheet(QStringLiteral("color: white;"));
        label_peopleLimit = new QLabel(frame_topBar);
        label_peopleLimit->setObjectName(QStringLiteral("label_peopleLimit"));
        label_peopleLimit->setGeometry(QRect(751, 40, 41, 16));
        label_peopleLimit->setStyleSheet(QStringLiteral("color: white;"));
        label_goldIncome = new QLabel(frame_topBar);
        label_goldIncome->setObjectName(QStringLiteral("label_goldIncome"));
        label_goldIncome->setGeometry(QRect(60, 60, 41, 16));
        label_goldIncome->setStyleSheet(QStringLiteral("color: white;"));
        label_woodIncome = new QLabel(frame_topBar);
        label_woodIncome->setObjectName(QStringLiteral("label_woodIncome"));
        label_woodIncome->setGeometry(QRect(140, 60, 41, 16));
        label_woodIncome->setStyleSheet(QStringLiteral("color: white;"));
        label_stoneIncome = new QLabel(frame_topBar);
        label_stoneIncome->setObjectName(QStringLiteral("label_stoneIncome"));
        label_stoneIncome->setGeometry(QRect(210, 60, 41, 16));
        label_stoneIncome->setStyleSheet(QStringLiteral("color: white;"));
        label_ironIncome = new QLabel(frame_topBar);
        label_ironIncome->setObjectName(QStringLiteral("label_ironIncome"));
        label_ironIncome->setGeometry(QRect(280, 60, 41, 16));
        label_ironIncome->setStyleSheet(QStringLiteral("color: white;"));
        label_foodText = new QLabel(frame_topBar);
        label_foodText->setObjectName(QStringLiteral("label_foodText"));
        label_foodText->setGeometry(QRect(330, 10, 31, 16));
        label_foodText->setStyleSheet(QStringLiteral("color: white;"));
        label_foodValue = new QLabel(frame_topBar);
        label_foodValue->setObjectName(QStringLiteral("label_foodValue"));
        label_foodValue->setGeometry(QRect(380, 40, 51, 16));
        label_foodValue->setStyleSheet(QStringLiteral("color: white;"));
        label_foodIncome = new QLabel(frame_topBar);
        label_foodIncome->setObjectName(QStringLiteral("label_foodIncome"));
        label_foodIncome->setGeometry(QRect(370, 60, 41, 16));
        label_foodIncome->setStyleSheet(QStringLiteral("color: white;"));
        label_3 = new QLabel(frame_topBar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 30, 32, 32));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/wood.png")));
        label_4 = new QLabel(frame_topBar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 30, 32, 32));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/gold.png")));
        label_5 = new QLabel(frame_topBar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 30, 32, 32));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/stone.png")));
        label_6 = new QLabel(frame_topBar);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 30, 32, 32));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/food.png")));
        label_7 = new QLabel(frame_topBar);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 30, 32, 32));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/iron.png")));
        label_8 = new QLabel(frame_topBar);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(640, 30, 32, 32));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/people.png")));
        frame_logoHolder = new QFrame(frame_topBar);
        frame_logoHolder->setObjectName(QStringLiteral("frame_logoHolder"));
        frame_logoHolder->setGeometry(QRect(440, -50, 171, 131));
        frame_logoHolder->setStyleSheet(QLatin1String("QFrame {\n"
"	border: 5px solid #a17c36;\n"
"	background-color: #f3f6db;\n"
"	border-radius: 30px;\n"
"}"));
        frame_logoHolder->setFrameShape(QFrame::StyledPanel);
        frame_logoHolder->setFrameShadow(QFrame::Raised);
        label_appName = new QLabel(frame_logoHolder);
        label_appName->setObjectName(QStringLiteral("label_appName"));
        label_appName->setGeometry(QRect(20, 70, 131, 31));
        QFont font;
        font.setFamily(QStringLiteral("Trajan Pro"));
        font.setPointSize(14);
        label_appName->setFont(font);
        label_appName->setCursor(QCursor(Qt::ArrowCursor));
        label_appName->setStyleSheet(QLatin1String("color: black;\n"
"border: 0px solid gray;"));
        label_appName->setTextFormat(Qt::AutoText);
        label_appName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label = new QLabel(frame_logoHolder);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(55, 100, 61, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Trajan Pro"));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("border: none;\n"
"color: black;\n"
""));
        pushButtonCredits = new QPushButton(frame_topBar);
        pushButtonCredits->setObjectName(QStringLiteral("pushButtonCredits"));
        pushButtonCredits->setGeometry(QRect(860, 40, 80, 21));
        pushButtonCredits->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(161, 124, 54);\n"
"border: 1px solid rgb(61, 43, 8)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color: white;\n"
"}"));
        label_goldText->raise();
        label_woodText->raise();
        label_stoneText->raise();
        label_ironText->raise();
        label_peopleValue->raise();
        label_stoneValue->raise();
        label_goldIncome->raise();
        label_woodIncome->raise();
        label_stoneIncome->raise();
        label_ironIncome->raise();
        label_foodText->raise();
        label_foodIncome->raise();
        label_ironValue->raise();
        label_foodValue->raise();
        label_goldValue->raise();
        label_peopleLimit->raise();
        label_3->raise();
        label_4->raise();
        label_woodValue->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        frame_logoHolder->raise();
        pushButtonCredits->raise();
        frameBuildings = new QFrame(centralWidget);
        frameBuildings->setObjectName(QStringLiteral("frameBuildings"));
        frameBuildings->setGeometry(QRect(20, 100, 551, 501));
        frameBuildings->setStyleSheet(QLatin1String("QFrame {\n"
"border: 3px solid #a17c36;\n"
"border-radius: 10px;\n"
"background-color: rgb(9, 9, 9);\n"
"color: white;\n"
"}"));
        frameBuildings->setFrameShape(QFrame::StyledPanel);
        frameBuildings->setFrameShadow(QFrame::Raised);
        labelBuildingsSection = new QLabel(frameBuildings);
        labelBuildingsSection->setObjectName(QStringLiteral("labelBuildingsSection"));
        labelBuildingsSection->setGeometry(QRect(250, 20, 61, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Constantia"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        labelBuildingsSection->setFont(font2);
        labelBuildingsSection->setStyleSheet(QLatin1String("border: none;\n"
"color: white;\n"
"font: 10pt \"Constantia\";"));
        frameSawmill = new QFrame(frameBuildings);
        frameSawmill->setObjectName(QStringLiteral("frameSawmill"));
        frameSawmill->setGeometry(QRect(30, 60, 241, 131));
        frameSawmill->setStyleSheet(QLatin1String("QFrame {\n"
"border: 1px solid rgb(118, 86, 30);\n"
"background-color: rgb(17, 17, 17);\n"
"}\n"
""));
        frameSawmill->setFrameShape(QFrame::StyledPanel);
        frameSawmill->setFrameShadow(QFrame::Raised);
        label_sawmillName = new QLabel(frameSawmill);
        label_sawmillName->setObjectName(QStringLiteral("label_sawmillName"));
        label_sawmillName->setGeometry(QRect(100, 10, 61, 16));
        QFont font3;
        font3.setPointSize(10);
        label_sawmillName->setFont(font3);
        label_sawmillName->setStyleSheet(QStringLiteral("border: none;"));
        label_sawmillLevel = new QLabel(frameSawmill);
        label_sawmillLevel->setObjectName(QStringLiteral("label_sawmillLevel"));
        label_sawmillLevel->setGeometry(QRect(20, 90, 41, 20));
        label_sawmillLevel->setStyleSheet(QStringLiteral("border: none;"));
        pushButton_sawmillUpgrade = new QPushButton(frameSawmill);
        pushButton_sawmillUpgrade->setObjectName(QStringLiteral("pushButton_sawmillUpgrade"));
        pushButton_sawmillUpgrade->setGeometry(QRect(150, 100, 80, 21));
        pushButton_sawmillUpgrade->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        label_sawmillPrice = new QLabel(frameSawmill);
        label_sawmillPrice->setObjectName(QStringLiteral("label_sawmillPrice"));
        label_sawmillPrice->setGeometry(QRect(100, 30, 111, 21));
        label_sawmillPrice->setStyleSheet(QLatin1String("border: none;\n"
"color:rgb(161, 124, 54);"));
        label_sawmillPrice_2 = new QLabel(frameSawmill);
        label_sawmillPrice_2->setObjectName(QStringLiteral("label_sawmillPrice_2"));
        label_sawmillPrice_2->setGeometry(QRect(100, 50, 111, 21));
        label_sawmillPrice_2->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(118, 86, 30);"));
        sawmillImage = new QLabel(frameSawmill);
        sawmillImage->setObjectName(QStringLiteral("sawmillImage"));
        sawmillImage->setGeometry(QRect(10, 10, 81, 71));
        sawmillImage->setStyleSheet(QStringLiteral("border:none;"));
        sawmillImage->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/sawMill.png")));
        sawmillImage->setScaledContents(true);
        frameFarm = new QFrame(frameBuildings);
        frameFarm->setObjectName(QStringLiteral("frameFarm"));
        frameFarm->setGeometry(QRect(30, 200, 241, 131));
        frameFarm->setStyleSheet(QLatin1String("QFrame {\n"
"border: 1px solid rgb(118, 86, 30);\n"
"background-color: rgb(17, 17, 17);\n"
"}\n"
""));
        frameFarm->setFrameShape(QFrame::StyledPanel);
        frameFarm->setFrameShadow(QFrame::Raised);
        label_farmName = new QLabel(frameFarm);
        label_farmName->setObjectName(QStringLiteral("label_farmName"));
        label_farmName->setGeometry(QRect(100, 10, 51, 16));
        label_farmName->setFont(font3);
        label_farmName->setStyleSheet(QStringLiteral("border: none;"));
        label_farmLevel = new QLabel(frameFarm);
        label_farmLevel->setObjectName(QStringLiteral("label_farmLevel"));
        label_farmLevel->setGeometry(QRect(20, 90, 41, 20));
        label_farmLevel->setStyleSheet(QStringLiteral("border: none;"));
        pushButton_farmUpgrade = new QPushButton(frameFarm);
        pushButton_farmUpgrade->setObjectName(QStringLiteral("pushButton_farmUpgrade"));
        pushButton_farmUpgrade->setGeometry(QRect(150, 100, 80, 21));
        pushButton_farmUpgrade->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        label_farmPrice = new QLabel(frameFarm);
        label_farmPrice->setObjectName(QStringLiteral("label_farmPrice"));
        label_farmPrice->setGeometry(QRect(100, 30, 111, 21));
        label_farmPrice->setStyleSheet(QLatin1String("border: none;\n"
"color:rgb(161, 124, 54);"));
        label_farmPrice_2 = new QLabel(frameFarm);
        label_farmPrice_2->setObjectName(QStringLiteral("label_farmPrice_2"));
        label_farmPrice_2->setGeometry(QRect(100, 50, 111, 21));
        label_farmPrice_2->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(118, 86, 30);"));
        farmImage = new QLabel(frameFarm);
        farmImage->setObjectName(QStringLiteral("farmImage"));
        farmImage->setGeometry(QRect(10, 10, 81, 71));
        farmImage->setStyleSheet(QStringLiteral("border:none;"));
        farmImage->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/farm.png")));
        farmImage->setScaledContents(true);
        frameStonePit = new QFrame(frameBuildings);
        frameStonePit->setObjectName(QStringLiteral("frameStonePit"));
        frameStonePit->setGeometry(QRect(30, 340, 241, 131));
        frameStonePit->setStyleSheet(QLatin1String("QFrame {\n"
"border: 1px solid rgb(118, 86, 30);\n"
"background-color: rgb(17, 17, 17);\n"
"}\n"
""));
        frameStonePit->setFrameShape(QFrame::StyledPanel);
        frameStonePit->setFrameShadow(QFrame::Raised);
        label_stonePitName = new QLabel(frameStonePit);
        label_stonePitName->setObjectName(QStringLiteral("label_stonePitName"));
        label_stonePitName->setGeometry(QRect(100, 10, 71, 16));
        label_stonePitName->setFont(font3);
        label_stonePitName->setStyleSheet(QStringLiteral("border: none;"));
        label_stonePitLevel = new QLabel(frameStonePit);
        label_stonePitLevel->setObjectName(QStringLiteral("label_stonePitLevel"));
        label_stonePitLevel->setGeometry(QRect(20, 90, 41, 20));
        label_stonePitLevel->setStyleSheet(QStringLiteral("border: none;"));
        pushButton_stonePitUpgrade = new QPushButton(frameStonePit);
        pushButton_stonePitUpgrade->setObjectName(QStringLiteral("pushButton_stonePitUpgrade"));
        pushButton_stonePitUpgrade->setGeometry(QRect(150, 100, 80, 21));
        pushButton_stonePitUpgrade->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        label_stonePitPrice = new QLabel(frameStonePit);
        label_stonePitPrice->setObjectName(QStringLiteral("label_stonePitPrice"));
        label_stonePitPrice->setGeometry(QRect(100, 30, 111, 21));
        label_stonePitPrice->setStyleSheet(QLatin1String("border: none;\n"
"color:rgb(161, 124, 54);"));
        label_stonePitPrice_2 = new QLabel(frameStonePit);
        label_stonePitPrice_2->setObjectName(QStringLiteral("label_stonePitPrice_2"));
        label_stonePitPrice_2->setGeometry(QRect(100, 50, 111, 21));
        label_stonePitPrice_2->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(118, 86, 30);"));
        stonePitImage = new QLabel(frameStonePit);
        stonePitImage->setObjectName(QStringLiteral("stonePitImage"));
        stonePitImage->setGeometry(QRect(10, 10, 81, 71));
        stonePitImage->setStyleSheet(QStringLiteral("border:none;"));
        stonePitImage->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/stonePit.png")));
        stonePitImage->setScaledContents(true);
        frameironMine = new QFrame(frameBuildings);
        frameironMine->setObjectName(QStringLiteral("frameironMine"));
        frameironMine->setGeometry(QRect(280, 60, 241, 131));
        frameironMine->setStyleSheet(QLatin1String("QFrame {\n"
"border: 1px solid rgb(118, 86, 30);\n"
"background-color: rgb(17, 17, 17);\n"
"}\n"
""));
        frameironMine->setFrameShape(QFrame::StyledPanel);
        frameironMine->setFrameShadow(QFrame::Raised);
        label_ironMineName = new QLabel(frameironMine);
        label_ironMineName->setObjectName(QStringLiteral("label_ironMineName"));
        label_ironMineName->setGeometry(QRect(100, 10, 71, 16));
        label_ironMineName->setFont(font3);
        label_ironMineName->setStyleSheet(QStringLiteral("border: none;"));
        label_ironMineLevel = new QLabel(frameironMine);
        label_ironMineLevel->setObjectName(QStringLiteral("label_ironMineLevel"));
        label_ironMineLevel->setGeometry(QRect(20, 90, 41, 20));
        label_ironMineLevel->setStyleSheet(QStringLiteral("border: none;"));
        pushButton_ironMineUpgrade = new QPushButton(frameironMine);
        pushButton_ironMineUpgrade->setObjectName(QStringLiteral("pushButton_ironMineUpgrade"));
        pushButton_ironMineUpgrade->setGeometry(QRect(150, 100, 80, 21));
        pushButton_ironMineUpgrade->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        label_ironMinePrice = new QLabel(frameironMine);
        label_ironMinePrice->setObjectName(QStringLiteral("label_ironMinePrice"));
        label_ironMinePrice->setGeometry(QRect(100, 30, 111, 21));
        label_ironMinePrice->setStyleSheet(QLatin1String("border: none;\n"
"color:rgb(161, 124, 54);"));
        label_ironMinePrice_2 = new QLabel(frameironMine);
        label_ironMinePrice_2->setObjectName(QStringLiteral("label_ironMinePrice_2"));
        label_ironMinePrice_2->setGeometry(QRect(100, 50, 111, 21));
        label_ironMinePrice_2->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(118, 86, 30);"));
        ironMineImage = new QLabel(frameironMine);
        ironMineImage->setObjectName(QStringLiteral("ironMineImage"));
        ironMineImage->setGeometry(QRect(10, 10, 81, 71));
        ironMineImage->setStyleSheet(QStringLiteral("border:none;"));
        ironMineImage->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/ironMine.png")));
        ironMineImage->setScaledContents(true);
        frameHut = new QFrame(frameBuildings);
        frameHut->setObjectName(QStringLiteral("frameHut"));
        frameHut->setGeometry(QRect(280, 200, 241, 131));
        frameHut->setStyleSheet(QLatin1String("QFrame {\n"
"border: 1px solid rgb(118, 86, 30);\n"
"background-color: rgb(17, 17, 17);\n"
"}\n"
""));
        frameHut->setFrameShape(QFrame::StyledPanel);
        frameHut->setFrameShadow(QFrame::Raised);
        label_hutName = new QLabel(frameHut);
        label_hutName->setObjectName(QStringLiteral("label_hutName"));
        label_hutName->setGeometry(QRect(100, 10, 71, 16));
        label_hutName->setFont(font3);
        label_hutName->setStyleSheet(QStringLiteral("border: none;"));
        label_hutLevel = new QLabel(frameHut);
        label_hutLevel->setObjectName(QStringLiteral("label_hutLevel"));
        label_hutLevel->setGeometry(QRect(20, 90, 41, 20));
        label_hutLevel->setStyleSheet(QStringLiteral("border: none;"));
        pushButton_hutUpgrade = new QPushButton(frameHut);
        pushButton_hutUpgrade->setObjectName(QStringLiteral("pushButton_hutUpgrade"));
        pushButton_hutUpgrade->setGeometry(QRect(150, 100, 80, 21));
        pushButton_hutUpgrade->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        label_hutPrice = new QLabel(frameHut);
        label_hutPrice->setObjectName(QStringLiteral("label_hutPrice"));
        label_hutPrice->setGeometry(QRect(100, 30, 111, 21));
        label_hutPrice->setStyleSheet(QLatin1String("border: none;\n"
"color:rgb(161, 124, 54);"));
        label_hutPrice_2 = new QLabel(frameHut);
        label_hutPrice_2->setObjectName(QStringLiteral("label_hutPrice_2"));
        label_hutPrice_2->setGeometry(QRect(100, 50, 111, 21));
        label_hutPrice_2->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(118, 86, 30);"));
        hutImage = new QLabel(frameHut);
        hutImage->setObjectName(QStringLiteral("hutImage"));
        hutImage->setGeometry(QRect(10, 10, 81, 71));
        hutImage->setStyleSheet(QStringLiteral("border:none;"));
        hutImage->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/R_SS_BronzeAge_Residential2.png")));
        hutImage->setScaledContents(true);
        frameBarracks = new QFrame(frameBuildings);
        frameBarracks->setObjectName(QStringLiteral("frameBarracks"));
        frameBarracks->setGeometry(QRect(280, 340, 241, 131));
        frameBarracks->setStyleSheet(QLatin1String("QFrame {\n"
"border: 1px solid rgb(118, 86, 30);\n"
"background-color: rgb(17, 17, 17);\n"
"}\n"
""));
        frameBarracks->setFrameShape(QFrame::StyledPanel);
        frameBarracks->setFrameShadow(QFrame::Raised);
        label_barracksName = new QLabel(frameBarracks);
        label_barracksName->setObjectName(QStringLiteral("label_barracksName"));
        label_barracksName->setGeometry(QRect(100, 10, 61, 16));
        label_barracksName->setFont(font3);
        label_barracksName->setStyleSheet(QStringLiteral("border: none;"));
        label_barracksLevel = new QLabel(frameBarracks);
        label_barracksLevel->setObjectName(QStringLiteral("label_barracksLevel"));
        label_barracksLevel->setGeometry(QRect(20, 90, 41, 20));
        label_barracksLevel->setStyleSheet(QStringLiteral("border: none;"));
        pushButton_barracksUpgrade = new QPushButton(frameBarracks);
        pushButton_barracksUpgrade->setObjectName(QStringLiteral("pushButton_barracksUpgrade"));
        pushButton_barracksUpgrade->setGeometry(QRect(150, 100, 80, 21));
        pushButton_barracksUpgrade->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        label_barracksPrice = new QLabel(frameBarracks);
        label_barracksPrice->setObjectName(QStringLiteral("label_barracksPrice"));
        label_barracksPrice->setGeometry(QRect(100, 30, 111, 21));
        label_barracksPrice->setStyleSheet(QLatin1String("border: none;\n"
"color:rgb(161, 124, 54);"));
        label_barracksPrice_2 = new QLabel(frameBarracks);
        label_barracksPrice_2->setObjectName(QStringLiteral("label_barracksPrice_2"));
        label_barracksPrice_2->setGeometry(QRect(100, 50, 111, 21));
        label_barracksPrice_2->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(118, 86, 30);"));
        barracksImage = new QLabel(frameBarracks);
        barracksImage->setObjectName(QStringLiteral("barracksImage"));
        barracksImage->setGeometry(QRect(10, 10, 81, 71));
        barracksImage->setStyleSheet(QStringLiteral("border:none;"));
        barracksImage->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/barracks.png")));
        barracksImage->setScaledContents(true);
        label_2 = new QLabel(frameBuildings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 20, 181, 16));
        label_2->setStyleSheet(QLatin1String("border:none;\n"
"color: rgb(72, 72, 72)"));
        frameArmy = new QFrame(centralWidget);
        frameArmy->setObjectName(QStringLiteral("frameArmy"));
        frameArmy->setGeometry(QRect(580, 100, 381, 291));
        frameArmy->setStyleSheet(QLatin1String("QFrame {\n"
"border: 3px solid #a17c36;\n"
"border-radius: 10px;\n"
"background-color: rgb(9, 9, 9);\n"
"color: white;\n"
"}"));
        frameArmy->setFrameShape(QFrame::StyledPanel);
        frameArmy->setFrameShadow(QFrame::Raised);
        labelArmySection = new QLabel(frameArmy);
        labelArmySection->setObjectName(QStringLiteral("labelArmySection"));
        labelArmySection->setGeometry(QRect(10, 20, 361, 20));
        labelArmySection->setFont(font2);
        labelArmySection->setStyleSheet(QLatin1String("border: none;\n"
"color: white;\n"
"font: 10pt \"Constantia\";"));
        labelArmySection->setAlignment(Qt::AlignCenter);
        labelPikeman = new QLabel(frameArmy);
        labelPikeman->setObjectName(QStringLiteral("labelPikeman"));
        labelPikeman->setGeometry(QRect(23, 50, 91, 20));
        labelPikeman->setFont(font3);
        labelPikeman->setStyleSheet(QLatin1String("border: none;\n"
""));
        labelPikeman->setAlignment(Qt::AlignCenter);
        labelHorseman = new QLabel(frameArmy);
        labelHorseman->setObjectName(QStringLiteral("labelHorseman"));
        labelHorseman->setGeometry(QRect(150, 50, 81, 20));
        labelHorseman->setFont(font3);
        labelHorseman->setStyleSheet(QLatin1String("border: none;\n"
""));
        labelHorseman->setAlignment(Qt::AlignCenter);
        labelArcher = new QLabel(frameArmy);
        labelArcher->setObjectName(QStringLiteral("labelArcher"));
        labelArcher->setGeometry(QRect(270, 50, 81, 20));
        labelArcher->setFont(font3);
        labelArcher->setStyleSheet(QLatin1String("border: none;\n"
""));
        labelArcher->setAlignment(Qt::AlignCenter);
        labelPikemanQuantity = new QLabel(frameArmy);
        labelPikemanQuantity->setObjectName(QStringLiteral("labelPikemanQuantity"));
        labelPikemanQuantity->setGeometry(QRect(30, 124, 81, 16));
        labelPikemanQuantity->setStyleSheet(QLatin1String("border: none;\n"
""));
        labelPikemanQuantity->setAlignment(Qt::AlignCenter);
        labelHorsemanQuantity = new QLabel(frameArmy);
        labelHorsemanQuantity->setObjectName(QStringLiteral("labelHorsemanQuantity"));
        labelHorsemanQuantity->setGeometry(QRect(150, 124, 81, 20));
        labelHorsemanQuantity->setStyleSheet(QLatin1String("border: none;\n"
""));
        labelHorsemanQuantity->setAlignment(Qt::AlignCenter);
        labelArcherQuantity = new QLabel(frameArmy);
        labelArcherQuantity->setObjectName(QStringLiteral("labelArcherQuantity"));
        labelArcherQuantity->setGeometry(QRect(270, 124, 81, 20));
        labelArcherQuantity->setStyleSheet(QLatin1String("border: none;\n"
""));
        labelArcherQuantity->setAlignment(Qt::AlignCenter);
        labelPikemanLevel = new QLabel(frameArmy);
        labelPikemanLevel->setObjectName(QStringLiteral("labelPikemanLevel"));
        labelPikemanLevel->setGeometry(QRect(30, 144, 81, 16));
        labelPikemanLevel->setStyleSheet(QLatin1String("border: none;\n"
""));
        labelPikemanLevel->setAlignment(Qt::AlignCenter);
        label_HorsemanLevel = new QLabel(frameArmy);
        label_HorsemanLevel->setObjectName(QStringLiteral("label_HorsemanLevel"));
        label_HorsemanLevel->setGeometry(QRect(150, 144, 81, 20));
        label_HorsemanLevel->setStyleSheet(QLatin1String("border: none;\n"
""));
        label_HorsemanLevel->setAlignment(Qt::AlignCenter);
        label_ArcherLevel = new QLabel(frameArmy);
        label_ArcherLevel->setObjectName(QStringLiteral("label_ArcherLevel"));
        label_ArcherLevel->setGeometry(QRect(270, 144, 81, 20));
        label_ArcherLevel->setStyleSheet(QLatin1String("border: none;\n"
""));
        label_ArcherLevel->setAlignment(Qt::AlignCenter);
        pushButton_Upgrade_Horseman = new QPushButton(frameArmy);
        pushButton_Upgrade_Horseman->setObjectName(QStringLiteral("pushButton_Upgrade_Horseman"));
        pushButton_Upgrade_Horseman->setGeometry(QRect(150, 200, 81, 21));
        pushButton_Upgrade_Horseman->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        pushButton_Upgrade_Archer = new QPushButton(frameArmy);
        pushButton_Upgrade_Archer->setObjectName(QStringLiteral("pushButton_Upgrade_Archer"));
        pushButton_Upgrade_Archer->setGeometry(QRect(270, 200, 81, 21));
        pushButton_Upgrade_Archer->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        pushButton_Buy_Archer = new QPushButton(frameArmy);
        pushButton_Buy_Archer->setObjectName(QStringLiteral("pushButton_Buy_Archer"));
        pushButton_Buy_Archer->setGeometry(QRect(270, 170, 81, 21));
        pushButton_Buy_Archer->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        pushButton_Buy_Horseman = new QPushButton(frameArmy);
        pushButton_Buy_Horseman->setObjectName(QStringLiteral("pushButton_Buy_Horseman"));
        pushButton_Buy_Horseman->setGeometry(QRect(150, 170, 81, 21));
        pushButton_Buy_Horseman->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        label_9 = new QLabel(frameArmy);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 80, 81, 41));
        label_9->setStyleSheet(QStringLiteral("border: none;"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/pikeman.png")));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(frameArmy);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(150, 80, 81, 41));
        label_10->setStyleSheet(QStringLiteral("border: none;"));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/horseman.png")));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(frameArmy);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(270, 80, 81, 41));
        label_11->setStyleSheet(QStringLiteral("border: none;"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/archer.png")));
        label_11->setAlignment(Qt::AlignCenter);
        pushButton_Upgrade_Pikeman = new QPushButton(frameArmy);
        pushButton_Upgrade_Pikeman->setObjectName(QStringLiteral("pushButton_Upgrade_Pikeman"));
        pushButton_Upgrade_Pikeman->setGeometry(QRect(30, 200, 81, 21));
        pushButton_Upgrade_Pikeman->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        pushButton_Buy_Pikeman = new QPushButton(frameArmy);
        pushButton_Buy_Pikeman->setObjectName(QStringLiteral("pushButton_Buy_Pikeman"));
        pushButton_Buy_Pikeman->setGeometry(QRect(30, 170, 81, 21));
        pushButton_Buy_Pikeman->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        frame = new QFrame(frameArmy);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(120, 250, 141, 41));
        frame->setStyleSheet(QLatin1String("background-color: #f3f6db;\n"
"border-radius: 0px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        labelArmyPower = new QLabel(frame);
        labelArmyPower->setObjectName(QStringLiteral("labelArmyPower"));
        labelArmyPower->setGeometry(QRect(10, 11, 121, 21));
        labelArmyPower->setStyleSheet(QLatin1String("border: none;\n"
"color: black;\n"
""));
        labelArmyPower->setAlignment(Qt::AlignCenter);
        frameEnemies = new QFrame(centralWidget);
        frameEnemies->setObjectName(QStringLiteral("frameEnemies"));
        frameEnemies->setGeometry(QRect(580, 400, 381, 201));
        frameEnemies->setStyleSheet(QLatin1String("QFrame {\n"
"\n"
"border: 3px solid #a17c36;\n"
"border-radius: 10px;\n"
"background-color: rgb(9, 9, 9);\n"
"color: white;\n"
"}"));
        frameEnemies->setFrameShape(QFrame::StyledPanel);
        frameEnemies->setFrameShadow(QFrame::Raised);
        labelArmySection_2 = new QLabel(frameEnemies);
        labelArmySection_2->setObjectName(QStringLiteral("labelArmySection_2"));
        labelArmySection_2->setGeometry(QRect(10, 20, 361, 20));
        labelArmySection_2->setFont(font2);
        labelArmySection_2->setStyleSheet(QLatin1String("border: none;\n"
"color: white;\n"
"font: 10pt \"Constantia\";"));
        labelArmySection_2->setAlignment(Qt::AlignCenter);
        pushButtonAttackEnemy = new QPushButton(frameEnemies);
        pushButtonAttackEnemy->setObjectName(QStringLiteral("pushButtonAttackEnemy"));
        pushButtonAttackEnemy->setGeometry(QRect(150, 160, 80, 21));
        pushButtonAttackEnemy->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #a17c36;\n"
"border: 2 px solid red;\n"
"border-radius: 5px;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgb(161, 88, 46);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #f3f6db;\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"	background-color: gray;\n"
"	color: white;\n"
"}\n"
""));
        label_enemyImage = new QLabel(frameEnemies);
        label_enemyImage->setObjectName(QStringLiteral("label_enemyImage"));
        label_enemyImage->setGeometry(QRect(10, 40, 201, 101));
        label_enemyImage->setStyleSheet(QStringLiteral("border: none;"));
        label_enemyImage->setPixmap(QPixmap(QString::fromUtf8(":/assets/images/castle_3.png")));
        label_enemyImage->setAlignment(Qt::AlignCenter);
        label_enemyLevel = new QLabel(frameEnemies);
        label_enemyLevel->setObjectName(QStringLiteral("label_enemyLevel"));
        label_enemyLevel->setGeometry(QRect(230, 80, 91, 20));
        label_enemyLevel->setStyleSheet(QStringLiteral("border: none;"));
        label_enemyName = new QLabel(frameEnemies);
        label_enemyName->setObjectName(QStringLiteral("label_enemyName"));
        label_enemyName->setGeometry(QRect(230, 50, 111, 20));
        label_enemyName->setStyleSheet(QStringLiteral("border: none;"));
        label_enemyPower = new QLabel(frameEnemies);
        label_enemyPower->setObjectName(QStringLiteral("label_enemyPower"));
        label_enemyPower->setGeometry(QRect(230, 110, 101, 21));
        label_enemyPower->setStyleSheet(QStringLiteral("border: none;"));
        Ciekawostka = new QLabel(centralWidget);
        Ciekawostka->setObjectName(QStringLiteral("Ciekawostka"));
        Ciekawostka->setGeometry(QRect(30, 620, 921, 16));
        Ciekawostka->setStyleSheet(QStringLiteral("color: white;"));
        Ciekawostka->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        frameArmy->raise();
        frameBuildings->raise();
        frame_topBar->raise();
        frameEnemies->raise();
        Ciekawostka->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_goldText->setText(QApplication::translate("MainWindow", "Gold: ", nullptr));
        label_goldValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_woodValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_woodText->setText(QApplication::translate("MainWindow", "Wood:", nullptr));
        label_stoneValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_stoneText->setText(QApplication::translate("MainWindow", "Stone:", nullptr));
        label_ironValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_ironText->setText(QApplication::translate("MainWindow", "Iron:", nullptr));
        label_peopleValue->setText(QApplication::translate("MainWindow", "People: 0", nullptr));
        label_peopleLimit->setText(QApplication::translate("MainWindow", "/ 0", nullptr));
        label_goldIncome->setText(QApplication::translate("MainWindow", "+ 0", nullptr));
        label_woodIncome->setText(QApplication::translate("MainWindow", "+ 0", nullptr));
        label_stoneIncome->setText(QApplication::translate("MainWindow", "+ 0", nullptr));
        label_ironIncome->setText(QApplication::translate("MainWindow", "+ 0", nullptr));
        label_foodText->setText(QApplication::translate("MainWindow", "Food:", nullptr));
        label_foodValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_foodIncome->setText(QApplication::translate("MainWindow", "+ 0", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_appName->setText(QApplication::translate("MainWindow", "Middle Ages", nullptr));
        label->setText(QApplication::translate("MainWindow", "The Game", nullptr));
        pushButtonCredits->setText(QApplication::translate("MainWindow", "Credits", nullptr));
        labelBuildingsSection->setText(QApplication::translate("MainWindow", "Buildings", nullptr));
        label_sawmillName->setText(QApplication::translate("MainWindow", "Sawmill", nullptr));
        label_sawmillLevel->setText(QApplication::translate("MainWindow", "Level: 1", nullptr));
        pushButton_sawmillUpgrade->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        label_sawmillPrice->setText(QApplication::translate("MainWindow", "Upgrade cost:", nullptr));
        label_sawmillPrice_2->setText(QApplication::translate("MainWindow", "G: 0 | W: 0 | S: 0", nullptr));
        sawmillImage->setText(QString());
        label_farmName->setText(QApplication::translate("MainWindow", "Farm", nullptr));
        label_farmLevel->setText(QApplication::translate("MainWindow", "Level: 0", nullptr));
        pushButton_farmUpgrade->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        label_farmPrice->setText(QApplication::translate("MainWindow", "Upgrade cost:", nullptr));
        label_farmPrice_2->setText(QApplication::translate("MainWindow", "G: 0 | W: 0 | S: 0", nullptr));
        farmImage->setText(QString());
        label_stonePitName->setText(QApplication::translate("MainWindow", "Stone Pit", nullptr));
        label_stonePitLevel->setText(QApplication::translate("MainWindow", "Level: 1", nullptr));
        pushButton_stonePitUpgrade->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        label_stonePitPrice->setText(QApplication::translate("MainWindow", "Upgrade cost:", nullptr));
        label_stonePitPrice_2->setText(QApplication::translate("MainWindow", "G: 100 | W: 10 | S: 0", nullptr));
        stonePitImage->setText(QString());
        label_ironMineName->setText(QApplication::translate("MainWindow", "Iron Mine", nullptr));
        label_ironMineLevel->setText(QApplication::translate("MainWindow", "Level: 1", nullptr));
        pushButton_ironMineUpgrade->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        label_ironMinePrice->setText(QApplication::translate("MainWindow", "Upgrade cost:", nullptr));
        label_ironMinePrice_2->setText(QApplication::translate("MainWindow", "G: 100 | W: 10 | S: 0", nullptr));
        ironMineImage->setText(QString());
        label_hutName->setText(QApplication::translate("MainWindow", "Hut", nullptr));
        label_hutLevel->setText(QApplication::translate("MainWindow", "Level: 1", nullptr));
        pushButton_hutUpgrade->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        label_hutPrice->setText(QApplication::translate("MainWindow", "Upgrade cost:", nullptr));
        label_hutPrice_2->setText(QApplication::translate("MainWindow", "G: 100 | W: 10 | S: 0", nullptr));
        hutImage->setText(QString());
        label_barracksName->setText(QApplication::translate("MainWindow", "Barracks", nullptr));
        label_barracksLevel->setText(QApplication::translate("MainWindow", "Level: 1", nullptr));
        pushButton_barracksUpgrade->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        label_barracksPrice->setText(QApplication::translate("MainWindow", "Upgrade cost:", nullptr));
        label_barracksPrice_2->setText(QApplication::translate("MainWindow", "G: 100 | W: 10 | S: 0", nullptr));
        barracksImage->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Building's images: Forge of Empires", nullptr));
        labelArmySection->setText(QApplication::translate("MainWindow", "Army", nullptr));
        labelPikeman->setText(QApplication::translate("MainWindow", "Pikeman", nullptr));
        labelHorseman->setText(QApplication::translate("MainWindow", "Horseman", nullptr));
        labelArcher->setText(QApplication::translate("MainWindow", "Archer", nullptr));
        labelPikemanQuantity->setText(QApplication::translate("MainWindow", "Quantity: 0", nullptr));
        labelHorsemanQuantity->setText(QApplication::translate("MainWindow", "Quantity: 0", nullptr));
        labelArcherQuantity->setText(QApplication::translate("MainWindow", "Quantity: 0", nullptr));
        labelPikemanLevel->setText(QApplication::translate("MainWindow", "Level: 0", nullptr));
        label_HorsemanLevel->setText(QApplication::translate("MainWindow", "Level: 0", nullptr));
        label_ArcherLevel->setText(QApplication::translate("MainWindow", "Level: 0", nullptr));
        pushButton_Upgrade_Horseman->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        pushButton_Upgrade_Archer->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        pushButton_Buy_Archer->setText(QApplication::translate("MainWindow", "Buy", nullptr));
        pushButton_Buy_Horseman->setText(QApplication::translate("MainWindow", "Buy", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        pushButton_Upgrade_Pikeman->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        pushButton_Buy_Pikeman->setText(QApplication::translate("MainWindow", "Buy", nullptr));
        labelArmyPower->setText(QApplication::translate("MainWindow", "Army Power: 0", nullptr));
        labelArmySection_2->setText(QApplication::translate("MainWindow", "Enemies", nullptr));
        pushButtonAttackEnemy->setText(QApplication::translate("MainWindow", "ATTACK", nullptr));
        label_enemyImage->setText(QString());
        label_enemyLevel->setText(QApplication::translate("MainWindow", "Level: 0", nullptr));
        label_enemyName->setText(QApplication::translate("MainWindow", "Name: Mieszko", nullptr));
        label_enemyPower->setText(QApplication::translate("MainWindow", "Power: 0", nullptr));
        Ciekawostka->setText(QApplication::translate("MainWindow", "CIEKAWOSTKA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
