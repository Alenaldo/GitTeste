#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastrofilial.h"
#include "ui_cadastrofilial.h"
#include "cadastroproduto.h"
#include"ui_cadastroproduto.h"
#include <sstream>


CadastroFilial::CadastroFilial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CadastroFilial)
{
    ui->setupUi(this);
    //Criando um novo objeto de FormSecundario
    cFilial = new CadastroFilial();
}

CadastroFilial::~CadastroFilial()
{
    cFilial->close();
    delete cFilial;
    delete ui;
}


