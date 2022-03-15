#include <iostream>
using namespace std;

main(){

	cout<<"________ Array Dinamico ________"<<endl;
	
	int d=0;
	cout<<"Cuantas numero:";
	cin>>d;
	
	int datos[d];
	
	for (int i=0;i<d;i++){
		int ingreso=0;
		cout<<"Dato ["<<i<<"]: ";
		cin>>ingreso;
		datos[i]= ingreso;
	}
	for (int i=0;i<d;i++){
		cout<<datos[i]<<endl;
	}
	

	
	
	system("pause");
}
