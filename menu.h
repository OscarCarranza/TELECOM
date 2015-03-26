#ifndef MENU_H
#define MENU_H
#include "Cliente.h"
#include "venta.h"
#include <vector>

using std::vector;
#include <QDialog>

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();

private slots:
    void on_BSalir_clicked();

    void on_BClientes_clicked();

    void on_AddCliente_clicked();

    void on_BListar_clicked();

    void on_Delete_clicked();

    void on_BFac_clicked();

    void on_BVentas_clicked();

private:
    Ui::menu *ui;
    vector <Cliente*>* clientes;
    vector <Venta*>* ventas;
};

#endif // MENU_H
