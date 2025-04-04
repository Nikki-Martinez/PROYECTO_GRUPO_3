#include <iostream>
#include "figuras_geometricas.h"
#include "movimiento_punto.h"
#include "cajero_automatico.h"
#include "hipotenusa.h"
#include "desarrollo_binomio.h"
using namespace std;

int opcion;

void menuKevin(){
	
	cout<<"Programas realizados por Kevin Sian "<<endl;
	cout<<"1. Figuras geometricas basicas"<<endl;
	cout<<"2. Mover un punto en toda la pantalla"<<endl;
	cout<<"3. Simulacion de un cajero automatico"<<endl;
	cout<<"4. Calcular la hipotenusa"<<endl;
	cout<<"5. Desarrollo del binomio (Programa libre)"<<endl;
	cout<<"Opcion: ";
	cin>>opcion;
	
	switch (opcion){
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
		default :
			cout<<"Opcion incorrecta";
	}
	
}
main(){
	menuKevin();
}
