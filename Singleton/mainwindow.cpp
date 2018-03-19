#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "singleton.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->instance, &QPushButton::clicked, this, &MainWindow::instanciar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::instanciar()
{
    Singleton* instance = Singleton::getInstance();
    QMessageBox messageBox;
    messageBox.setText(instance->message());
    messageBox.exec();
}
