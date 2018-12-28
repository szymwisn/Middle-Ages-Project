/********************************************************************************
** Form generated from reading UI file 'noresourceerror.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORESOURCEERROR_H
#define UI_NORESOURCEERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_NoResourceError
{
public:
    QLabel *label;

    void setupUi(QDialog *NoResourceError)
    {
        if (NoResourceError->objectName().isEmpty())
            NoResourceError->setObjectName(QStringLiteral("NoResourceError"));
        NoResourceError->resize(400, 59);
        NoResourceError->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 0);"));
        label = new QLabel(NoResourceError);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 401, 21));
        label->setStyleSheet(QStringLiteral("color: white;"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(NoResourceError);

        QMetaObject::connectSlotsByName(NoResourceError);
    } // setupUi

    void retranslateUi(QDialog *NoResourceError)
    {
        NoResourceError->setWindowTitle(QApplication::translate("NoResourceError", "Dialog", nullptr));
        label->setText(QApplication::translate("NoResourceError", "NOT ENOUGH RESOURCES!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoResourceError: public Ui_NoResourceError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORESOURCEERROR_H
