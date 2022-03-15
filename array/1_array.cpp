#include <iostream>
using namespace std;

main(){
	int codigo[5]={10,20,30,40};
	
	cout<<codigo[0]<<endl;
	cout<<codigo[1]<<endl;
	cout<<codigo[2]<<endl;
	cout<<codigo[3]<<endl;
	codigo[4]=50;
	cout<<codigo[4]<<endl;
	cout<<"______________"<<endl;
	for(int i=0;i<5;i++){
		cout<<codigo[i]<<endl;
	}
	
	
	cout<<"________ String ________"<<endl;
	string semana[7]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
	
	cout<<semana[0]<<endl;
	cout<<semana[1]<<endl;
	cout<<semana[2]<<endl;
	cout<<semana[3]<<endl;
	cout<<semana[4]<<endl;
	cout<<semana[5]<<endl;
	semana[6]="Domingo";
	cout<<semana[6]<<endl;
	cout<<"______________"<<endl;
	for(int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	
	
	system("pause");
}
