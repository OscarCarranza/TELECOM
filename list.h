#ifndef LIST_H
#define LIST_H
#include "Cliente.h"
#include <vector>
#include <QDialog>

using std::vector;
namespace Ui {
class List;
}

class List : public QDialog
{
    Q_OBJECT

public:
    explicit List(vector <Cliente*>*,QWidget *parent = 0);
    ~List();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::List *ui;
    vector <Cliente*>* clientes;
};

#endif // LIST_H
