#include "sales.h"
#include "ui_sales.h"
#include "venta.h"
#include <vector>
#include <string>
#include <QString>
#include <sstream>
#include "venta.h"

using std::vector;
using std::string;
using std::stringstream;
using std::endl;

Sales::Sales(vector <Venta*>* ventas,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sales)
{
    ui->setupUi(this);
    this->ventas = ventas;
}

Sales::~Sales()
{
    delete ui;
}

void Sales::on_pushButton_clicked()
{
    stringstream ss;
    vector<Venta*> sales= ventas[0];
    for(int i = 0; i < sales.size();i++){
        ss << sales[i]->toString();
        ss << endl << endl;
    }
    string list = ss.str();
    QString listaSales = QString::fromStdString(list);
    ui->list->setText(listaSales);
}

void Sales::on_pushButton_2_clicked()
{
    this->close();
}
