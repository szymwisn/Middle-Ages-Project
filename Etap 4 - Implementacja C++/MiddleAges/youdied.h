#ifndef YOUDIED_H
#define YOUDIED_H

#include <QDialog>

namespace Ui {
class youDied;
}

class youDied : public QDialog
{
    Q_OBJECT

public:
    explicit youDied(QWidget *parent = 0);
    ~youDied();

private:
    Ui::youDied *ui;
};

#endif // YOUDIED_H
