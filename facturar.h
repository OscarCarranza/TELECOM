#ifndef FACTURAR_H
#define FACTURAR_H
#include <vector>
#include "venta.h"


#include <QDialog>

using std::vector;

namespace Ui {
class Facturar;
}

class Facturar : public QDialog
{
    Q_OBJECT

public:
    explicit Facturar(vector <Venta*>*,QWidget *parent = 0);
    ~Facturar();

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::Facturar *ui;
    vector <Venta*>* ventas;
};

#endif // FACTURAR_H
