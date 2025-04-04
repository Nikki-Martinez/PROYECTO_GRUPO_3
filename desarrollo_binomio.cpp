#include <iostream>
#include "desarrollo_binomio.h"
using namespace std;

// Funcion para calcular factoriales
unsigned long long factorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

// Funcion para calcular el coeficiente del binomio
unsigned long long calculo_coeficientes (int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Funcion para calcular la extension del binomio
void extension(int exponente) {
    // Se crea un array para almacenar los coeficientes
    unsigned long long coeficientes[66]; // Asumimos un tamano maximo de 65 para inicializar el array

    // Calcular los coeficientes binomiales
    for (int k = 0; k <= exponente; ++k) {
        coeficientes[k] = calculo_coeficientes(exponente, k);
    }

    // Imprimir el desarrollo del binomio
    cout << endl << "        Desarrollo del binomio:" << endl << endl;
    for (int k = 0; k <= exponente; ++k) {
        if (k > 0) cout << " + ";
        if (coeficientes[k] > 1) {
            cout << coeficientes[k];
        }
        if (exponente - k > 0) {
            cout << "a";
            if (exponente - k > 1) cout << "^" << (exponente - k);
        }
        if (k > 0) {
            cout << "b";
            if (k > 1) cout << "^" << k;
        }
    }
    cout << endl << endl;
}

int desarrolloBinomio() {
    int exponente;
    cout << "Este programa calcula el desarrollo de un binomio entre 1 y 65" << endl << endl;
    cout << "Ingrese el exponente del binomio que desea desarrollar: ";
    cin >> exponente;

    if (exponente <= 0) {
        cout << endl << "Error: El exponente debe ser un numero entero positivo." << endl << endl;
        return 1;
    }
    if (exponente >= 66) {
        cout << endl << "Error: El numero no puede ser mayor que 65" << endl << endl;
        return 2;
    }
    extension(exponente);
    return 0;
}

/*main(){
	desarrolloBinomio();
}*/
