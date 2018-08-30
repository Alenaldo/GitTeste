#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastrofilial.h"
#include "ui_cadastrofilial.h"
#include "cadastroproduto.h"
#include"ui_cadastroproduto.h"
#include <sstream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Criando um novo objeto de FormSecundario
    cFilial = new CadastroFilial();
    cProduto = new CadastroProduto();
}

MainWindow::~MainWindow()
{
    cFilial->close();
    delete cFilial;

    cProduto->close();
    delete cProduto;

    delete ui;
}

void MainWindow::on_btnFilial_clicked()
{
    cFilial->clearFocus();
    cFilial->show(); cFilial->setFocus();

}

void MainWindow::on_btnProduto_clicked()
{
    cProduto->clearFocus();
    cProduto->show(); cProduto->setFocus();
}
