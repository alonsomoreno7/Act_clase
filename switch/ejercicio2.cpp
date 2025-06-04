#include <iostream>
using namespace std;

int main() {
    int nota;

    // Solicitar la calificación al usuario
    cout << "Ingresa una calificación (0 - 100): ";
    cin >> nota;

    // Verificar que la calificación esté dentro del rango válido
    if (nota < 0 || nota > 100) {
        cout << "Calificación inválida." << endl;
        return 1; // Finaliza el programa si es inválida
    }

    // Usamos división entera para agrupar las calificaciones por decenas
    switch (nota / 10) {
        case 10: // Para 100
        case 9:  // 90 - 99
            cout << "Calificación: A" << endl;
            break;
        case 8:  // 80 - 89
            cout << "Calificación: B" << endl;
            break;
        case 7:  // 70 - 79
            cout << "Calificación: C" << endl;
            break;
        case 6:  // 60 - 69
            cout << "Calificación: D" << endl;
            break;
        default: // Menos de 60
            cout << "Calificación: F" << endl;
    }

    return 0;
}
