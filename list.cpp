#include "list.h"
#include "ui_list.h"
#include "Cliente.h"
#include <vector>
#include <sstream>>
#include <string>
#include <QString>
#include <iostream>

using std::vector;
using std::stringstream;
using std::string;
using std::endl;

List::List(vector <Cliente*>* clientes,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::List)
{
    ui->setupUi(this);
    this->clientes = clientes;
}

List::~List()
{
    delete ui;
}

void List::on_pushButton_2_clicked()
{
    stringstream ss;
    vector<Cliente*> clients = clientes[0];
    for(int i = 0; i < clients.size();i++){
        ss << clients[i]->toString();
        ss << endl << endl;
    }
    string list = ss.str();
    QString listaClie = QString::fromStdString(list);
    ui->lista->setText(listaClie);
}

void List::on_pushButton_clicked()
{
    this->close();
}
