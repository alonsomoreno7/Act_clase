#include <iostream>
using namespace std;

int main() {
    int N;

    // Pedimos la altura del triángulo
    cout << "Ingresa la altura del triángulo: ";
    cin >> N;

    // Ciclo para cada fila
    for (int i = 1; i <= N; i++) {
        // Imprimimos i asteriscos en la fila i
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Saltamos a la siguiente línea después de cada fila
    }

    return 0;
}
