#include "FahrenheitCelsius.h"
#include "ui_FahrenheitCelsius.h"

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

