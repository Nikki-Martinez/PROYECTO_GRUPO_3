#include <iostream>
#include "par_o_impar.h"

using namespace std;

// Funci�n para verificar si un n�mero es par o impar
void verificarParImpar() {
    int numero;

    // Solicitar al usuario que ingrese un n�mero
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    // Verificar si el n�mero es par o impar
    if (numero % 2 == 0) {
        cout << numero << " es un numero par." << endl;
    } else {
        cout << numero << " es un numero impar." << endl;
    }
}

