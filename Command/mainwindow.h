#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class Receiver;
class CommandHistory;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void addValor();
    void somar();
    void subtrair();
    void multiplicar();
    void dividir();
    void desfazer();
    void refazer();
    void limpar();

private:
    Ui::MainWindow *ui;
    Receiver *m_receiver;
    CommandHistory *m_commandHistory;

private:
    void init();
};

#endif // MAINWINDOW_H
