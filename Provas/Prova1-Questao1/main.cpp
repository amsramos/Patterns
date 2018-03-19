#include "mainwindow.h"
#include <QApplication>

#include "myfactory.h"
#include "imotor.h"

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();*/

    MyFactory* f = MyFactory::getInstance(4, 3, 2);
    IMotor* m1 = f->createMotor(); // Realiza a 1a instânciação do motor
    IMotor* m2 = f->createMotor(); // Realiza a 2a instânciação do motor
    IMotor* m3 = f->createMotor(); // Deve retornar o primeiro motor
    IMotor* m4 = f->createMotor(); // Deve retornar o segundo motor
}
