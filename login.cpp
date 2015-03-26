#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <string>
#include <iostream>
#include "Usuario.h"
#include <vector>
#include <QPixmap>
#include <QPalette>

using std::string;
using std::vector;
using std::cout;
using std::endl;


Login::Login(vector<Usuario*>* u,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{

    users=u;
    ui->setupUi(this);
    QPixmap bkgnd(":/telecom.png");
    bkgnd = bkgnd.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background,bkgnd);
    this->setPalette(palette);
}

Login::~Login()
{
    delete ui;
}

void Login::on_accept_clicked()
{
    string name = ui->new_user->text().toStdString();
    string pass = ui->new_pass->text().toStdString();
    users->push_back(new Usuario(name,pass));
    this->close();
}

void Login::on_pushButton_2_clicked()
{
    this->close();
}
