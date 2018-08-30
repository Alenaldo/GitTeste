#ifndef CADASTROFILIAL_H
#define CADASTROFILIAL_H
#include <QWidget>
#include <string>
#include "database.h"


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

private slots:
    void on_btnCadastraFilial_clicked();

private:
    Ui::CadastroFilial *ui;
};

#endif
