#include <iostream>
#include <string>
#include <sstream> // Para usar stringstream
#include "contar_palabras.h"

using namespace std;

void contarPalabras() {
    string frase;

    cout << "Ingrese una frase: ";
    cin.ignore();
    getline(cin, frase); // Lee la frase completa, incluyendo espacios

    stringstream ss(frase); // Crea un stringstream a partir de la frase
    string palabra;
    int contador = 0;

    while (ss >> palabra) { // Extrae palabras del stringstream
        contador++;
    }

    cout << "La frase tiene " << contador << " palabras." << endl;
}


