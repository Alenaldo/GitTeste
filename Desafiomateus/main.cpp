#include <cstdlib>
#include <stdlib.h>
#include <iostream>

using namespace std;

void criaPedidoSaida();
void criaPedidoEntrada();
void VerificarEstoqueFilial();
void cadastroFilial();
void cadastroProduto();

#define QTD  5


typedef struct {
    int idproduto;
    char Nomeproduto;
    int quantDisponivel;
    int quantReservada;
    int quantTotal;
}Produto;



typedef struct filial{
    int idfilial;
    char Nomefilial;
    Produto ProdutoEstoque[10];
}Filial;
Filial FilialPedido[10];


int main(int argc, char** argv) 
{
    int opM;
    cout<<"|======================| ESTOQUE |======================|"<<endl;
    cout<<"*=============================================================================*"<<endl;
    cout<<"Informe oque voce deseja fazer e em seguida pressione \"enter\"."<<endl;   
    cout<<"*-----------------------------*"<<endl;
    cout<<"|  1 - CRIA PEDIDO ESTOQUE ENTRADA           |"<<endl;
    cout<<"|  2 - CRIA PEDIDO ESTOQUE SAIDA             |"<<endl;
    cout<<"|  3 - VERIFICAR ESTOQUE FILIAL              |"<<endl;
    cout<<"|  4 - CRIAR FILIAL                          |"<<endl;
    cout<<"|  5 - CRIAR PRODUTO                         |"<<endl;
    cout<<"|  4 - SAIR                                  |"<<endl;
    cout<<"*-----------------------------*"<<endl;
    cout<<"ESCOLHA UMA OPCAO? "<<endl;
    cin>>opM;
    
    system("clear");
    
    switch (opM)
    {
	case 1 :
            {
            system("clear");
            criaPedidoSaida();        
            break;
        }   
        case 2:
            {
            system("clear");
            criaPedidoEntrada();
            break;
            }
        case 3:
           {
            system("clear");
            VerificarEstoqueFilial();
            break;
            }
        
        case 4:
           {
            system("clear");
            cadastroFilial();
            break;
            }
        case 5:
           {
            system("clear");
            cadastroProduto();
            break;
            }
        default :
        {
            cout<<"Opcao Invalida"<<endl;
        }
    }   
    return 0;
}
            
void criaPedidoSaida(){
    
    int idf,idp,quant;
    
    cout<<"|======================| CRIA PEDIDO ESTOQUE SAIDA |======================|"<<endl;
    cout<<"*=============================================================================*"<<endl;
    cout<<"Informe  o id da filial"<<endl;
    cin>>idf;
    cout<<"Informe  o produto"<<endl;  
    cin>>idp;
    cout<<"Informe  a quantidade do produto"<<endl;
    cin>>quant;    
    
     FilialPedido[idf].ProdutoEstoque[idp].quantTotal =  FilialPedido[idf].ProdutoEstoque[idp].quantTotal - quant;  
    
}

void criaPedidoEntrada(){
    
    int idf,idp,quant;
    
    cout<<"|======================| CRIA PEDIDO ESTOQUE ENTRADA |======================|"<<endl;
    cout<<"*=============================================================================*"<<endl;
    cout<<"Informe  o id da filial"<<endl;   
    cin>>idf;    
    cout<<"Informe  o produto"<<endl;  
    cin>>idp;
    cout<<"Informe  a quantidade do produto"<<endl;
    cin>>quant; 
    
    FilialPedido[idf].ProdutoEstoque[idp].quantTotal = FilialPedido[idf].ProdutoEstoque[idp].quantTotal + quant;    
    
}

void VerificarEstoqueFilial(){
    
     int idf,idp;
    cout<<"|======================| CRIA PEDIDO ESTOQUE ENTRADA |======================|"<<endl;
    cout<<"*=============================================================================*"<<endl;
    cout<<"Informe  o id da filial"<<endl;   
    cin>>idf;    
    cout<<"Informe  o produto"<<endl;  
    cin>>idp;
    cout <<"Tem "<<FilialPedido[idf].ProdutoEstoque[idp].quantTotal<< " deste Produto nessa filial"<<endl;
    cout <<"Tem "<<FilialPedido[idf].ProdutoEstoque[idp].quantReservada<< " deste Produto nessa filial no Resevado"<<endl;
    cout <<"Tem "<<FilialPedido[idf].ProdutoEstoque[idp].quantDisponivel<< " deste Produto nessa filial no Disponivel"<<endl;   
    
}

void cadastroFilial(){
    int i=0;
    char nome;
    cout<<"Informe o nome para sua filial"<<endl;
    cin>>nome;
    FilialPedido[i].Nomefilial = nome;
    cout<<"Filial Cadastrada!"<<endl;
    i++;
}

void cadastroProduto(){
    int j=0;
    char nome;
    cout<<"Informe o nome para sua Produto"<<endl;
    cin>>nome;
   // produto[j].Nomeproduto = nome; 
    cout<<"Produto` Cadastrada!"<<endl;
    j++;
}

