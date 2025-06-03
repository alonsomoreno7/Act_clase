#include <iostream>
using namespace std;

int main() {
    float velocidad;

    // Pedimos al usuario que ingrese la velocidad del conductor
    cout << "Ingresa la velocidad del conductor (km/h): ";
    cin >> velocidad;

    // Evaluamos la velocidad y determinamos la multa correspondiente
    if (velocidad > 80) {
        // Si la velocidad es mayor a 80 km/h, multa grave
        cout << "Multa grave: Exceso de velocidad superior a 80 km/h." << endl;
    } else if (velocidad > 60) {
        // Si la velocidad es mayor a 60 km/h pero menor o igual a 80, multa leve
        cout << "Multa leve: Exceso de velocidad superior a 60 km/h." << endl;
    } else {
        // Si la velocidad es 60 km/h o menos, no hay multa
        cout << "No hay multa. Velocidad dentro del límite permitido." << endl;
    }

    return 0;
}
