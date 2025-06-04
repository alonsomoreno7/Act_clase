#include <iostream>
using namespace std;

int main() {
    int N;
    double pi = 0.0;

    // Pedimos al usuario cuántos términos usar para la aproximación
    cout << "Ingresa el número de términos para aproximar π: ";
    cin >> N;

    // Calculamos la suma de la serie de Leibniz
    for (int i = 0; i < N; i++) {
        // Alternamos signo: positivo para términos pares, negativo para impares
        double termino = (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
        pi += termino;
    }

    pi *= 4;  // Multiplicamos la suma por 4 para obtener la aproximación de π

    // Mostramos el resultado
    cout << "Aproximación de π con " << N << " términos: " << pi << endl;

    return 0;
}
