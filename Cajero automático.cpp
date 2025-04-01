#include <iostream>
using namespace std;

int pin=1234, ans=0;
float saldo=1500, retiro=0;
char respuesta;

void inicio(){
	cout<<"Por favor, ingrese su tarjeta"<<endl;
	system("pause");
	system("cls");
	cout<<"Por favor, ingrese su PIN"<<endl;
	cin>>pin;
	
	if(pin!=1234){
		while(pin!=1234){
			cout<<"Pin incorrecto"<<endl;
			cout<<"Por favor, ingrese su PIN"<<endl;
			cin>>pin;
	}
}
	cout<<"Que operacion desea realizar"<<endl;
	cout<<"1. Consulta de saldo"<<endl<<"2. Retiro de efectivo"<<endl;
	cin>>ans;
	if(ans==1){
		cout<<"Su saldo es: "<<saldo<<endl;
} else if(ans==2){
	cout<<"Ingrese el monto de retiro"<<endl;
	cin>>retiro;
	if (retiro>saldo){
		cout<<"Saldo insuficiente";
	}else if (retiro<=saldo){
		cout<<"Despachando efectivo"<<endl;
		system("pause");
		cout<<"Por favor, retire su efectivo"<<endl;
		system("pause");
		}
	}else{
		cout<<"Opcion incorrecta, cerrando sesion"<<endl;
		system("pause");
		inicio();
	}
}
void cerrar(){
	cout<<endl;
}

void continuar(){
	cout<<"Desea realizar otra transaccion? (s/n)"<<endl;
	cin>>respuesta;
	if (respuesta=='s'||'S'){
		inicio();
		continuar();
	}else if (respuesta == 'n'||'N'){
		cout<<"Cerrando sesion"<<endl;
		cerrar();
	}else{
		cout<<"Opcion incorrecta";
		continuar();
	}
}
main(){
	inicio();
	continuar();
	cerrar();
}
