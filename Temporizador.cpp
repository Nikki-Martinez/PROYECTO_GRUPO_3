#include "Temporizador.h"
using namespace std;


void temporizador(int horas, int minutos, int segundos) {
    int total_segundos = horas * 3600 + minutos * 60 + segundos;

    while (total_segundos > 0) {
        int h = total_segundos / 3600;
        int m = (total_segundos % 3600) / 60;
        int s = total_segundos % 60;

        cout << "Tiempo restante: " << h << "h " << m << "m " << s << "s\r";
        cout.flush();

        this_thread::sleep_for(chrono::seconds(1));
        total_segundos--;
    }

    cout << "¡Se acabó el tiempo!\n";
}

/*main() {
    int horas, minutos, segundos;

    cout << "Ingrese las horas: ";
    cin >> horas;
    cout << "Ingrese los minutos: ";
    cin >> minutos;
    cout << "Ingrese los segundos: ";
    cin >> segundos;

    temporizador(horas, minutos, segundos);
	
    system("pause");
}*/ 
