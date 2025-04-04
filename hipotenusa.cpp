#include <iostream>
#include <cmath>
#include "hipotenusa.h"
using namespace std;

float hip=0,ady=0,op=0;
void hipotenusa(){
	cout<<"Ingrese la longitud del cateto adyacente"<<endl;
	cin>>ady;
	cout<<"Ingrese la longitud del cateto opuesto"<<endl;
	cin>>op;
	hip = sqrt((ady*ady)+(op*op));
	cout<<"La hipotenusa es: "<<hip<<endl;
}
/*main(){
	hipotenusa();
}*/
