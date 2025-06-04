#include <iostream>
using namespace std;

int main() {
    int N;

    // Pedimos al usuario hasta qué número quiere la serie
    cout << "Ingresa el número N: ";
    cin >> N;

    // Recorremos desde 1 hasta N
    for (int i = 1; i <= N; i++) {
        // Si el número es par, imprimimos negativo; si es impar, positivo
        if (i % 2 == 0) {
            cout << -i;
        } else {
            cout << i;
        }

        // Imprimimos coma y espacio excepto después del último número
        if (i < N) {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}
