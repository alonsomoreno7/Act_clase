#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero;
    int maxDigito = 0;

    // Pedimos al usuario que ingrese un número
    cout << "Ingresa un número: ";
    cin >> numero;

    // Recorremos cada carácter del número
    for (int i = 0; i < numero.length(); i++) {
        // Convertimos el carácter a su valor numérico
        int digito = numero[i] - '0';

        // Comparamos y guardamos el dígito más grande
        if (digito > maxDigito) {
            maxDigito = digito;
        }
    }

    // Mostramos el dígito más grande encontrado
    cout << "El dígito más grande es: " << maxDigito << endl;

    return 0;
}
