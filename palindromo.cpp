#include <iostream>
#include <string>
#include <algorithm>
#include "palindromo.h"

using namespace std;

// Funci�n para verificar si una cadena es un pal�ndromo
bool esPalindromo(string cadena) {
    string cadenaLimpia = "";
    for (int i =0; i < cadena.length();++i) {
    	char c = cadena [i];
        if (isalnum(c)) { // Verifica si el car�cter es alfanum�rico
            cadenaLimpia += tolower(c); // Convierte a min�scula y agrega a la cadena limpia
        }
    }
    string cadenaInvertida = cadenaLimpia;
    reverse(cadenaInvertida.begin(), cadenaInvertida.end());
    return cadenaLimpia == cadenaInvertida;
}

// Funci�n para obtener la entrada del usuario y verificar si es un pal�ndromo
void verificarPalindromo() {
    string entrada;
    cout << "Ingresa una palabra o numero: ";
    cin.ignore();
    getline(cin, entrada); // Permite leer cadenas con espacios

    if (esPalindromo(entrada)) {
        cout << entrada << " es un palindromo." << endl;
    } else {
        cout << entrada << " no es un palindromo." << endl;
    }
}

