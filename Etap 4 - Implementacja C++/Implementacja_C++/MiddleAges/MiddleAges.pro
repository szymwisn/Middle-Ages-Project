#-------------------------------------------------
#
# Project created by QtCreator 2018-04-06T11:58:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MiddleAges
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    resource.cpp \
    price.cpp \
    building.cpp \
    farm.cpp \
    sawmill.cpp \
    barracks.cpp \
    hut.cpp \
    ironmine.cpp \
    stonepit.cpp \
    noresourceerror.cpp \
    credits.cpp \
    army.cpp \
    myarmy.cpp \
    pikeman.cpp \
    horseman.cpp \
    archer.cpp \
    llimitexceedederror.cpp \
    enemy.cpp \
    youdied.cpp \
    fooddelete.cpp \
    desertiondialog.cpp

HEADERS += \
        mainwindow.h \
    resource.h \
    price.h \
    building.h \
    farm.h \
    sawmill.h \
    barracks.h \
    hut.h \
    ironmine.h \
    stonepit.h \
    noresourceerror.h \
    credits.h \
    army.h \
    myarmy.h \
    pikeman.h \
    horseman.h \
    archer.h \
    llimitexceedederror.h \
    enemy.h \
    youdied.h \
    fooddelete.h \
    desertiondialog.h

FORMS += \
        mainwindow.ui \
    noresourceerror.ui \
    credits.ui \
    llimitexceedederror.ui \
    youdied.ui \
    fooddelete.ui \
    desertiondialog.ui

RESOURCES += \
    resources.qrc
