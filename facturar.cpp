#include "facturar.h"
#include "ui_facturar.h"
#include <QString>
#include <vector>
#include <QMessageBox>
#include "venta.h"
#include <iostream>

using std::vector;
using std::cout;

Facturar::Facturar(vector <Venta*>* ventas, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Facturar)
{
    ui->setupUi(this);
    this->ventas = ventas;
}

Facturar::~Facturar()
{
    delete ui;
}



void Facturar::on_comboBox_currentIndexChanged(int index)
{
    if(index == 1){
        QString precio = QString::fromStdString("15,000.00");
        QString imp = QString::fromStdString("2,250.00");
        QString tot = QString::fromStdString("17,250.00");

        ui->price->setText(precio);
        ui->isv->setText(imp);
        ui->total->setText(tot);
    }

    else if(index == 2){
        QString precio = QString::fromStdString("730.00");
        QString imp = QString::fromStdString("112.50");
        QString tot = QString::fromStdString("843,50");

        ui->price->setText(precio);
        ui->isv->setText(imp);
        ui->total->setText(tot);
    }

    else if(index == 3){
        QString precio = QString::fromStdString("18,300.00");
        QString imp = QString::fromStdString("2,745.00");
        QString tot = QString::fromStdString("21,045.00");

        ui->price->setText(precio);
        ui->isv->setText(imp);
        ui->total->setText(tot);
    }

    else if(index == 4){
        QString precio = QString::fromStdString("10,000.00");
        QString imp = QString::fromStdString("1,500.00");
        QString tot = QString::fromStdString("11,500.00");

        ui->price->setText(precio);
        ui->isv->setText(imp);
        ui->total->setText(tot);
    }

    else if(index == 5){
        QString precio = QString::fromStdString("9,750.00");
        QString imp = QString::fromStdString("1,462.50");
        QString tot = QString::fromStdString("11,212.50");

        ui->price->setText(precio);
        ui->isv->setText(imp);
        ui->total->setText(tot);
    }

    else if(index == 6){
        QString precio = QString::fromStdString("16,000.00");
        QString imp = QString::fromStdString("2,400.00");
        QString tot = QString::fromStdString("18,400.00");

        ui->price->setText(precio);
        ui->isv->setText(imp);
        ui->total->setText(tot);
    }

    else if(index == 7){
        QString precio = QString::fromStdString("11,900.00");
        QString imp = QString::fromStdString("1,785.00");
        QString tot = QString::fromStdString("13,685.00");

        ui->price->setText(precio);
        ui->isv->setText(imp);
        ui->total->setText(tot);
    }



}

void Facturar::on_pushButton_clicked()
{
    QMessageBox msgbox;
    msgbox.setWindowTitle("Exito");
    msgbox.setInformativeText("Venta realizada");
    msgbox.exec();

    string cel = ui->comboBox->currentText().toStdString();
    string price = ui->price->text().toStdString();
    string tot = ui->total->text().toStdString();
    int code = ui->codigo->text().toInt();
    ventas->push_back(new Venta(cel,price,tot,code));

    ui->price->setText("");
    ui->codigo->setText("");
    ui->isv->setText("");
    ui->total->setText("");
    this->close();
}
