#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>
#include "cadastrofilial.h"
#include "cadastroproduto.h"
#include "consultar.h"
#include "criapedido.h"

namespace Ui {
class Inicio;
}

class Inicio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = nullptr);
    ~Inicio();

private slots:
    void on_btnFilial_clicked();
    void on_btnProduto_clicked();

    void on_btnEstoque_clicked();

    void on_btnPedidoEntrada_clicked();

private:
    Ui::Inicio *ui;
    CadastroFilial *cFilial;
    CadastroProduto *cProduto;
    Consultar *cEstoque;
    CriaPedido *cPedido;
};

#endif // INICIO_H
