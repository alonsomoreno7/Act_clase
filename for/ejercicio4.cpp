#include <iostream>
using namespace std;

int main() {
    int num;

    // Pedimos al usuario el número para la tabla
    cout << "Ingresa un número para mostrar su tabla de multiplicar: ";
    cin >> num;

    // Mostramos la tabla del 1 al 10
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
