#ifndef CADASTROPRODUTO_H
#define CADASTROPRODUTO_H
#include <QMainWindow>
#include <QWidget>
#include <QObject>
#include <QDebug>

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

private:
    Ui::CadastroProduto *ui;
};

#endif // CADASTROPRODUTO_H
