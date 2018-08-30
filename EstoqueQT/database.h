#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
//#include <QtSql/QtSql>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QVector>
#include <QDate>

//Gerencia conexões de banco de dados usando MySQL.
class SqlDatabase
{
public:
    SqlDatabase(const QString dataBaseName);
    ~SqlDatabase();

    //Representa a informação guardada no banco de dados(produto).
    struct data
    {
        int idfilial;
        QString namefilial;
        int idproduto;
        QString nameproduto;
        double quanttotal;
        double quantreservado;
        double quantdisponivel;
    };

 //  Procura string na coluna name dentro do banco de dados.
    QVector<SqlDatabase::data> static searchByName(QString namefilial);
    static QSqlTableModel *makeTableModel();
    static void deleteFilial(int idfilial);
    static void deleteProduct(int idproduto);
    static void addFilial(QString nameproduto);
    static void addProduct(QString namefilial);
private:
    static QSqlDatabase db;
    static QSqlQuery query;
};



#endif // DATABASE_H
