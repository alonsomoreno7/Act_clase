#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    // Pedimos al usuario que ingrese un número N
    cout << "Ingresa un número N: ";
    cin >> N;

    // Sumamos los números del 1 hasta N usando un ciclo for
    for (int i = 1; i <= N; i++) {
        suma += i;  // suma = suma + i
    }

    // Mostramos el resultado
    cout << "La suma de los primeros " << N << " números naturales es: " << suma << endl;

    return 0;
}
