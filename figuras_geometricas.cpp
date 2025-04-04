#include <iostream>
#include "figuras_geometricas.h"
using namespace std;

// Funcion para dibujar un cuadrado
void dibujarCuadrado(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Funcion para dibujar un triangulo
void dibujarTriangulo(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Funcion para dibujar un circulo
void dibujarCirculo(int radio) {
    for (int y = -radio; y <= radio; y++) {
        for (int x = -radio; x <= radio; x++) {
            // Utilizamos la ecuacion del circulo: x^2 + y^2 <= radio^2
            if (x * x + y * y <= radio * radio) {
                cout << "* ";
            } else {
                cout << "  "; // Espacio vacio
            }
        }
        cout << endl;
    }
}

void menufg() {
    int opcionfg, dimension;

    cout << "Seleccione una figura geometrica para dibujar:" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Triangulo" << endl;
    cout << "3. Circulo" << endl;
    cout << "4. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcionfg;

    switch (opcionfg) {
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
            
    	case 4:
    		cout<<"Saliendo...";
    		break;

        default:
            cout << "Opción no valida." << endl;
            break;
    }
}
/*main(){
	menufg();
}*/
