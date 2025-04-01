#include <iostream>
#include <cmath>

using namespace std;

// Función para dibujar un cuadrado
void dibujarCuadrado(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Función para dibujar un triángulo
void dibujarTriangulo(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Función para dibujar un círculo (aproximado)
void dibujarCirculo(int radio) {
    for (int y = -radio; y <= radio; y++) {
        for (int x = -radio; x <= radio; x++) {
            // Utilizamos la ecuación del círculo: x^2 + y^2 <= radio^2
            if (x * x + y * y <= radio * radio) {
                cout << "* ";
            } else {
                cout << "  "; // Espacio vacío
            }
        }
        cout << endl;
    }
}

int main() {
    int opcion, dimension;

    cout << "Seleccione una figura geometrica para dibujar:" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Triangulo" << endl;
    cout << "3. Circulo" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el tamano del lado del cuadrado: ";
            cin >> dimension;
            dibujarCuadrado(dimension);
            break;

        case 2:
            cout << "Ingrese la altura del triangulo: ";
            cin >> dimension;
            dibujarTriangulo(dimension);
            break;

        case 3:
            cout << "Ingrese el radio del circulo: ";
            cin >> dimension;
            dibujarCirculo(dimension);
            break;

        default:
            cout << "Opción no valida." << endl;
            break;
    }

    return 0;
}

