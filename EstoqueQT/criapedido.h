#ifndef CRIAPEDIDO_H
#define CRIAPEDIDO_H
#include <QWidget>
#include <string>

using namespace std;

namespace Ui {
class CriaPedido;
}

class CriaPedido : public QWidget
{
    Q_OBJECT

public:
    explicit CriaPedido(QWidget *parent = nullptr);
    ~CriaPedido();

private:
    Ui::CriaPedido *ui;
};

#endif // CRIAPEDIDO_H
