#include "FahrenheitCelsius.h"
#include "ui_FahrenheitCelsius.h"
#include <QDebug>

FahrenheitCelsius::FahrenheitCelsius(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FahrenheitCelsius)
{
    ui->setupUi(this);
}

FahrenheitCelsius::~FahrenheitCelsius()
{
    delete ui;
}


void FahrenheitCelsius::on_comboBox_currentTextChanged(const QString &arg1)
{
    // Funcionando
    if(arg1 == "Fahrenheit")
        qDebug() << "Selecionou Fahrenheit!";
    else
        qDebug() << "Selecionou Celsius!";
}

void FahrenheitCelsius::on_inputUsuario_returnPressed()
{
    const QString input {ui->inputUsuario->text()};

    qDebug() << "O input foi " << input;

    double resultado{ input.toDouble() };

    if(ui->comboBox->currentText() == "Fahrenheit"){
        resultado -= 32;
        resultado *= 5.0/9;
    }else{
        resultado /= 5.0/9;
        resultado += 32;
    }

    ui->resultado->setText(QString::number(resultado));
}
