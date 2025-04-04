#include <iostream>
#include "conversiones.h"

using namespace std;

float kmToMillas(float km) {
    return km * 0.621371; // 1 km = 0.621371 millas
}

float millasToKm(float millas) {
    return millas / 0.621371; // 1 milla = 1/0.621371 km
}

float metrosToPulgadas(float metros) {
    return metros * 39.3701; // 1 metro = 39.3701 pulgadas
}

float pulgadasToMetros(float pulgadas) {
    return pulgadas / 39.3701; // 1 pulgada = 1/39.3701 metros
}

float librasToKilos(float libras) {
    return libras * 0.453592; // 1 libra = 0.453592 kilos
}

float kilosToLibras(float kilos) {
    return kilos / 0.453592; // 1 kilo = 1/0.453592 libras
}

void realizarConversiones() {
    int opcion;
    float valor;

    do {
        cout << "\n--- Menu de Conversiones ---" << endl;
        cout << "1. Kilometros a Millas" << endl;
        cout << "2. Millas a Kilometros" << endl;
        cout << "3. Metros a Pulgadas" << endl;
        cout << "4. Pulgadas a Metros" << endl;
        cout << "5. Libras a Kilos" << endl;
        cout << "6. Kilos a Libras" << endl;
        cout << "0. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un valor en kilometros: ";
                cin >> valor;
                cout << valor << " km son " << kmToMillas(valor) << " millas." << endl;
                break;
            case 2:
                cout << "Ingresa un valor en millas: ";
                cin >> valor;
                cout << valor << " millas son " << millasToKm(valor) << " km." << endl;
                break;
            case 3:
                cout << "Ingresa un valor en metros: ";
                cin >> valor;
                cout << valor << " metros son " << metrosToPulgadas(valor) << " pulgadas." << endl;
                break;
            case 4:
                cout << "Ingresa un valor en pulgadas: ";
                cin >> valor;
                cout << valor << " pulgadas son " << pulgadasToMetros(valor) << " metros." << endl;
                break;
            case 5:
                cout << "Ingresa un valor en libras: ";
                cin >> valor;
                cout << valor << " libras son " << librasToKilos(valor) << " kilos." << endl;
                break;
            case 6:
                cout << "Ingresa un valor en kilos: ";
                cin >> valor;
                cout << valor << " kilos son " << kilosToLibras(valor) << " libras." << endl;
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no válida. Intenta de nuevo." << endl;
        }
    } while (opcion != 0);
}


