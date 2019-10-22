#ifndef FAHRENHEITCELSIUS_H
#define FAHRENHEITCELSIUS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FahrenheitCelsius; }
QT_END_NAMESPACE

class FahrenheitCelsius : public QMainWindow
{
    Q_OBJECT

public:
    FahrenheitCelsius(QWidget *parent = nullptr);
    ~FahrenheitCelsius();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_inputUsuario_returnPressed();

private:
    Ui::FahrenheitCelsius *ui;
};
#endif // FAHRENHEITCELSIUS_H
