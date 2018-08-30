#include "database.h"

QSqlDatabase SqlDatabase::db = QSqlDatabase::addDatabase("QMYSQL");
QSqlQuery SqlDatabase::query(db);

SqlDatabase::SqlDatabase(const QString dataBaseName)
{

    db.setDatabaseName(dataBaseName);
    db.setUserName("root");
     db.setPassword("123456");

    if(db.open())
    {
        qDebug() << "Conexão aberta";
    }
    else
    {
        qDebug() << db.lastError().text();
        if(QMessageBox::critical(0,"ERRO","Erro abrindo banco de dados, não foi possível carregar o estoque"))
            qApp->quit();
    }
}

SqlDatabase::~SqlDatabase()
{
}

 QVector<SqlDatabase::data> SqlDatabase::searchByName(QString string)
{
    //Procura e retorna um vetor contendo todos os produtos com o nome do param string

    QVector<SqlDatabase::data> products;

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
        if(QMessageBox::critical(0,"ERRO","Erro na busca no estoque: " + query.lastError().text() ))
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
         if(QMessageBox::critical(0,"ERRO","Erro ao deletar produto do estoque: " + query.lastError().text() ))
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
