#ifndef CONSULTAR_H
#define CONSULTAR_H
#include <QWidget>
#include <string>
#include "database.h"


using namespace std;

namespace Ui {
class Consultar;
}

class Consultar : public QWidget
{
    Q_OBJECT

public:
    explicit Consultar(QWidget *parent = nullptr);
    ~Consultar();

private:
    Ui::Consultar *ui;
};

#endif // CONSULTAR_H
