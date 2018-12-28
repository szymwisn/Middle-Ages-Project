#include "credits.h"
#include "ui_credits.h"

Credits::Credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Credits)
{
    ui->setupUi(this);

    // set fixed window size
    this->setFixedSize(QSize(282, 128));
}

Credits::~Credits()
{
    delete ui;
}
