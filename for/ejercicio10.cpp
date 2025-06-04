#include <iostream>
using namespace std;

int main() {
    int N;

    // Pedimos al usuario la cantidad de términos a mostrar
    cout << "Ingresa el número de términos de la serie de Fibonacci: ";
    cin >> N;

    // Variables para los dos primeros términos de Fibonacci
    int a = 0, b = 1, siguiente;

    cout << "Serie de Fibonacci: ";

    // Mostramos los términos según N
    for (int i = 1; i <= N; i++) {
        cout << a << " ";  // Imprimimos el término actual

        // Calculamos el siguiente término
        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    cout << endl;

    return 0;
}
