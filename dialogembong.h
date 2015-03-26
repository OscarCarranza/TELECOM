#ifndef DIALOGEMBONG_H
#define DIALOGEMBONG_H
#include <vector>
#include "Cliente.h"
#include <QDialog>
using std::vector;
namespace Ui {
class DialogEmbONG;
}

class DialogEmbONG : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEmbONG(vector <Cliente*>*,QWidget *parent = 0);
    ~DialogEmbONG();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_cb_clientes_currentIndexChanged(int index);

private:
    Ui::DialogEmbONG *ui;
    vector <Cliente*>* clientes;
};

#endif // DIALOGEMBONG_H
