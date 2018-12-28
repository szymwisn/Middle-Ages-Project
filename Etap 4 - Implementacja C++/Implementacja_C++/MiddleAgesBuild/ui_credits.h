/********************************************************************************
** Form generated from reading UI file 'credits.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITS_H
#define UI_CREDITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Credits
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Credits)
    {
        if (Credits->objectName().isEmpty())
            Credits->setObjectName(QStringLiteral("Credits"));
        Credits->resize(282, 128);
        label = new QLabel(Credits);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 271, 21));
        label_2 = new QLabel(Credits);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 211, 21));
        label_3 = new QLabel(Credits);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 70, 241, 16));
        label_4 = new QLabel(Credits);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 90, 191, 21));
        label_5 = new QLabel(Credits);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 261, 16));

        retranslateUi(Credits);

        QMetaObject::connectSlotsByName(Credits);
    } // setupUi

    void retranslateUi(QDialog *Credits)
    {
        Credits->setWindowTitle(QApplication::translate("Credits", "Dialog", nullptr));
        label->setText(QApplication::translate("Credits", "Icons: https://www.flaticon.com/authors/smashicons", nullptr));
        label_2->setText(QApplication::translate("Credits", "https://www.flaticon.com/authors/freepik", nullptr));
        label_3->setText(QApplication::translate("Credits", "https://www.flaticon.com/authors/roundicons", nullptr));
        label_4->setText(QApplication::translate("Credits", "Building's images: Forge of Empires", nullptr));
        label_5->setText(QApplication::translate("Credits", "Code, idea: Szymon Wi\305\233niewski", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credits: public Ui_Credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITS_H
