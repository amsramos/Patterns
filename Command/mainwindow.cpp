#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sumcommand.h"
#include "multiplycommand.h"
#include "commandhistory.h"
#include "receiver.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_receiver(new Receiver(0.0)),
    m_commandHistory(new CommandHistory())
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    setWindowTitle("Calculadora");

    ui->resultado->display("0");
    ui->valorAtual->display("");

    connect(ui->btn0, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btn1, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btn2, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btn3, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btn4, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btn5, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btn6, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btn7, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btn8, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btn9, &QPushButton::clicked, this, &MainWindow::addValor);
    connect(ui->btnPonto, &QPushButton::clicked, this, &MainWindow::addValor);

    connect(ui->btnSomar, &QPushButton::clicked, this, &MainWindow::somar);
    connect(ui->btnSubtrair, &QPushButton::clicked, this, &MainWindow::subtrair);
    connect(ui->btnMultiplicar, &QPushButton::clicked, this, &MainWindow::multiplicar);
    connect(ui->btnDividir, &QPushButton::clicked, this, &MainWindow::dividir);

    connect(ui->btnRedo, &QPushButton::clicked, this, &MainWindow::refazer);
    connect(ui->btnUndo, &QPushButton::clicked, this, &MainWindow::desfazer);
    connect(ui->btnClear, &QPushButton::clicked, this, &MainWindow::limpar);

}

void MainWindow::addValor()
{
    QPushButton *button = dynamic_cast<QPushButton *>(sender());

    if(button){
        QString valorAtual = QString::number(ui->valorAtual->value());
        ui->valorAtual->display(valorAtual + button->text());
    }
}

void MainWindow::multiplicar()
{
    double valor = ui->valorAtual->value();

    m_receiver->multiply(valor);

    ui->valorAtual->display("0");

    ui->resultado->display(m_receiver->toString());

    m_commandHistory->pushCommand(new MultiplyCommand(m_receiver, valor));
}

void MainWindow::somar()
{
    double valor = ui->valorAtual->value();

    m_receiver->sum(valor);

    ui->valorAtual->display("0");

    ui->resultado->display(m_receiver->toString());

    m_commandHistory->pushCommand(new SumCommand(m_receiver, valor));
}

void MainWindow::dividir()
{
    double valor = ui->valorAtual->value();

    if(!valor){
        QMessageBox messageBox;
        messageBox.setWindowTitle("Divisão por zero!");
        messageBox.setText("Não é possível dividir por zero!!!");
        messageBox.exec();
        return;
    }

    m_receiver->multiply(1/valor);

    ui->valorAtual->display("0");

    ui->resultado->display(m_receiver->toString());

    m_commandHistory->pushCommand(new MultiplyCommand(m_receiver, 1/valor));
}

void MainWindow::subtrair()
{
    double valor = ui->valorAtual->value();

    m_receiver->sum(-valor);

    ui->valorAtual->display("0");

    ui->resultado->display(m_receiver->toString());

    m_commandHistory->pushCommand(new SumCommand(m_receiver, -valor));
}

void MainWindow::refazer()
{
    if(!m_commandHistory->redoCommand()){
        QMessageBox message;
        message.setText("Não há o que refazer!");
        message.exec();
    }else
        ui->resultado->display(m_receiver->toString());
}

void MainWindow::desfazer()
{
    if(!m_commandHistory->undoCommand()){
        QMessageBox message;
        message.setText("Não há o que desfazer!");
        message.exec();
    }else
        ui->resultado->display(m_receiver->toString());
}

void MainWindow::limpar()
{

}
