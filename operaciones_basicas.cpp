#include <iostream>
#include "operaciones_basicas.h"

using namespace std;

// Funciones para cada operación básica
float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: División por cero." << endl;
        return 0; // Devuelve 0 en caso de error
    }
}

// Función para mostrar el menú y obtener la opción del usuario
void menuOperaciones() {
    int opcion;
    float num1, num2, resultado;

    do {
        cout << "\n--- Menu de Operaciones Basicas ---" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "0. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa el primer numero: ";
                cin >> num1;
                cout << "Ingresa el segundo numero: ";
                cin >> num2;
                resultado = suma(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                cout << "Ingresa el primer numero: ";
                cin >> num1;
                cout << "Ingresa el segundo numero: ";
                cin >> num2;
                resultado = resta(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                cout << "Ingresa el primer numero: ";
                cin >> num1;
                cout << "Ingresa el segundo numero: ";
                cin >> num2;
                resultado = multiplicacion(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                cout << "Ingresa el primer numero: ";
                cin >> num1;
                cout << "Ingresa el segundo numero: ";
                cin >> num2;
                resultado = division(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intenta de nuevo." << endl;
        }
    } while (opcion != 0);
}

