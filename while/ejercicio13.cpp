#include <iostream>
using namespace std;

int main() {
    int N;

    // Pedimos al usuario cuántos términos quiere ver
    cout << "¿Cuántos términos de la serie Fibonacci deseas mostrar?: ";
    cin >> N;

    // Inicializamos los dos primeros términos
    int a = 0, b = 1, contador = 1;

    // Mostramos mensaje inicial
    cout << "Serie de Fibonacci (" << N << " términos): ";

    // Ciclo while para mostrar los N términos
    while (contador <= N) {
        cout << a << " ";        // Imprimir el término actual

        int siguiente = a + b;   // Calcular el siguiente número
        a = b;                   // Avanzamos al siguiente par de números
        b = siguiente;
        contador++;              // Aumentamos el contador
    }

    cout << endl;
    return 0;
}
