#include "bash1.h"
#include "ui_bash1.h"
#include "QProcess"

Bash1::Bash1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Bash1)
{
    ui->setupUi(this);
}

Bash1::~Bash1()
{
    delete ui;
}

void Bash1::on_b_ejecutar_clicked()
{
    ui->b_ejecutar->setEnabled(false);

    QProcess MiComando;
    MiComando.start(ui->comando->text());
    MiComando.waitForFinished(-1);

    QString salidaOK = MiComando.readAllStandardOutput();
    QString salidaFail = MiComando.readAllStandardError();

    ui->MuestraResultado->addItem("Normal: "+salidaOK);
    ui->MuestraResultado->addItem("Fallo: "+salidaFail);

    ui->b_ejecutar->setEnabled(true);
}
