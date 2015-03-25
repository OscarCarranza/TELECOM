#ifndef DIALOGEMBONG_H
#define DIALOGEMBONG_H

#include <QDialog>

namespace Ui {
class DialogEmbONG;
}

class DialogEmbONG : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEmbONG(QWidget *parent = 0);
    ~DialogEmbONG();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::DialogEmbONG *ui;
};

#endif // DIALOGEMBONG_H
