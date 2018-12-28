#include "llimitexceedederror.h"
#include "ui_llimitexceedederror.h"

LlimitExceededError::LlimitExceededError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LlimitExceededError)
{
    ui->setupUi(this);


    // set fixed window size
    this->setFixedSize(QSize(400, 78));
}

LlimitExceededError::~LlimitExceededError()
{
    delete ui;
}
