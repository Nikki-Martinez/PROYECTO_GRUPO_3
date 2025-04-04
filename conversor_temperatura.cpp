// Programa para conversion temperatura(Celsius, Fahrenheit, Kelvin)-@Luis Martinez
#include <iostream>
#include "conversor_temperatura.h"
using namespace std;

double c = 0.00 , f = 0.00 , k = 0.00;

//con este programa lo que se buscó fue usar parametros por referencia y uso de do-while

void celsiusFahrenheit(double& c, double& f){
	cout << "Ingrese los grados Celsius: ";
	cin >> c;
	
	f = (c*9/5)+32;
	
	cout << "Grados Celsius: " << c << " - Grados Fahrenheit : " << f << endl;
	 
}

void fahrenheitCelsius(double& f, double c){
	cout << "Ingrese los grados Fahrenheit: ";
	cin >> f;
	
	c = (f-32)*5/2;
	
	cout << "Grados Fahrenheit: " << f << " - Grados Celsius : " << c << endl;
}

void celsiusKelvin(double& c, double& k){
	cout << "Ingrese los grados Celsius: ";
	cin >> c;
	
	k = c + 273.15;
	
	cout << "Grados Celsius: " << c << " - Grados Kelvin : " << k << endl;
}

void kelvinCelsius(double& k, double& c){
	cout << "Ingrese los grados Kelvin: ";
	cin >> k;
	
	c = k - 273.15;
	
	cout << "Grados Kelvin: " << k << " - Grados Celsius : " << c << endl;
}

void fahrenheitKelvin(double& f, double& k){
	cout << "Ingrese los grados Fahrenheit: ";
	cin >> f;
	
	k = (f-32)*5/9+273.15;
	
	cout << "Grados Fahrenheit: " << f << " - Grados Kelvin : " << k << endl;
	
}

void kelvinFahrenheit(double& k, double& f){
	cout << "Ingrese los grados Kelvin: ";
	cin >> k;
	
	f = (k-273.15)*9/5+32;
	
	cout << "Grados Kelvin: " << k << " - Grados Fahrenheit: " << f<< endl;
}

int opcionMC;

void menu_conversiones(){
	do {
    	
        cout << "\n----------Menu Conversiones de Temperatura----------" << endl;
        cout << "1. Grados Celsius a Grados Fahrenheit" << endl;
        cout << "2. Grados Fahrenheit a Grados Celsius" << endl;
        cout << "3. Grados Celsius a Grados Kelvin" << endl;
        cout << "4. Grados Kelvin a Grados Celsius" << endl;
        cout << "5. Grados Fahrenheit a Grados Kelvin" << endl;
        cout << "1. Grados Kelvin a Grados Fahrenheit" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionMC;

        
        switch(opcionMC) {
            case 1:
                celsiusFahrenheit(c,f);
                break;
                
            case 2:
                fahrenheitCelsius(f,c);
                break;
                
            case 3:
                celsiusKelvin(c,k);
                break;
            
            case 4:
                kelvinCelsius(k,c);
                break;
                
            case 5:
                fahrenheitKelvin(f,k);
                break;
                
            case 6:
                kelvinFahrenheit(k,f);
                break;
            
            case 7:
                cout << "Saliendo. . ." << endl;
                break;
                
            default:
                cout << "Opcion no encontrada" << endl;
        }
    } while(opcionMC != 7); 	
	
}

main(){
	
	menu_conversiones();
	system("pause");
}
