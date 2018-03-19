#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "concretecreator.h"
#include "icreator.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->createProduct, &QPushButton::clicked, this, &MainWindow::createProduct);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createProduct()
{
    ICreator* creator = new ConcreteCreator;
    creator->createProduct();

    QMessageBox message;
    message.setText(creator->getProduct()->toString());
    message.exec();
}
