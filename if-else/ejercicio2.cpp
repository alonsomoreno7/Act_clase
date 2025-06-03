#include <iostream>
using namespace std;

int main() {
    int numero;

    // Pedimos al usuario que ingrese un número
    cout << "Ingresa un número: ";
    cin >> numero;

    // Verificamos si el número es par o impar usando el operador módulo (%)
    if (numero % 2 == 0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }

    return 0;
}
