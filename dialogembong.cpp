#include "dialogembong.h"
#include "ui_dialogembong.h"
#include <string>
#include "EmbajadaONG.h"
#include <ctime>
#include <cstdlib>

DialogEmbONG::DialogEmbONG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEmbONG)
{
    ui->setupUi(this);
    ui->le_name->setEnabled(false);
    ui->le_adress->setEnabled(false);
    ui->le_tel->setEnabled(false);
    ui->le_id->setEnabled(false);
    ui->le_email->setEnabled(false);
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
    srand(time(0));
    int tipo = rand() % 2 +1;
    string caracteristica = ui->le_car->text().toStdString();
    int desc = ui->desc->value();


}

void DialogEmbONG::on_comboBox_currentIndexChanged(int index)
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
