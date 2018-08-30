#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastrofilial.h"
#include "ui_cadastrofilial.h"
#include "cadastroproduto.h"
#include"ui_cadastroproduto.h"
#include <sstream>


CadastroProduto::CadastroProduto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CadastroProduto)
{
    ui->setupUi(this);
    cProduto = new CadastroProduto();
}

CadastroProduto::~CadastroProduto()
{
    cProduto->close();
    delete cProduto;
    delete ui;
}


