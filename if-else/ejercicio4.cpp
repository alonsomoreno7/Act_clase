#include <iostream>
using namespace std;

int main() {
    int calificacion;

    // Solicitamos la calificación al usuario
    cout << "Ingresa la calificación del estudiante: ";
    cin >> calificacion;

    // Verificamos si aprobó o reprobó
    if (calificacion >= 60) {
        cout << "El estudiante aprobó." << endl;
    } else {
        cout << "El estudiante reprobó." << endl;
    }

    return 0;
}
