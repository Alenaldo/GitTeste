#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QObject>
#include <QDebug>
#include <cadastrofilial.h>
#include <cadastroproduto.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnFilial_clicked();
    void on_btnProduto_clicked();

private:
    Ui::MainWindow *ui;    
    CadastroFilial *cFilial;
    CadastroProduto *cProduto;

};

#endif // MAINWINDOW_H
