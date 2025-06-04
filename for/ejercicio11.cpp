#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;

    // Pedimos al usuario un número entero positivo
    cout << "Ingresa un número: ";
    cin >> num;

    // Usamos una copia del número para no modificar el original
    int temp = num;

    // Mientras el número sea mayor que 0, extraemos cada dígito y lo sumamos
    while (temp > 0) {
        int digito = temp % 10;  // Obtenemos el último dígito
        suma += digito;           // Lo sumamos
        temp /= 10;               // Eliminamos el último dígito
    }

    // Mostramos la suma de los dígitos
    cout << "La suma de los dígitos de " << num << " es: " << suma << endl;

    return 0;
}
