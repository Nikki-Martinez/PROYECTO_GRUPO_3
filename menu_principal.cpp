#include <iostream>
#include "tabla_multiplicar.h"
#include "multiplicacion_manual.h"
#include "decimal_binario.h"
#include "decimal_hexadecimal.h"
#include "conversor_temperatura.h"
#include "figuras_geometricas.h"
#include "movimiento_punto.h"
#include "cajero_automatico.h"
#include "hipotenusa.h"
#include "desarrollo_binomio.h"
using namespace std;

void menuLuis() {
    cout << "\n===== Menu de programas realizados por Luis Martínez =====" << endl;
    cout << "1. Tablas de multiplicar" << endl;
    cout << "2. Multiplicacion manual" << endl;
    cout << "3. Conversion de decimal a binario" << endl;
    cout << "4. Conversion de decimal a hexadecimal" << endl;
    cout << "5. Conversor de temperatura (Programa libre)" << endl;
    cout << "6. Salir" << endl;
    cout << "Elija una opción: ";
    int opcionL;

    do {
        menuLuis(); 
        cin >> opcionL;  

        switch (opcionL) {
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
                menu_conversiones();  
                break;

            case 6:
                cout << "Saliendo. . ." << endl;
                break;

            default:
                cout << "Opción no encontrada. Intente de nuevo." << endl;
        }

    } while (opcionL != 6);  

}

void menuKevin(){
	cout<<"\n===== Menu de programas realizados por Kevin Sian ====="<<endl;
	cout<<"1. Figuras geometricas basicas"<<endl;
	cout<<"2. Mover un punto en toda la pantalla"<<endl;
	cout<<"3. Simulacion de un cajero automatico"<<endl;
	cout<<"4. Calcular la hipotenusa"<<endl;
	cout<<"5. Desarrollo del binomio (Programa libre)"<<endl;
    cout<<"6. Salir"<<endl;
	cout<<"Elija una opcion: ";
	int opcionK;
	
	do{
		menuKevin();
		cin>>opcionK;
		
		switch (opcionK){
			case 1:
				system("cls");
				menufg();
				break;
			case 2:
				system("cls");
				movimientoPunto();
				break;
			case 3:
				system("cls");
				bienvenida();
				continuar();
				cerrar();
				break;
			case 4:
				system("cls");
				hipotenusa();
				break;
			case 5:
				system("cls");
				desarrolloBinomio();
				break;
			case 6:
				cout<<"Saliendo. . ."<<endl;
				break;
			default :
				cout<<"Opcion no encontrada. Intente de nuevo."<<endl;
		}
	} while (opcionK!=6);
	
}

void mostrarMenu(){
	cout<<"\n===== Menu Principal ====="<<endl;
	cout<<"1. Programas realizados por Hugo Garcia"<<endl;
	cout<<"2. Programas realizados por Doris Gonzalez"<<endl;
	cout<<"3. Programas realizados por Luis Martinez"<<endl;
	cout<<"4. Programas realizados por Kevin Sian"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Elija una opcion: ";
}
main(){
	int opcionP;
	do{
	mostrarMenu();
	cin>>opcionP;
	
	switch (opcionP){
		case 1:
			system("cls");
			menuHugo();
			break;
		case 2:
			system("cls");
			menuDoris;
			break;
		case 3:
			system("cls");
			menuLuis;
			break;
		case 4:
			system("cls");
			menuKevin;
			break;
		case 5:
			cout<<"Saliendo. . ."<<endl;
	}
	}while (opcionP!=5);
}

