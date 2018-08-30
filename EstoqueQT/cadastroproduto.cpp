#include "cadastroproduto.h"
#include "ui_cadastroproduto.h"
#include <string>
#include <sstream>

CadastroProduto::CadastroProduto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CadastroProduto)
{
    ui->setupUi(this);
}

CadastroProduto::~CadastroProduto()
{
    delete ui;
}

void CadastroProduto::on_btnCadastroProduto_clicked()
{

}
