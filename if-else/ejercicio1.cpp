#include <iostream>
using namespace std;

int main() {
    int edad;

    // Pedimos al usuario que ingrese su edad
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Verificamos si es mayor o menor de edad
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    return 0;
}
