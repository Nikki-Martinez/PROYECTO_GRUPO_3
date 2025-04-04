//Programa que convierte numeros decimales a binario hasta 2147483647 - @Luis Martinez
#include <iostream>
#include "decimal_binario.h"
using namespace std;

void decimalBinario(){
	const int bits = 32;
	long long decimal; 
	int binario[bits];
	
	for (int i=0; i<bits;i++){
		binario[i]=0;
	}
	
	cout << "Ingrese el numero decimal: ";
	cin >> decimal;
	
	if(decimal<0){
		/*El programa no convierte numeros binarios, aunque realmente si se puede hacer, pero en este caso no incluimos ese procedimiento*/
		cout << "No se puede convertir numeros negativos!" << endl;
	} else if (decimal==0){
		cout << "Numero binario: 0" << endl;
	}else{
		int indice = bits -1;
		/*En esta condicion mientras el valor ingresao por el usuario no sea igual a 0,
		se va a dividir en 2, y su residuo se ira almacenando, para esto se usa la operación módulo*/
		for(; decimal > 0; decimal /=2){
			binario[indice] = decimal %2;
			indice--;
		}
		/*Condición que sirve para para recorrer los 32 bits definidos de izquierda a derecha
		y empiece a imprimir el numero binario cuando encuentre el primer valor en 1*/
		cout << "El numero binario es: ";
		bool cerosIniciales = true; 
		for (int i = 0; i < bits; i++) {
   			 if (binario[i] == 1) {
        		cerosIniciales = false;
    			}
   			 if (!cerosIniciales) {
        		cout << binario[i];
    		}
		}
		cout << endl;

	}
}

/*int main(){
	
	decimalBinario();
	
	return 0;
}*/
