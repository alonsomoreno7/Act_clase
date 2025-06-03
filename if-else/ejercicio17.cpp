#include <iostream>
using namespace std;

int main() {
    int edad;
    int precio;

    // Pedimos la edad del visitante
    cout << "Ingresa la edad del visitante: ";
    cin >> edad;

    // Calculamos el precio según la edad
    if (edad < 5) {
        precio = 0;  // Entrada gratis para menores de 5 años
    } else if (edad >= 5 && edad <= 12) {
        precio = 5;  // Pago de $5 para niños de 5 a 12 años
    } else {
        precio = 10; // Pago de $10 para mayores de 12 años
    }

    // Mostramos el precio
    cout << "El precio de entrada es: $" << precio << endl;

    return 0;
}
