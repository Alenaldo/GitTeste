/********************************************************************************
** Form generated from reading UI file 'cadastroproduto.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROPRODUTO_H
#define UI_CADASTROPRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroProduto
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QLineEdit *txtCadastroNomeProduto;
    QPushButton *btnCadastraFilial;

    void setupUi(QWidget *CadastroProduto)
    {
        if (CadastroProduto->objectName().isEmpty())
            CadastroProduto->setObjectName(QStringLiteral("CadastroProduto"));
        CadastroProduto->resize(605, 121);
        label = new QLabel(CadastroProduto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 101, 20));
        pushButton_2 = new QPushButton(CadastroProduto);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 60, 75, 23));
        txtCadastroNomeProduto = new QLineEdit(CadastroProduto);
        txtCadastroNomeProduto->setObjectName(QStringLiteral("txtCadastroNomeProduto"));
        txtCadastroNomeProduto->setGeometry(QRect(150, 60, 211, 20));
        btnCadastraFilial = new QPushButton(CadastroProduto);
        btnCadastraFilial->setObjectName(QStringLiteral("btnCadastraFilial"));
        btnCadastraFilial->setGeometry(QRect(380, 60, 75, 23));

        retranslateUi(CadastroProduto);

        QMetaObject::connectSlotsByName(CadastroProduto);
    } // setupUi

    void retranslateUi(QWidget *CadastroProduto)
    {
        CadastroProduto->setWindowTitle(QApplication::translate("CadastroProduto", "Form", nullptr));
        label->setText(QApplication::translate("CadastroProduto", "Nome da Produtol:", nullptr));
        pushButton_2->setText(QApplication::translate("CadastroProduto", "Sair", nullptr));
        btnCadastraFilial->setText(QApplication::translate("CadastroProduto", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroProduto: public Ui_CadastroProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROPRODUTO_H
