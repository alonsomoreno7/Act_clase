#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    // Pedimos al usuario el valor de N
    cout << "Ingresa un número N: ";
    cin >> N;

    // Recorremos del 1 hasta N
    for (int i = 1; i <= N; i++) {
        // Verificamos si i es par
        if (i % 2 == 0) {
            suma += i;  // Sumamos i a la variable suma
        }
    }

    // Mostramos el resultado final
    cout << "La suma de los números pares desde 1 hasta " << N << " es: " << suma << endl;

    return 0;
}
