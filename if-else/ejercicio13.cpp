#include <iostream>
using namespace std;

int main() {
    int calificacion;
    char letra;

    // Pedimos la calificación
    cout << "Ingresa la calificación (0-100): ";
    cin >> calificacion;

    // Validamos rango válido
    if (calificacion < 0 || calificacion > 100) {
        cout << "Calificación inválida. Debe estar entre 0 y 100." << endl;
        return 1; // Terminamos el programa con error
    }

    // Convertimos a letra según rangos comunes
    if (calificacion >= 90) {
        letra = 'A';
    } else if (calificacion >= 80) {
        letra = 'B';
    } else if (calificacion >= 70) {
        letra = 'C';
    } else if (calificacion >= 60) {
        letra = 'D';
    } else {
        letra = 'F';
    }

    // Mostramos la calificación en letra
    cout << "La calificación en letra es: " << letra << endl;

    return 0;
}
