#ifndef LLIMITEXCEEDEDERROR_H
#define LLIMITEXCEEDEDERROR_H

#include <QDialog>

namespace Ui {
class LlimitExceededError;
}

class LlimitExceededError : public QDialog
{
    Q_OBJECT

public:
    explicit LlimitExceededError(QWidget *parent = 0);
    ~LlimitExceededError();

private:
    Ui::LlimitExceededError *ui;
};

#endif // LLIMITEXCEEDEDERROR_H
