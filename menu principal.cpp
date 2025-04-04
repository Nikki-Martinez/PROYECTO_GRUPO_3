#include <iostream>
#include "ArabigosARomanos.h"
#include "EnterosALetras.h"
#include "DecimalesALetras.h"
#include "TablaMultiplicar.h"
#include "Temporizador.h"
using namespace std;
void mostrarMenu(){
	cout << "1. Numeros Arabigos a Romanos" <<endl;
	cout << "2. Numeros Enteros a Letras" <<endl;
	cout << "3. Numeros Enteros con Decimales  a Letras" <<endl;
	cout << "4. Tabla de Multiplicar" <<endl;
	cout << "5. Temporizador" <<endl;
	cout << "Ingrese una opcion: ";

}

int main() {
    int opcion;

    do {
        mostrarMenu(); 
        cin >> opcion;  

        switch (opcion) {
            case 1:
                convertirNumeroRomano();
                break;

            case 2:
                int num;
			    cout << "Introduce un numero entero (0-1000): ";
			    cin >> num;
			    convertirNumero(num);
			    cout << endl;
                break;

            case 3:
                float nums;
			    cout << "Introduce un numero con decimales: ";
			    cin >> nums;
			    cout << nums << "\n";
			    convertirNumero(nums);
			    cout << endl;
                break;

            case 4: {
                tablaMultiplicar();
                break;
            }

            case 5:
            	int horas, minutos, segundos;

			    cout << "Ingrese las horas: ";
			    cin >> horas;
			    cout << "Ingrese los minutos: ";
			    cin >> minutos;
			    cout << "Ingrese los segundos: ";
			    cin >> segundos;
                temporizador(horas, minutos, segundos);
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

