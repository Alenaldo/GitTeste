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



}

MainWindow::~MainWindow()
{
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
