#include "menu.h"
#include "ui_menu.h"
#include "clients.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_BSalir_clicked()
{
    this->close();
}

void menu::on_BClientes_clicked()
{
    Clients* cliente = new Clients(this);
    cliente->exec();

}
