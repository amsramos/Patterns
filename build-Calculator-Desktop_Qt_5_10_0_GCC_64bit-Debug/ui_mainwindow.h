/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLCDNumber *resultado;
    QLabel *label_2;
    QLCDNumber *valorAtual;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnClear;
    QPushButton *btnSomar;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btnRedo;
    QPushButton *btnSubtrair;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnUndo;
    QPushButton *btnMultiplicar;
    QPushButton *btn0;
    QPushButton *btnPonto;
    QPushButton *btnDividir;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(442, 335);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        resultado = new QLCDNumber(centralWidget);
        resultado->setObjectName(QStringLiteral("resultado"));
        resultado->setDigitCount(18);

        gridLayout->addWidget(resultado, 1, 0, 1, 5);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        valorAtual = new QLCDNumber(centralWidget);
        valorAtual->setObjectName(QStringLiteral("valorAtual"));
        valorAtual->setDigitCount(18);
        valorAtual->setProperty("value", QVariant(1e+21));

        gridLayout->addWidget(valorAtual, 3, 0, 1, 5);

        btn1 = new QPushButton(centralWidget);
        btn1->setObjectName(QStringLiteral("btn1"));

        gridLayout->addWidget(btn1, 4, 0, 1, 1);

        btn2 = new QPushButton(centralWidget);
        btn2->setObjectName(QStringLiteral("btn2"));

        gridLayout->addWidget(btn2, 4, 1, 1, 1);

        btn3 = new QPushButton(centralWidget);
        btn3->setObjectName(QStringLiteral("btn3"));

        gridLayout->addWidget(btn3, 4, 2, 1, 1);

        btnClear = new QPushButton(centralWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout->addWidget(btnClear, 4, 3, 1, 1);

        btnSomar = new QPushButton(centralWidget);
        btnSomar->setObjectName(QStringLiteral("btnSomar"));

        gridLayout->addWidget(btnSomar, 4, 4, 1, 1);

        btn4 = new QPushButton(centralWidget);
        btn4->setObjectName(QStringLiteral("btn4"));

        gridLayout->addWidget(btn4, 5, 0, 1, 1);

        btn5 = new QPushButton(centralWidget);
        btn5->setObjectName(QStringLiteral("btn5"));

        gridLayout->addWidget(btn5, 5, 1, 1, 1);

        btn6 = new QPushButton(centralWidget);
        btn6->setObjectName(QStringLiteral("btn6"));

        gridLayout->addWidget(btn6, 5, 2, 1, 1);

        btnRedo = new QPushButton(centralWidget);
        btnRedo->setObjectName(QStringLiteral("btnRedo"));

        gridLayout->addWidget(btnRedo, 5, 3, 1, 1);

        btnSubtrair = new QPushButton(centralWidget);
        btnSubtrair->setObjectName(QStringLiteral("btnSubtrair"));

        gridLayout->addWidget(btnSubtrair, 5, 4, 1, 1);

        btn7 = new QPushButton(centralWidget);
        btn7->setObjectName(QStringLiteral("btn7"));

        gridLayout->addWidget(btn7, 6, 0, 1, 1);

        btn8 = new QPushButton(centralWidget);
        btn8->setObjectName(QStringLiteral("btn8"));

        gridLayout->addWidget(btn8, 6, 1, 1, 1);

        btn9 = new QPushButton(centralWidget);
        btn9->setObjectName(QStringLiteral("btn9"));

        gridLayout->addWidget(btn9, 6, 2, 1, 1);

        btnUndo = new QPushButton(centralWidget);
        btnUndo->setObjectName(QStringLiteral("btnUndo"));

        gridLayout->addWidget(btnUndo, 6, 3, 1, 1);

        btnMultiplicar = new QPushButton(centralWidget);
        btnMultiplicar->setObjectName(QStringLiteral("btnMultiplicar"));

        gridLayout->addWidget(btnMultiplicar, 6, 4, 1, 1);

        btn0 = new QPushButton(centralWidget);
        btn0->setObjectName(QStringLiteral("btn0"));

        gridLayout->addWidget(btn0, 7, 1, 1, 1);

        btnPonto = new QPushButton(centralWidget);
        btnPonto->setObjectName(QStringLiteral("btnPonto"));

        gridLayout->addWidget(btnPonto, 7, 3, 1, 1);

        btnDividir = new QPushButton(centralWidget);
        btnDividir->setObjectName(QStringLiteral("btnDividir"));

        gridLayout->addWidget(btnDividir, 7, 4, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Resultado", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "N\303\272mero digitado", nullptr));
        btn1->setText(QApplication::translate("MainWindow", "1", nullptr));
        btn2->setText(QApplication::translate("MainWindow", "2", nullptr));
        btn3->setText(QApplication::translate("MainWindow", "3", nullptr));
        btnClear->setText(QApplication::translate("MainWindow", "C", nullptr));
        btnSomar->setText(QApplication::translate("MainWindow", "+", nullptr));
        btn4->setText(QApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QApplication::translate("MainWindow", "5", nullptr));
        btn6->setText(QApplication::translate("MainWindow", "6", nullptr));
        btnRedo->setText(QApplication::translate("MainWindow", "REDO", nullptr));
        btnSubtrair->setText(QApplication::translate("MainWindow", "-", nullptr));
        btn7->setText(QApplication::translate("MainWindow", "7", nullptr));
        btn8->setText(QApplication::translate("MainWindow", "8", nullptr));
        btn9->setText(QApplication::translate("MainWindow", "9", nullptr));
        btnUndo->setText(QApplication::translate("MainWindow", "UNDO", nullptr));
        btnMultiplicar->setText(QApplication::translate("MainWindow", "*", nullptr));
        btn0->setText(QApplication::translate("MainWindow", "0", nullptr));
        btnPonto->setText(QApplication::translate("MainWindow", ".", nullptr));
        btnDividir->setText(QApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
