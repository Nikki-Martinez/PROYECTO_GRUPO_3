//Programa que representa de forma grafica la multiplicación manual de dos numeros- Hecho con Magic Loops
#include "multiplicacion_manual.h"

using namespace std;

void multiplicacionManual() {
    int numero1, numero2;
    cout << "Ingresa el primer numero: ";
    cin >> numero1;
    cout << "Ingresa el segundo numero: ";
    cin >> numero2;

    vector<int> productosParciales;
    int multiplicador = numero2;

    while (multiplicador > 0) {
        int digito = multiplicador % 10;
        int productoParcial = numero1 * digito;
        productosParciales.push_back(productoParcial);
        multiplicador /= 10;
    }

    int longitudMaxima = to_string(numero1).length() + to_string(numero2).length() + 1;
    cout << setw(longitudMaxima) << numero1 << endl;
    cout << "x" << setw(longitudMaxima - 1) << numero2 << endl;

    for (int i = 0; i < longitudMaxima; ++i) {
        cout << "-";
    }
    cout << endl;

    for (size_t i = 0; i < productosParciales.size(); ++i) {
        cout << setw(longitudMaxima - i) << productosParciales[i] << endl;
    }

    if (productosParciales.size() > 1) {
        for (int i = 0; i < longitudMaxima; ++i) {
            cout << "-";
        }
        cout << endl;
    }

    int resultadoFinal = numero1 * numero2;
    cout << setw(longitudMaxima) << resultadoFinal << endl;
}

/*int main() {
    multiplicacionManual();
    return 0;
}*/
