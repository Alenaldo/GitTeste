/********************************************************************************
** Form generated from reading UI file 'criapedidoentrada.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRIAPEDIDOENTRADA_H
#define UI_CRIAPEDIDOENTRADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CriaPedidoEntrada
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CriaPedidoEntrada)
    {
        if (CriaPedidoEntrada->objectName().isEmpty())
            CriaPedidoEntrada->setObjectName(QStringLiteral("CriaPedidoEntrada"));
        CriaPedidoEntrada->resize(800, 600);
        centralwidget = new QWidget(CriaPedidoEntrada);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 20, 111, 16));
        CriaPedidoEntrada->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CriaPedidoEntrada);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        CriaPedidoEntrada->setMenuBar(menubar);
        statusbar = new QStatusBar(CriaPedidoEntrada);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CriaPedidoEntrada->setStatusBar(statusbar);

        retranslateUi(CriaPedidoEntrada);

        QMetaObject::connectSlotsByName(CriaPedidoEntrada);
    } // setupUi

    void retranslateUi(QMainWindow *CriaPedidoEntrada)
    {
        CriaPedidoEntrada->setWindowTitle(QApplication::translate("CriaPedidoEntrada", "MainWindow", nullptr));
        label->setText(QApplication::translate("CriaPedidoEntrada", "Cria Pedido Entrada", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CriaPedidoEntrada: public Ui_CriaPedidoEntrada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRIAPEDIDOENTRADA_H
