/********************************************************************************
** Form generated from reading UI file 'fooddelete.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODDELETE_H
#define UI_FOODDELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_foodDelete
{
public:
    QLabel *label;

    void setupUi(QDialog *foodDelete)
    {
        if (foodDelete->objectName().isEmpty())
            foodDelete->setObjectName(QStringLiteral("foodDelete"));
        foodDelete->resize(400, 75);
        label = new QLabel(foodDelete);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 381, 20));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(foodDelete);

        QMetaObject::connectSlotsByName(foodDelete);
    } // setupUi

    void retranslateUi(QDialog *foodDelete)
    {
        foodDelete->setWindowTitle(QApplication::translate("foodDelete", "Dialog", nullptr));
        label->setText(QApplication::translate("foodDelete", "FOOD TAX TAKEN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class foodDelete: public Ui_foodDelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODDELETE_H
