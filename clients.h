#ifndef CLIENTS_H
#define CLIENTS_H
#include "Cliente.h"

#include <QDialog>

namespace Ui {
class Clients;
}

class Clients : public QDialog
{
    Q_OBJECT

public:
    explicit Clients(QWidget *parent = 0);
    ~Clients();
    Cliente* getCliente()const;

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::Clients *ui;
    Cliente* client;
};

#endif // CLIENTS_H
