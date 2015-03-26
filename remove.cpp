#include "remove.h"
#include "ui_remove.h"
#include "Cliente.h"
#include <vector>
#include <QString>
#include <string>
#include <QMessageBox>

using std::vector;
using std::string;

Remove::Remove(vector <Cliente*>* clientes,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Remove)
{
    ui->setupUi(this);
    this->clientes = clientes;
}

Remove::~Remove()
{
    delete ui;
}

void Remove::on_pushButton_3_clicked()
{
    vector<Cliente*> clients = clientes[0];

    for(int i = 0; i < clients.size();i++){
       string tipo = clients[i]->type();
       QString str = QString::fromStdString(tipo);
       ui->cbcli->addItem(str);
    }

}

void Remove::on_pushButton_2_clicked()
{
    this->close();
}

void Remove::on_pushButton_clicked()
{

    int del = ui->cbcli->currentIndex();
    clientes->erase(clientes->begin()+(del-1));

    QMessageBox msgbox;
    msgbox.setWindowTitle("Exito");
    msgbox.setInformativeText("Cliente Eliminado");
    msgbox.exec();
    ui->cbcli->clear();
}
