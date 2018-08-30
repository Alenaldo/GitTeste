#include "cadastrofilial.h"
#include "ui_cadastrofilial.h"
#include <string>
#include <sstream>


CadastroFilial::CadastroFilial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CadastroFilial)
{
    ui->setupUi(this);
}

CadastroFilial::~CadastroFilial()
{
    delete ui;
}


