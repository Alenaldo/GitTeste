#include "criapedido.h"
#include "ui_criapedido.h"
#include <string>
#include <sstream>


CriaPedido::CriaPedido(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CriaPedido)
{
    ui->setupUi(this);
}

CriaPedido::~CriaPedido()
{
    delete ui;
}
