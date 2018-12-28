#include "fooddelete.h"
#include "ui_fooddelete.h"

foodDelete::foodDelete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::foodDelete)
{
    ui->setupUi(this);
}

foodDelete::~foodDelete()
{
    delete ui;
}
