#include "desertiondialog.h"
#include "ui_desertiondialog.h"

desertionDialog::desertionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::desertionDialog)
{
    ui->setupUi(this);
}

desertionDialog::~desertionDialog()
{
    delete ui;
}
