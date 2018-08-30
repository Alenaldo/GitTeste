/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *btnFilial;
    QPushButton *btnProduto;
    QPushButton *btnPedidoEntrada;
    QPushButton *btnPedidoSaida;
    QPushButton *btnSaida;
    QPushButton *btnEstoque;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(714, 379);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 341, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        btnFilial = new QPushButton(centralWidget);
        btnFilial->setObjectName(QStringLiteral("btnFilial"));
        btnFilial->setGeometry(QRect(80, 120, 91, 23));
        btnProduto = new QPushButton(centralWidget);
        btnProduto->setObjectName(QStringLiteral("btnProduto"));
        btnProduto->setGeometry(QRect(210, 120, 111, 23));
        btnPedidoEntrada = new QPushButton(centralWidget);
        btnPedidoEntrada->setObjectName(QStringLiteral("btnPedidoEntrada"));
        btnPedidoEntrada->setGeometry(QRect(360, 120, 121, 23));
        btnPedidoSaida = new QPushButton(centralWidget);
        btnPedidoSaida->setObjectName(QStringLiteral("btnPedidoSaida"));
        btnPedidoSaida->setGeometry(QRect(520, 120, 101, 23));
        btnSaida = new QPushButton(centralWidget);
        btnSaida->setObjectName(QStringLiteral("btnSaida"));
        btnSaida->setGeometry(QRect(310, 220, 75, 23));
        btnEstoque = new QPushButton(centralWidget);
        btnEstoque->setObjectName(QStringLiteral("btnEstoque"));
        btnEstoque->setGeometry(QRect(280, 170, 141, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 714, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Controle de Estoque", nullptr));
        label->setText(QApplication::translate("MainWindow", "Controle de Estoque 2.0", nullptr));
        btnFilial->setText(QApplication::translate("MainWindow", "Cadastra Filial", nullptr));
        btnProduto->setText(QApplication::translate("MainWindow", "Cadastra Produto", nullptr));
        btnPedidoEntrada->setText(QApplication::translate("MainWindow", "Criar Pedido Entrada", nullptr));
        btnPedidoSaida->setText(QApplication::translate("MainWindow", "Criar Pedido Saida", nullptr));
        btnSaida->setText(QApplication::translate("MainWindow", "Sair", nullptr));
        btnEstoque->setText(QApplication::translate("MainWindow", "Consultar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
