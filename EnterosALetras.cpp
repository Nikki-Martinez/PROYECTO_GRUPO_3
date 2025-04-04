#include<iostream>
#include "EnterosALetras.h"
using namespace std;

void convertirNumero(int num) {
    const char* unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    const char* decenas[] = {"", "dieci", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    const char* decenasEspeciales[] = {"", "dieci", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    const char* centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    
    if (num == 1000) {
        cout << "mil";
    } else if (num == 0) {
        cout << "cero";
    } else {
        if (num >= 100) {
            cout << centenas[num / 100];
            num %= 100;
            if (num > 0) cout << " ";
        }
        if (num >= 20) {
            cout << decenas[num / 10];
            if (num % 10) cout << " y " << unidades[num % 10];
        } else if (num >= 10) {
            cout << decenasEspeciales[num - 10];
        } else {
            cout << unidades[num];
        }
    }
}

/*int main() {
    int num;
    cout << "Introduce un numero entero (0-1000): ";
    cin >> num;
    convertirNumero(num);
    cout << endl;
    return 0;
}*/


