/********************************************************************************
** Form generated from reading UI file 'cadastrofilial.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROFILIAL_H
#define UI_CADASTROFILIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroFilial
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QLineEdit *txtCadastroNomeProduto;
    QPushButton *btnCadastraFilial;

    void setupUi(QWidget *CadastroFilial)
    {
        if (CadastroFilial->objectName().isEmpty())
            CadastroFilial->setObjectName(QStringLiteral("CadastroFilial"));
        CadastroFilial->resize(605, 121);
        label = new QLabel(CadastroFilial);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 101, 20));
        pushButton_2 = new QPushButton(CadastroFilial);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 60, 75, 23));
        txtCadastroNomeProduto = new QLineEdit(CadastroFilial);
        txtCadastroNomeProduto->setObjectName(QStringLiteral("txtCadastroNomeProduto"));
        txtCadastroNomeProduto->setGeometry(QRect(150, 60, 211, 20));
        btnCadastraFilial = new QPushButton(CadastroFilial);
        btnCadastraFilial->setObjectName(QStringLiteral("btnCadastraFilial"));
        btnCadastraFilial->setGeometry(QRect(380, 60, 75, 23));

        retranslateUi(CadastroFilial);

        QMetaObject::connectSlotsByName(CadastroFilial);
    } // setupUi

    void retranslateUi(QWidget *CadastroFilial)
    {
        CadastroFilial->setWindowTitle(QApplication::translate("CadastroFilial", "Form", nullptr));
        label->setText(QApplication::translate("CadastroFilial", "Nome da Produto:", nullptr));
        pushButton_2->setText(QApplication::translate("CadastroFilial", "Sair", nullptr));
        btnCadastraFilial->setText(QApplication::translate("CadastroFilial", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroFilial: public Ui_CadastroFilial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROFILIAL_H
