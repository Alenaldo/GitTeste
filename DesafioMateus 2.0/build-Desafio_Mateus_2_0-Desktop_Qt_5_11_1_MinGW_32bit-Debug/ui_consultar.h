/********************************************************************************
** Form generated from reading UI file 'consultar.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTAR_H
#define UI_CONSULTAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consulta
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Consulta)
    {
        if (Consulta->objectName().isEmpty())
            Consulta->setObjectName(QStringLiteral("Consulta"));
        Consulta->resize(800, 600);
        centralwidget = new QWidget(Consulta);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 10, 61, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 210, 75, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 47, 13));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 100, 113, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 130, 113, 20));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 160, 113, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 47, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 47, 13));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 47, 13));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(220, 80, 511, 301));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 10, 75, 23));
        Consulta->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Consulta);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Consulta->setMenuBar(menubar);
        statusbar = new QStatusBar(Consulta);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Consulta->setStatusBar(statusbar);

        retranslateUi(Consulta);

        QMetaObject::connectSlotsByName(Consulta);
    } // setupUi

    void retranslateUi(QMainWindow *Consulta)
    {
        Consulta->setWindowTitle(QApplication::translate("Consulta", "MainWindow", nullptr));
        label->setText(QApplication::translate("Consulta", "Consulta", nullptr));
        pushButton->setText(QApplication::translate("Consulta", "Consultar", nullptr));
        label_2->setText(QApplication::translate("Consulta", "Filtro: ", nullptr));
        label_3->setText(QApplication::translate("Consulta", "Filial", nullptr));
        label_4->setText(QApplication::translate("Consulta", "Produto", nullptr));
        label_5->setText(QApplication::translate("Consulta", "Pedido", nullptr));
        pushButton_2->setText(QApplication::translate("Consulta", "voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consulta: public Ui_Consulta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTAR_H
