#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Pedir al usuario dos números
    cout << "Ingresa el primer número: ";
    cin >> a;

    cout << "Ingresa el segundo número: ";
    cin >> b;

    // Guardamos los valores originales (opcional, para mostrar después)
    int originalA = a;
    int originalB = b;

    // Algoritmo de Euclides para hallar el MCD
    while (b != 0) {
        int residuo = a % b; // Calcula el residuo
        a = b;               // El divisor pasa a ser el nuevo número
        b = residuo;         // El residuo se convierte en el nuevo divisor
    }

    // Cuando b es 0, el MCD es a
    cout << "El MCD de " << originalA << " y " << originalB << " es: " << a << endl;

    return 0;
}
