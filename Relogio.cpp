//============================================================================
// Name        : Relogio.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include <conio.h>
#include <stdlib.h>


using namespace std;

void Horas(int hora, int minuto, int segundo){
	//cout<<endl;
	if (hora==0)
		cout<<hora<<"0:";
	if (hora> 0 && hora < 10)
		cout <<"0"<<hora<<":";
	if(hora>9)
		cout<<hora<<":";

	if(minuto==0)
		cout<<minuto<<"0:";
	if (minuto> 0 && minuto < 10)
		cout <<"0"<<minuto<<":";
	if(minuto>9)
		cout<<minuto<<":";

	if(segundo==0)
		cout<<segundo;
	if (segundo> 0 && segundo < 10)
		cout <<"0"<<segundo;
	if(segundo>9)
		cout<<segundo;

}
int main(){
	int hora;
	int minuto;
	int segundo;
	int i,j;

	cout <<"digite a hora: ";
	cin>>hora;

	if (hora < 0 || hora > 24)
		cout<<"erro";

	cout << "Digite os minutos: ";
	cin >> minuto;

	if (minuto < 0 || minuto > 59)
	    cout << "Erro";

	cout << "Digite os segundos: ";
	cin >> segundo;

	if (segundo < 0 || segundo > 59)
	    cout << "Erro";
	system("cls");

	Horas(hora, minuto, segundo);


	while(segundo<60){

		segundo++;
		system("cls");
		Horas(hora,minuto,segundo);

		for (i= 1;i<=800;i++)
			for (j=1;j<=400000;j++)

		if(segundo == 60){
			system("cls");
			minuto++;
			segundo=0;

			if(minuto == 60){
				hora++;
				minuto=0;

				if(hora==24){
					hora=0;
					minuto=0;
				}else{
					system("cls");
					Horas(hora,minuto,segundo);
				}
			}
			system("cls");
			Horas(hora,minuto,segundo);
			for(i=1;i<=800;i++)
				for(j=1;j<=400000;j++);

		}
	}
	system("pause");
	return 0;

}
