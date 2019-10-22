#include "FahrenheitCelsius.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FahrenheitCelsius w;
    w.show();
    return a.exec();
}
