#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "Usuario.h"
using std::vector;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Blog_clicked();

    void on_Breg_clicked();

private:
    Ui::MainWindow *ui;
    vector<Usuario*>* users;
};

#endif // MAINWINDOW_H
