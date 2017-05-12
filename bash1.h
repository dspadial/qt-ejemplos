#ifndef BASH1_H
#define BASH1_H

#include <QMainWindow>

namespace Ui {
class Bash1;
}

class Bash1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Bash1(QWidget *parent = 0);
    ~Bash1();

private slots:
    void on_b_ejecutar_clicked();

private:
    Ui::Bash1 *ui;
};

#endif // BASH1_H
