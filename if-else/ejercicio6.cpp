#include <iostream>
using namespace std;

int main() {
    int dia;

    // Pedimos al usuario un número del 1 al 7
    cout << "Ingresa un número del 1 al 7 (1 = Lunes, 7 = Domingo): ";
    cin >> dia;

    // Verificamos qué tipo de día es
    if (dia >= 1 && dia <= 5) {
        cout << "Es un día laboral." << endl;
    } else if (dia == 6 || dia == 7) {
        cout << "Es fin de semana." << endl;
    } else {
        cout << "Número inválido. Debe estar entre 1 y 7." << endl;
    }

    return 0;
}
