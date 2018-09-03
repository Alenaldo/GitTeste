#include "database.h"
#include "QSqlError"
#include <QtCore/QCoreApplication>

QSqlDatabase SqlDatabase::db = QSqlDatabase::addDatabase("QMYSQL");
QSqlQuery SqlDatabase::query(db);

SqlDatabase::SqlDatabase(const QString dataBaseName)
{

    db.setHostName("localhost");
    db.setPort (3306);
    db.setDatabaseName(dataBaseName);
    db.setUserName("admin");
    db.setPassword("123456");

    if(db.open())
    {
        qDebug() << "Conexão aberta";

    }
    else
    {
        qDebug() << db.lastError().text();
        if(QMessageBox::critical(nullptr,"ERRO","Erro abrindo banco de dados, não foi possível carregar o estoque"))
            qApp->quit();
    }
}

 QVector<SqlDatabase::filiais> SqlDatabase::searchByName(QString string)
{
    //Procura e retorna um vetor contendo todos os produtos com o nome do param string

    QVector<SqlDatabase::filiais> products;

    //Todo texto no banco de dados é guardado em letras minúsculas.
    string = string.toLower();

    if(query.exec(QString("SELECT * FROM produtos WHERE nome = '%1'").arg(string)))
    {
        while (query.next())
        {
           // products.append(    data{ query.value(0).toInt(), query.value(1).toString(), query.value(2).toDouble(), query.value(3).toDate()  }   );
        }
    }
    else
    {
        if(QMessageBox::critical(nullptr,"ERRO","Erro na busca no estoque: " + query.lastError().text() ))
            qApp->quit();
    }


    return products;
 }

 QSqlTableModel *SqlDatabase::makeTableModel()
 {
     return new QSqlTableModel(nullptr,db);
 }

 void SqlDatabase::deleteProduct(int id)
 {
     //Executa query para deletar produto da tabela
     if(!query.exec( QString("DELETE FROM produtos WHERE id = %1").arg(id)   ))
     {
         if(QMessageBox::critical(nullptr,"ERRO","Erro ao deletar produto do estoque: " + query.lastError().text() ))
             qApp->quit();
     }



 }

 void SqlDatabase::addProduct(QString name)
 {
    query.prepare("INSERT INTO produtos (nome) values (?)");

    query.bindValue(0,name);

    if(!query.exec())
    {
        if(QMessageBox::critical(0,"ERRO","Erro ao adicionar produto do estoque: " + query.lastError().text() ))
            qApp->quit();
    }


 }
 void SqlDatabase::addFilial(QString namefilial)
 {
    query.prepare("INSERT INTO filiais (idfilial,nomefilial) values (null,nomefilial)");

    if(db.open())
    {
        qDebug() << "Conexão aberta";

    }
    else
    {
        qDebug() << db.lastError().text();
        if(QMessageBox::critical(nullptr,"ERRO","Erro abrindo banco de dados, não foi possível carregar o estoque"))
            qApp->quit();
    }

    query.bindValue(nullptr,namefilial);

    QMessageBox::critical(nullptr,"ERRO","filal add: " + namefilial);

    if(!query.exec())
    {
        if(QMessageBox::critical(nullptr,"ERRO","Erro ao cadastrar filial: " + query.lastError().text()))
            qApp->quit();
    }


 }
