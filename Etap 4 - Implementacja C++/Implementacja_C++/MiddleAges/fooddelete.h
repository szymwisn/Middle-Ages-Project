#ifndef FOODDELETE_H
#define FOODDELETE_H

#include <QDialog>

namespace Ui {
class foodDelete;
}

class foodDelete : public QDialog
{
    Q_OBJECT

public:
    explicit foodDelete(QWidget *parent = 0);
    ~foodDelete();

private:
    Ui::foodDelete *ui;
};

#endif // FOODDELETE_H
