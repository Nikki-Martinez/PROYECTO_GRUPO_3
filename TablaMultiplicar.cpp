//Tabla de multiplicar

#include<iostream>
#include "TablaMultiplicar.h"
using namespace std;
	
 void tablaMultiplicar(){
	int numero;
	do{
		cout<<"Digite un numero: "<<endl;
		cin>>numero;
			
	}while((numero<1) || (numero>10));
	
	for(int i=1;i<=10;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	}
	
	/*int main(){
	tablaMultiplicar();
	
	
    system("pause");
}*/
