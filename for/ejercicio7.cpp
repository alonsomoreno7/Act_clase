#include <iostream>
using namespace std;

int main() {
    int num;
    unsigned long long factorial = 1;  // Usamos unsigned long long para evitar overflow en números grandes

    // Pedimos al usuario un número
    cout << "Ingresa un número para calcular su factorial: ";
    cin >> num;

    // Validamos que el número sea no negativo
    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        // Calculamos el factorial usando un ciclo for
        for (int i = 1; i <= num; i++) {
            factorial *= i;  // factorial = factorial * i
        }

        // Mostramos el resultado
        cout << "El factorial de " << num << " es: " << factorial << endl;
    }

    return 0;
}
