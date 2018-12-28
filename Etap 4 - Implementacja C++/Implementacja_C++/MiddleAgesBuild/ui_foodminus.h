/********************************************************************************
** Form generated from reading UI file 'foodminus.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODMINUS_H
#define UI_FOODMINUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_foodMinus
{
public:
    QLabel *label;

    void setupUi(QDialog *foodMinus)
    {
        if (foodMinus->objectName().isEmpty())
            foodMinus->setObjectName(QStringLiteral("foodMinus"));
        foodMinus->resize(320, 130);
        label = new QLabel(foodMinus);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 301, 20));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(foodMinus);

        QMetaObject::connectSlotsByName(foodMinus);
    } // setupUi

    void retranslateUi(QDialog *foodMinus)
    {
        foodMinus->setWindowTitle(QApplication::translate("foodMinus", "Dialog", nullptr));
        label->setText(QApplication::translate("foodMinus", "FOOD TAX TAKEN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class foodMinus: public Ui_foodMinus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODMINUS_H
