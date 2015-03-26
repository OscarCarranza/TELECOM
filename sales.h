#ifndef SALES_H
#define SALES_H
#include <vector>
#include "venta.h"

#include <QDialog>

using std::vector;

namespace Ui {
class Sales;
}

class Sales : public QDialog
{
    Q_OBJECT

public:
    explicit Sales(vector<Venta*>*,QWidget *parent = 0);
    ~Sales();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Sales *ui;
    vector <Venta*>* ventas;
};

#endif // SALES_H
