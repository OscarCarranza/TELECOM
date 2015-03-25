#include "clients.h"
#include "ui_clients.h"
#include "Cliente.h"
#include "EmbajadaONG.h"
#include "dialogembong.h"

Clients::Clients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Clients)
{
    ui->setupUi(this);
}

Clients::~Clients()
{
    delete ui;
}

Cliente* Clients::getCliente()const{
    return client;
}
void Clients::on_pushButton_3_clicked()
{
    DialogEmbONG* window = new DialogEmbONG(this);
    window->exec();
}
