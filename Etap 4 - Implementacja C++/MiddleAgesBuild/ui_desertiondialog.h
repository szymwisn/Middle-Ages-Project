/********************************************************************************
** Form generated from reading UI file 'desertiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESERTIONDIALOG_H
#define UI_DESERTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_desertionDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *desertionDialog)
    {
        if (desertionDialog->objectName().isEmpty())
            desertionDialog->setObjectName(QStringLiteral("desertionDialog"));
        desertionDialog->resize(400, 73);
        label = new QLabel(desertionDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 381, 21));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(desertionDialog);

        QMetaObject::connectSlotsByName(desertionDialog);
    } // setupUi

    void retranslateUi(QDialog *desertionDialog)
    {
        desertionDialog->setWindowTitle(QApplication::translate("desertionDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("desertionDialog", "Some soldiers have deserted!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class desertionDialog: public Ui_desertionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESERTIONDIALOG_H
