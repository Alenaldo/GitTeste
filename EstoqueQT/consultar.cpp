#include "consultar.h"
#include "ui_consultar.h"
#include <string>
#include <sstream>


Consultar::Consultar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Consultar)
{
    ui->setupUi(this);
}

Consultar::~Consultar()
{
    delete ui;
}
