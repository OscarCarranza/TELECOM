#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include "menu.h"
#include <QMessageBox>
#include "login.h"
#include "Usuario.h"
#include <iostream>

using std::cout;
using std::endl;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    users = new vector <Usuario*>;
    users->push_back(new Usuario("oscarncr","1234"));
    ui->setupUi(this);
    QImage Logo(":/lightbulb.png");
    ui->logo->setPixmap(QPixmap::fromImage(Logo));
    this->move(450,100);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Blog_clicked()
{
    string user = ui->line_user->text().toStdString();
    string pass = ui->line_pass->text().toStdString();

    int cont = 0;

    for(unsigned i = 0; i < users->size(); i++){
        cout << users->at(i)->toString() << endl;
    }

    for(unsigned i = 0; i < users->size(); i++){
        if(users->at(i)->getUsername() == user && users->at(i)->getPassword() == pass){
            menu* menu_principal = new menu(this);
            menu_principal->exec();
            cont = 1;
            ui->line_user->setText("");
            ui->line_pass->setText("");
        }
    }
    if (cont == 0){
        QMessageBox msgbox;
        msgbox.setWindowTitle("Error de Autenticación");
        msgbox.setInformativeText("Usuario y/o Contraseña invalida");
        msgbox.exec();
        ui->line_user->setText("");
        ui->line_pass->setText("");
    }
}
void MainWindow::on_Breg_clicked()
{
    Login Log(users);
    Log.setModal(true);
    Log.exec();
}
