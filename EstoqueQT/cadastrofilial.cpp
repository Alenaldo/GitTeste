#include "cadastrofilial.h"
#include "ui_cadastrofilial.h"
#include "database.h"
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

void CadastroFilial::on_btnCadastraFilial_clicked()
{
    //Pega dados do produto para confirmar preenchimento..

    QString name = ui->txtCadastroNomeFilial->text();
   // int id = ui->id++->value();
    bool ok = true;

    //Se forem validos envia para janela de confirmação
    if(ok)
    {
        SqlDatabase::addFilial(ui->txtCadastroNomeFilial->text().toLower());
        parentWidget()->show();
        close();
    }
}
