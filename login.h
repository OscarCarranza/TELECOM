#ifndef LOGIN_H
#define LOGIN_H
#include <vector>
#include "Usuario.h"
#include <QDialog>

using std::vector;

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(vector<Usuario*>*,QWidget *parent = 0);
    ~Login();

private slots:

    void on_accept_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Login *ui;
    vector<Usuario*>* users ;
};

#endif // LOGIN_H
