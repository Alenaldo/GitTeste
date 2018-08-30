/********************************************************************************
** Form generated from reading UI file 'criapedidosaida.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRIAPEDIDOSAIDA_H
#define UI_CRIAPEDIDOSAIDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CriaPedidoSaida
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CriaPedidoSaida)
    {
        if (CriaPedidoSaida->objectName().isEmpty())
            CriaPedidoSaida->setObjectName(QStringLiteral("CriaPedidoSaida"));
        CriaPedidoSaida->resize(800, 600);
        centralwidget = new QWidget(CriaPedidoSaida);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        CriaPedidoSaida->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CriaPedidoSaida);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        CriaPedidoSaida->setMenuBar(menubar);
        statusbar = new QStatusBar(CriaPedidoSaida);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CriaPedidoSaida->setStatusBar(statusbar);

        retranslateUi(CriaPedidoSaida);

        QMetaObject::connectSlotsByName(CriaPedidoSaida);
    } // setupUi

    void retranslateUi(QMainWindow *CriaPedidoSaida)
    {
        CriaPedidoSaida->setWindowTitle(QApplication::translate("CriaPedidoSaida", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CriaPedidoSaida: public Ui_CriaPedidoSaida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRIAPEDIDOSAIDA_H
