

#include <cstdlib>
#include <stdlib.h>
#include <iostream>

using namespace std;

void criaPedidoSaida();
void criaPedidoEntrada();
void VerificarEstoqueFilial();
void cadastroFilial();
void cadastroProduto();

typedef struct filial {
    int idfilial;
    char Nomefilial;
    EstoqueF estoque;
}Filial;

typedef struct produto {
    int idproduto;
    char Nomeproduto;    
}Produto;

typedef struct pedidoS{
    int idPedido;
    char nomeProduto;
    int idProduto;
    int quant;
}PedidoSaida;

typedef struct pedidoE{
    int idPedido;
    int idProduto;
    char nomeProduto;
    int quant;
}PedidoEntrada;

typedef struct EstoqueF{
   // int idProduto;
    //char nomeProduto;
    Produto produto;
    int quantDisponivel;
    int quantResevada;
    int quantFinal;
}EstoqueFilial;

//Filial quant;

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
    switch (opM);
    {
	case 1 :
            {
            system("clear");
            criaPedidoSaida();
            break;
            }
        case 2 :
            {
            system("clear");
            criaPedidoEntrada();
            break;
            }
        case 3 :
           {
            system("clear");
            VerificarEstoqueFilial();
            break;
            }
        
        case 4 :
           {
            system("clear");
            cadastroFilial();
            break;
            }
        case 5 :
           {
            system("clear");
            cadastroProduto();
            break;
            }
        default :
            cout<<"Opcao Invalida"<<endl;
    }   
    //return 0;
}
            
void criaPedidoSaida(){
    
    int idfilial,idproduto,quant;
    
    cout<<"|======================| CRIA PEDIDO ESTOQUE SAIDA |======================|"<<endl;
    cout<<"*=============================================================================*"<<endl;
    cout<<"Informe  o id da filial"<<endl;   
    cin>>idfilial;    
    cout<<"Informe  o produto"<<endl;  
    cin>>idproduto;
    cout<<"Informe  a quantidade do produto"<<endl;
    cin>>quant;
    
    
    
    
    
}

void criaPedidoEntrada(){
    
    int idfilial,idproduto,quant;
    
    cout<<"|======================| CRIA PEDIDO ESTOQUE ENTRADA |======================|"<<endl;
    cout<<"*=============================================================================*"<<endl;
    cout<<"Informe  o id da filial"<<endl;   
    cin>>idfilial;    
    cout<<"Informe  o produto"<<endl;  
    cin>>idproduto;
    cout<<"Informe  a quantidade do produto"<<endl;
    cin>>quant;
    
    
    
}

void VerificarEstoqueFilial(){
    
    
    
}

void cadastroFilial(){
    
    cout<<"Informe o nome para sua filial"<<endl;
    cin>>filial.Nomefilial;
    filial.idfilial++;   
    cout<<"Filial Cadastrada!"<<endl;
}

void cadastroProduto(){
    
    cout<<"Informe o nome do produto"<<endl;
    cin>>produto.Nomeproduto;
    produto.idproduto++;   
    cout<<"Produto Cadastrada!"<<endl;
}

