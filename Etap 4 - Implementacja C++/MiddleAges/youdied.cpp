#include "youdied.h"
#include "ui_youdied.h"

youDied::youDied(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::youDied)
{
    ui->setupUi(this);

    // set fixed window size
    this->setFixedSize(QSize(400, 103));
}

youDied::~youDied()
{
    delete ui;
}
