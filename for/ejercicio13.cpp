#include <iostream>
using namespace std;

int main() {
    int num;
    bool esPrimo = true;  // Asumimos que el número es primo inicialmente

    // Pedimos al usuario un número entero mayor que 1
    cout << "Ingresa un número entero mayor que 1: ";
    cin >> num;

    // Validamos que el número sea mayor que 1
    if (num <= 1) {
        cout << "El número debe ser mayor que 1." << endl;
        return 0;
    }

    // Revisamos si el número tiene divisores distintos de 1 y él mismo
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            esPrimo = false;  // Encontramos un divisor, no es primo
            break;            // No es necesario seguir buscando
        }
    }

    // Mostramos el resultado
    if (esPrimo) {
        cout << num << " es un número primo." << endl;
    } else {
        cout << num << " no es un número primo." << endl;
    }

    return 0;
}
