#ifndef NORESOURCEERROR_H
#define NORESOURCEERROR_H

#include <QDialog>

namespace Ui {
class NoResourceError;
}

class NoResourceError : public QDialog
{
    Q_OBJECT

public:
    explicit NoResourceError(QWidget *parent = 0);
    ~NoResourceError();

private:
    Ui::NoResourceError *ui;
};

#endif // NORESOURCEERROR_H
