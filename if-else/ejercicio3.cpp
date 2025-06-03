#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;

    // Pedimos los dos números
    cout << "Ingresa el primer número: ";
    cin >> numero1;

    cout << "Ingresa el segundo número: ";
    cin >> numero2;

    // Comparamos los números
    if (numero1 > numero2) {
        cout << "El primer número (" << numero1 << ") es mayor que el segundo (" << numero2 << ")." << endl;
    } else if (numero1 < numero2) {
        cout << "El segundo número (" << numero2 << ") es mayor que el primero (" << numero1 << ")." << endl;
    } else {
        cout << "Ambos números son iguales." << endl;
    }

    return 0;
}
