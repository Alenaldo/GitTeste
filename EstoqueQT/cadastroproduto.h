#ifndef CADASTROPRODUTO_H
#define CADASTROPRODUTO_H
#include <QWidget>
#include <string>
#include "database.h"


using namespace std;

namespace Ui {
class CadastroProduto;
}

class CadastroProduto : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroProduto(QWidget *parent = nullptr);
    ~CadastroProduto();

private slots:
    void on_btnCadastroProduto_clicked();

private:
    Ui::CadastroProduto *ui;
};

#endif // CADASTROPRODUTO_H
