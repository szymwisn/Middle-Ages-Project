/********************************************************************************
** Form generated from reading UI file 'llimitexceedederror.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LLIMITEXCEEDEDERROR_H
#define UI_LLIMITEXCEEDEDERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LlimitExceededError
{
public:
    QLabel *label;

    void setupUi(QDialog *LlimitExceededError)
    {
        if (LlimitExceededError->objectName().isEmpty())
            LlimitExceededError->setObjectName(QStringLiteral("LlimitExceededError"));
        LlimitExceededError->resize(400, 78);
        label = new QLabel(LlimitExceededError);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 381, 21));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(LlimitExceededError);

        QMetaObject::connectSlotsByName(LlimitExceededError);
    } // setupUi

    void retranslateUi(QDialog *LlimitExceededError)
    {
        LlimitExceededError->setWindowTitle(QApplication::translate("LlimitExceededError", "Dialog", nullptr));
        label->setText(QApplication::translate("LlimitExceededError", "ARMY LIMIT EXCEEDED", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LlimitExceededError: public Ui_LlimitExceededError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LLIMITEXCEEDEDERROR_H
