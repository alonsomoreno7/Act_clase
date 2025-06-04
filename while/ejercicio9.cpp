#include <iostream>
using namespace std;

int main() {
    int numero;
    long long factorial = 1;  // Usamos long long para números grandes

    cout << "Ingresa un número entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        int i = 1;
        while (i <= numero) {
            factorial *= i;
            i++;
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
