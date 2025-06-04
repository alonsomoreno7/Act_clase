#include <iostream>
using namespace std;

int main() {
    int numero; // Variable para almacenar el número ingresado

    // Ciclo que se repite hasta que el número esté en el rango de 1 a 10
    do {
        cout << "Ingresa un número entre 1 y 10: ";
        cin >> numero; // Leer el número del usuario

        // Verificamos si está fuera del rango
        if (numero < 1 || numero > 10) {
            cout << "Número fuera de rango. Inténtalo de nuevo.\n";
        }

    } while (numero < 1 || numero > 10); // Condición para repetir el ciclo

    // Mensaje de éxito
    cout << "¡Número válido! Ingresaste: " << numero << endl;

    return 0; // Fin del programa
}
