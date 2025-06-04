#include <iostream>
using namespace std;

int main() {
    int tipoComida;

    // Pedir al usuario que ingrese el tipo de comida
    cout << "Ingrese el tipo de comida:\n";
    cout << "1 = Fruta\n";
    cout << "2 = Verdura\n";
    cout << "3 = Carne\n";
    cout << "Seleccione una opción: ";
    cin >> tipoComida;

    // Mostrar el rango de calorías según el tipo de comida
    switch (tipoComida) {
        case 1: // Fruta
            cout << "Las frutas suelen tener entre 50 y 100 calorías por porción." << endl;
            break;
        case 2: // Verdura
            cout << "Las verduras suelen tener entre 20 y 80 calorías por porción." << endl;
            break;
        case 3: // Carne
            cout << "Las carnes suelen tener entre 150 y 300 calorías por porción." << endl;
            break;
        default: // Opción inválida
            cout << "Opción no válida. Por favor ingrese 1, 2 o 3." << endl;
            break;
    }

    return 0;
}
