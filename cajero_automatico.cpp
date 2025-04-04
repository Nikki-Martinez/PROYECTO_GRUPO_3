#include <iostream>
#include "cajero_automatico.h"
using namespace std;

int pin=1234, ope=0, retiroST=0, telefono=0, aut=0, opcRetiro=0;
float saldo=3500, retiroCT=0;
char tran;

void sinTarjeta(){
	system("cls");
	cout<<"Ingrese su numero de telefono: ";
	cin>>telefono;
	cout<<"Ingrese su codigo de autorizacion: ";
	cin>>aut;
	cout<<"Ingrese el monto a retirar: ";
	cin>>retiroST;
	cout<<endl<<"Despachando efectivo"<<endl<<endl;
	system("pause");
	system("cls");
	cout<<endl<<"Por favor, retire su efectivo"<<endl<<endl;
}

void conTarjeta(){
	system("cls");
	cout<<"Ingrese su tarjeta"<<endl<<endl;
	system("pause");
	system("cls");
	cout<<"Ingrese su PIN"<<endl;
	cin>>pin;
	system("cls");
	
	if(pin!=1234){
		while(pin!=1234){
			cout<<"Pin incorrecto"<<endl;
			cout<<"Por favor, ingrese su PIN"<<endl;
			cin>>pin;
	}
}
	cout<<"Que operacion desea realizar?"<<endl;
	cout<<"1. Consulta de saldo"<<endl<<"2. Retiro de efectivo"<<endl<<": ";
	cin>>ope;
	if(ope == 1){
		cout<<"Su saldo es: "<<saldo<<endl;
} else if(ope == 2){
	cout<<"Ingrese el monto de retiro"<<endl;
	cin>>retiroCT;
	if (retiroCT>saldo){
		cout<<"Saldo insuficiente"<<endl<<endl;
	}else if (retiroCT <= saldo){
		saldo = saldo - retiroCT;
		cout<<endl<<"Despachando efectivo"<<endl<<endl;
		system("pause");
		cout<<endl<<"Por favor, retire su efectivo"<<endl<<endl;
		}
	}else{
		cout<<"Opcion incorrecta, cerrando sesion"<<endl;
		system("pause");
		conTarjeta();
	}
}

void bienvenida(){
	system("cls");
	cout<<"Bienvenido!"<<endl<<endl<<"Que operacion desea realizar?"<<endl<<endl<<"1. Operaciones con tarjeta"<<endl<<"2. Retiro sin tarjeta"<<endl<<endl;
	cin>>opcRetiro;
	if(opcRetiro == 1){
		conTarjeta();
	}else if (opcRetiro==2){
		sinTarjeta();
	}else {
		cout<<"Opcion incorrecta"<<endl<<endl;
		bienvenida();
	}
	system("pause");
}

void cerrar(){
	cout<<endl;
}

void continuar(){
	cout<<endl<<"Desea realizar otra transaccion? (s/n)"<<endl;
	cin>>tran;
	if (tran == 's' || tran == 'S'){
		cout<<"Cerrando sesion"<<endl;
		bienvenida();
		continuar();
	}else if (tran == 'n' || tran == 'N'){
		cout<<endl<<"Cerrando sesion..."<<endl;
		cerrar();
	}else{
		cout<<"Opcion incorrecta"<<endl;
		continuar();
	}
}
/*main(){
	bienvenida();
	continuar();
	cerrar();
}*/
