#include<iostream>
#include "DecimalesALetras.h"
using namespace std;

void convertirNumero(float nums) {
    const char* unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    const char* decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    const char* decenasEspeciales[] = {"",  "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    const char* centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    
   
    int parteEntera = (int)nums;
    if (parteEntera == 1000) cout << "mil";
    else if (parteEntera == 0) cout << "cero";
    else {
        if (parteEntera >= 100) {
            cout << centenas[parteEntera / 100];
            if (parteEntera % 100) cout << " ";
            parteEntera %= 100;
        }
        if (parteEntera >= 20) {
            cout << decenas[parteEntera / 10];
            if (parteEntera % 10) cout << " y " << unidades[parteEntera % 10];
        } else if (parteEntera >= 10) {
            cout << decenasEspeciales[parteEntera - 10];
        } else {
            cout << unidades[parteEntera];
        }
    }

    // Convertir la parte decimal
    int parteDecimal = (nums - (int)nums) * 100;
    if (parteDecimal > 0) {
        cout << " punto ";
        bool primero = true;
        while (parteDecimal > 0) {
            if (!primero) cout << " y ";
            cout << unidades[parteDecimal % 10];
            parteDecimal /= 10;
            primero = false;
        }
    }
}

/*int main() {
    float nums;
    cout << "Introduce un numero con decimales: ";
    cin >> nums;
    cout << nums << "\n";
    convertirNumero(nums);
    cout << endl;
    
    system("pause"); 
}*/

