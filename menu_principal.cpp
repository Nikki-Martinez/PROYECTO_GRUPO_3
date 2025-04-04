#include <iostream>
#include "tabla_multiplicar.h"
#include "multiplicacion_manual.h"
#include "decimal_binario.h"
#include "decimal_hexadecimal.h"
#include "conversor_temperatura.h"
using namespace std;

void mostrarMenu() {
    cout << "\n===== Menu =====" << endl;
    cout << "1. Tablas de multiplicar" << endl;
    cout << "2. Multiplicacion manual" << endl;
    cout << "3. Conversion de decimal a binario" << endl;
    cout << "4. Conversion de decimal a hexadecimal" << endl;
    cout << "5. Conversor de temperatura" << endl;
    cout << "6. Salir" << endl;
    cout << "Elija una opción: ";|
}

int main() {
    int opcion;

    do {
        mostrarMenu(); 
        cin >> opcion;  

        switch (opcion) {
            case 1:
                tablas_multiplicar();  
                break;

            case 2:
                multiplicacionManual();  
                break;

            case 3:
                decimalBinario();  
                break;

            case 4: {
                int dec;
                cout << "Ingrese un número decimal: ";
                cin >> dec;
                decimalHexadecimal(dec);  
                break;
            }

            case 5:
                menu_conversiones(opcion);  
                break;

            case 6:
                cout << "Saliendo. . ." << endl;
                break;

            default:
                cout << "Opción no encontrada. Intente de nuevo." << endl;
        }

    } while (opcion != 6);  

    return 0;
}

