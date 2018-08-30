#ifndef CADASTROFILIAL_H
#define CADASTROFILIAL_H

#include <QMainWindow>
#include <QWidget>
#include <QObject>
#include <QDebug>

using namespace std;

namespace Ui {
class CadastroFilial;
}

class CadastroFilial : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroFilial(QWidget *parent = nullptr);
    ~CadastroFilial();

private:
    Ui::CadastroFilial *ui;
};

#endif // CADASTROFILIAL_H
