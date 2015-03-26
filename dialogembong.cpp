#include "dialogembong.h"
#include "ui_dialogembong.h"
#include <string>
#include "EmbajadaONG.h"
#include "Empresas.h"
#include "Prepago.h"
#include "Postpago.h"
#include <ctime>
#include <cstdlib>
#include <QMessageBox>
#include "Cliente.h"
#include <vector>

using namespace std;

DialogEmbONG::DialogEmbONG(vector <Cliente*>* clientes,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEmbONG)
{
    this->clientes = clientes;
    ui->setupUi(this);
    ui->le_name->setEnabled(true);
    ui->le_adress->setEnabled(true);
    ui->le_tel->setEnabled(true);
    ui->le_id->setEnabled(false);
    ui->le_email->setEnabled(true);
    ui->le_fecha->setEnabled(false);
    ui->le_pago->setEnabled(false);
    ui->le_fac_c->setEnabled(false);
    ui->fac_m->setEnabled(false);
    ui->num_lineas->setEnabled(false);
    ui->le_car->setEnabled(false);
    ui->le_contact->setEnabled(false);
    ui->le_job->setEnabled(false);
    ui->le_saldo->setEnabled(false);
    ui->le_job->setEnabled(false);
    ui->cb2->setEnabled(false);
    ui->desc->setEnabled(false);
}

DialogEmbONG::~DialogEmbONG()
{
    delete ui;
}

void DialogEmbONG::on_pushButton_clicked()
{
    string name = ui->le_name->text().toStdString();
    string adress = ui->le_adress->text().toStdString();
    string email = ui->le_email->text().toStdString();
    unsigned int num_fijo = ui->le_tel->text().toInt();

    int num_lineas = ui->num_lineas->value();
    string contact = ui->le_contact->text().toStdString();
    string job = ui->le_job->text().toStdString();
    int fac_m = ui->fac_m->text().toDouble();
    int type = ui->cb2->currentIndex();
    string tipo_emp = "Entrepreneur";
    if(type == 2)
        tipo_emp = "Enterprise";
    else if(type == 3)
        tipo_emp = "Elite";
    else
        tipo_emp = "Prime";

    string caracteristica = ui->le_car->text().toStdString();
    int desc = ui->desc->value();

    double saldo = ui->le_saldo->text().toDouble();
    int id = ui->le_id->text().toInt();
    double fac_c = ui->le_fac_c->text().toDouble();
    string pago = ui->le_pago->text().toStdString();
    string fecha = ui->le_fecha->text().toStdString();

    int cliente = ui->cb_clientes->currentIndex();
    srand(time(0));
    bool internet = false;
    if(rand()%2)
        internet = true;

    if(cliente == 1)
        clientes->push_back(new Empresas(name,adress,email,num_fijo,num_lineas,contact,job,tipo_emp,fac_m));
    else if(cliente == 2)
        clientes->push_back(new EmbajadaONG(name,adress,email,num_fijo,num_lineas,contact,job,rand()%2+1,caracteristica,desc));
    else if(cliente == 3)
        clientes->push_back(new Prepago(name,adress,email,num_fijo,id,internet,saldo));
    else
        clientes->push_back(new Postpago(name,adress,email,num_fijo,id,fac_c,fecha,pago));

    QMessageBox msgbox;
    msgbox.setWindowTitle("Exito");
    msgbox.setInformativeText("Cliente agregado exitosemente");
    msgbox.exec();
    this->close();

    ui->le_name->setText("");
    ui->le_adress->setText("");
    ui->le_tel->setText("");
    ui->le_id->setText("");
    ui->le_email->setText("");
    ui->le_fecha->setText("");
    ui->le_pago->setText("");
    ui->le_fac_c->setText("");
    ui->fac_m->setText("");
    ui->num_lineas->value();
    ui->le_car->setText("");
    ui->le_contact->setText("");
    ui->le_job->setText("");
    ui->le_saldo->setText("");
    ui->desc->setValue(0);


}

void DialogEmbONG::on_comboBox_currentIndexChanged(int index)
{

}

void DialogEmbONG::on_cb_clientes_currentIndexChanged(int index)
{
    if(index == 1){
        ui->le_name->setEnabled(true);
        ui->le_adress->setEnabled(true);
        ui->le_tel->setEnabled(true);
        ui->le_id->setEnabled(false);
        ui->le_email->setEnabled(true);
        ui->le_fecha->setEnabled(false);
        ui->le_pago->setEnabled(false);
        ui->le_fac_c->setEnabled(false);
        ui->fac_m->setEnabled(true);
        ui->num_lineas->setEnabled(true);
        ui->le_car->setEnabled(false);
        ui->le_contact->setEnabled(true);
        ui->le_job->setEnabled(true);
        ui->le_saldo->setEnabled(false);
        ui->desc->setEnabled(false);
        ui->cb2->setEnabled(true);
    }
    else if(index == 2){
        ui->le_name->setEnabled(true);
        ui->le_adress->setEnabled(true);
        ui->le_tel->setEnabled(true);
        ui->le_id->setEnabled(false);
        ui->le_email->setEnabled(true);
        ui->le_fecha->setEnabled(false);
        ui->le_pago->setEnabled(false);
        ui->le_fac_c->setEnabled(false);
        ui->fac_m->setEnabled(false);
        ui->num_lineas->setEnabled(true);
        ui->le_car->setEnabled(true);
        ui->le_contact->setEnabled(true);
        ui->le_job->setEnabled(true);
        ui->le_saldo->setEnabled(false);
        ui->le_job->setEnabled(true);
        ui->desc->setEnabled(true);
        ui->cb2->setEnabled(false);
    }
    else if(index == 3){
        ui->le_name->setEnabled(true);
        ui->le_adress->setEnabled(true);
        ui->le_tel->setEnabled(true);
        ui->le_id->setEnabled(true);
        ui->le_email->setEnabled(true);
        ui->le_fecha->setEnabled(false);
        ui->le_pago->setEnabled(false);
        ui->le_fac_c->setEnabled(false);
        ui->fac_m->setEnabled(false);
        ui->num_lineas->setEnabled(false);
        ui->le_car->setEnabled(false);
        ui->le_contact->setEnabled(false);
        ui->le_job->setEnabled(false);
        ui->le_saldo->setEnabled(true);
        ui->le_job->setEnabled(false);
        ui->desc->setEnabled(false);
        ui->cb2->setEnabled(false);
    }
    else if(index == 4){
        ui->le_name->setEnabled(true);
        ui->le_adress->setEnabled(true);
        ui->le_tel->setEnabled(true);
        ui->le_id->setEnabled(true);
        ui->le_email->setEnabled(true);
        ui->le_fecha->setEnabled(true);
        ui->le_pago->setEnabled(true);
        ui->le_fac_c->setEnabled(true);
        ui->fac_m->setEnabled(false);
        ui->num_lineas->setEnabled(false);
        ui->le_car->setEnabled(false);
        ui->le_contact->setEnabled(false);
        ui->le_job->setEnabled(false);
        ui->le_saldo->setEnabled(false);
        ui->le_job->setEnabled(false);
        ui->desc->setEnabled(false);
        ui->cb2->setEnabled(false);
    }
}
