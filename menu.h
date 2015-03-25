#ifndef MENU_H
#define MENU_H

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

private:
    Ui::menu *ui;
};

#endif // MENU_H
