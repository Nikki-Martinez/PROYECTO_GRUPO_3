//Programa para tablas de multiplicar del 1 al 10
#include <iostream>
#include "tabla_multiplicar.h"
using namespace std;

void tablas_multiplicar(){
	
	for (int i=1;i <=10;i++){
		cout << "Tabla de multiplicar del numero " << i << endl;
		
		for(int j=1; j <=10; j++){
			int m = i*j;
			cout << i << "x" << j << "=" << m << endl;
		}
	cout << "--------------------" << endl;
	}
}


/*int main (){
	
	tablas_multiplicar();
	
	system("pause");
	
}*/
