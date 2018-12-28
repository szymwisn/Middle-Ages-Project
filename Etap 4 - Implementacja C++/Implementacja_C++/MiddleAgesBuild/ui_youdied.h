/********************************************************************************
** Form generated from reading UI file 'youdied.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOUDIED_H
#define UI_YOUDIED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_youDied
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *youDied)
    {
        if (youDied->objectName().isEmpty())
            youDied->setObjectName(QStringLiteral("youDied"));
        youDied->resize(400, 103);
        label = new QLabel(youDied);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 381, 20));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(youDied);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 381, 20));
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(youDied);

        QMetaObject::connectSlotsByName(youDied);
    } // setupUi

    void retranslateUi(QDialog *youDied)
    {
        youDied->setWindowTitle(QApplication::translate("youDied", "Dialog", nullptr));
        label->setText(QApplication::translate("youDied", "Your soldiers failed!", nullptr));
        label_2->setText(QApplication::translate("youDied", "All your units DIED.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class youDied: public Ui_youDied {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOUDIED_H
