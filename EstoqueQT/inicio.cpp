#include "inicio.h"
#include "ui_inicio.h"
#include <QWidget>
#include <sstream>
#include "database.h"

Inicio::Inicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);

    //Criando um novo objeto de FormSecundario
    cFilial = new CadastroFilial();
    cProduto = new CadastroProduto();
    cEstoque = new Consultar();
    cPedido = new CriaPedido();
}

Inicio::~Inicio()
{
    cFilial->close();
    delete cFilial;
    delete ui;

    cProduto->close();
    delete cProduto;
    delete ui;

    cEstoque->close();
    delete cEstoque;
    delete ui;

    cPedido->close();
    delete cPedido;
    delete ui;
}

void Inicio::on_btnFilial_clicked()
{
    cFilial->clearFocus();
    cFilial->show(); cFilial->setFocus();
}
void Inicio::on_btnProduto_clicked()
{
    cProduto->clearFocus();
    cProduto->show(); cProduto->setFocus();
}

void Inicio::on_btnEstoque_clicked()
{
    cEstoque->clearFocus();
    cEstoque->show(); cEstoque->setFocus();
}

void Inicio::on_btnPedidoEntrada_clicked()
{
    cPedido->clearFocus();
    cPedido->show(); cPedido->setFocus();
}
