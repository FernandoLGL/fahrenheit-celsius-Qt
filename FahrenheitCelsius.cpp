#include "FahrenheitCelsius.h"
#include "ui_FahrenheitCelsius.h"
#include <QDebug>

FahrenheitCelsius::FahrenheitCelsius(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FahrenheitCelsius)
{
    ui->setupUi(this);

    //conexões. Os argumentos são os objetos e os ponteiros pros métodos
    connect(ui->comboBox, &QComboBox::currentTextChanged, this, &FahrenheitCelsius::currentTextChanged);
    connect(ui->inputUsuario, &QLineEdit::returnPressed, this, &FahrenheitCelsius::returnPressed);
}

FahrenheitCelsius::~FahrenheitCelsius()
{
    delete ui;
}

// aquele método anterior on_objeto_metodo já faz a ligação automaticamente.
// Quis fazer manualmente pra aprender e aí usei o connect no construtor
void FahrenheitCelsius::currentTextChanged(const QString &arg1)
{
    // Funcionando
    if(arg1 == "Fahrenheit"){
        qDebug() << "Selecionou Fahrenheit!";
        ui->labelResultado->setText("Em Celsius:");
    }
    else{
        qDebug() << "Selecionou Celsius!";
        ui->labelResultado->setText("Em Fahrenheit:");
    }

    if(ui->inputUsuario->text() == ""){
        ui->resultado->setText("");
        ui->resultado->setPlaceholderText("Resultado");
    }else
        returnPressed();
}

void FahrenheitCelsius::returnPressed()
{
    const QString input {ui->inputUsuario->text()};

    qDebug() << "O input foi " << input;

    double resultado{ input.toDouble() };

    QString saida{};

    if(ui->comboBox->currentText() == "Fahrenheit"){
        resultado -= 32;
        resultado *= 5.0/9;
        saida = QString::number(resultado);
        saida += " ºC";
    }else{
        resultado /= 5.0/9;
        resultado += 32;
        saida = QString::number(resultado);
        saida += " ºF";
    }

    ui->resultado->setText(saida);
}
