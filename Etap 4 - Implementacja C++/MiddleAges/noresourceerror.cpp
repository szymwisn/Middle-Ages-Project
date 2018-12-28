#include "noresourceerror.h"
#include "ui_noresourceerror.h"

NoResourceError::NoResourceError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NoResourceError)
{
    ui->setupUi(this);

    // set fixed window size
    this->setFixedSize(QSize(400, 59));
}

NoResourceError::~NoResourceError()
{
    delete ui;
}
