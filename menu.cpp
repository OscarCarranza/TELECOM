#include "menu.h"
#include "ui_menu.h"
#include "dialogembong.h"
#include "Cliente.h"
#include "list.h"
#include "remove.h"
#include "facturar.h"
#include "sales.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{

    ui->setupUi(this);
    QPixmap bkgnd(":/telecom.png");
    bkgnd = bkgnd.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background,bkgnd);
    this->setPalette(palette);
    clientes = new vector <Cliente*>;
    ventas = new vector <Venta*>;   

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
    DialogEmbONG Log(clientes);
    Log.setModal(true);
    Log.exec();
}

void menu::on_AddCliente_clicked()
{

}

void menu::on_BListar_clicked()
{
    List Log(clientes);
    Log.setModal(true);
    Log.exec();
}

void menu::on_Delete_clicked()
{
    Remove Log(clientes);
    Log.setModal(true);
    Log.exec();
}

void menu::on_BFac_clicked()
{
    Facturar Log(ventas);
    Log.setModal(true);
    Log.exec();
}

void menu::on_BVentas_clicked()
{
    Sales Log(ventas);
    Log.setModal(true);
    Log.exec();
}
