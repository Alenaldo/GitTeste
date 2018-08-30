#ifndef DATABASE_H
#define DATABASE_H

//#include <QtSql>
#include <QtSql/QtSql>
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
        int idFilial;
        QString nameFilial;
        int idProduto;
        QString nameProduto;
        double quantTotal;
        double quantReservado;
        double quantDisponivel;
    };

 //  Procura string na coluna name dentro do banco de dados.
    QVector<SqlDatabase::data> static searchByName(QString nameFilial);
    static QSqlTableModel *makeTableModel();
    static void deleteFilial(int idFilial);
    static void deleteProduct(int idProduto);
    static void addFilial(QString nameProduto);
    static void addProduct(QString nameFilial);
private:
    static QSqlDatabase db;
    static QSqlQuery query;
};



#endif // DATABASE_H
