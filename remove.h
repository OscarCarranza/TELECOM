#ifndef REMOVE_H
#define REMOVE_H
#include "Cliente.h"
#include <vector>

using std::vector;

#include <QDialog>

namespace Ui {
class Remove;
}

class Remove : public QDialog
{
    Q_OBJECT

public:
    explicit Remove(vector <Cliente*>*, QWidget *parent = 0);
    ~Remove();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Remove *ui;
    vector <Cliente*>* clientes;
};

#endif // REMOVE_H
