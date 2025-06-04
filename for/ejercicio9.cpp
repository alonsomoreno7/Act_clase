#include <iostream>
using namespace std;

int main() {
    // Recorremos los números del 1 al 100
    for (int i = 1; i <= 100; i++) {
        // Verificamos si el número es divisible por 3 y por 5
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << endl;  // Imprimimos el número que cumple la condición
        }
    }

    return 0;
}
