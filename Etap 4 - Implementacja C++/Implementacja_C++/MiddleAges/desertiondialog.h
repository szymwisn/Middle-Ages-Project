#ifndef DESERTIONDIALOG_H
#define DESERTIONDIALOG_H

#include <QDialog>

namespace Ui {
class desertionDialog;
}

class desertionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit desertionDialog(QWidget *parent = 0);
    ~desertionDialog();

private:
    Ui::desertionDialog *ui;
};

#endif // DESERTIONDIALOG_H
