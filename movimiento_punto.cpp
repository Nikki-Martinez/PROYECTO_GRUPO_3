#include <iostream>
#include <conio.h>  // Para _kbhit() y _getch()
#include <windows.h>
#include "movimiento_punto.h"

using namespace std;

// Función para mover el cursor en la consola
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void movimientoPunto() {
    int x = 10, y = 10;  // Posición inicial del punto

    // Oculta el cursor para una mejor visualización
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 1;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

    while (true) {
        if (_kbhit()) {  // Si se presiona una tecla
            char tecla = _getch();  // Obtiene la tecla presionada

            // Verifica si es una tecla de flecha (códigos especiales)
            if (tecla == -32) {  
                tecla = _getch();  // Lee el código extendido de la tecla

                // Control del movimiento con flechas
                switch (tecla) {
                    case 72: y--; break;  // Flecha arriba
                    case 80: y++; break;  // Flecha abajo
                    case 75: x--; break;  // Flecha izquierda
                    case 77: x++; break;  // Flecha derecha
                }
            }
        }

        // Limpiar pantalla y dibujar el punto en la nueva posición
        system("cls");  
        gotoxy(x, y);
        cout << "*";

        Sleep(50);  // Pequeña pausa para evitar parpadeo
    }
}

/*main(){
	movimiento_punto();
}*/
