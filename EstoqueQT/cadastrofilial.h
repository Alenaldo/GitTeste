#ifndef CADASTROFILIAL_H
#define CADASTROFILIAL_H
#include <QWidget>
#include <string>

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

#endif
