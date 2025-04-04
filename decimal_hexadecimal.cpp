//Programa para la conversión de numeros decimales a hexadecimales hasta el numero 2147483647 -@Luis Martinez
#include <iostream>
#include "decimal_hexadecimal.h"
using namespace std;

//declaramos un metodo que recibe un parametro por valor en este caso el numero que ingresa el usuario
void decimalHexadecimal(int dec){
    string numHex[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
    string resultadoHexadecimal = "";

	//La condición while nos sirve para ir operando  haciendo uso de la operación modulo
	/*Hay que recordar que para la conversión de decimales a hexadecimales, hay que dividir
	el numero decimal en 16, se toma el cociente y se guarda el residuo, el cociente debe de llegar a 0*/
    while (dec > 0) {
        int residuo = dec % 16;  
        resultadoHexadecimal = numHex[residuo] + resultadoHexadecimal; 
        dec /= 16;  
    }

    cout << "El numero en hexadecimal es: " << resultadoHexadecimal << endl;
}

/*int main() {
    int dec;
    cout << "Ingrese un numero decimal: ";
    cin >> dec;

    decimalHexadecimal(dec);

    return 0;
}*/

