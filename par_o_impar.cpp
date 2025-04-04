#include <iostream>
#include "par_o_impar.h"

using namespace std;

// Función para verificar si un número es par o impar
void verificarParImpar() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        cout << numero << " es un numero par." << endl;
    } else {
        cout << numero << " es un numero impar." << endl;
    }
}

