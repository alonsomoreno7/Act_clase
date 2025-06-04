#include <iostream>
using namespace std;

int main() {
    // Recorremos los números del 1 al 50
    for (int i = 1; i <= 50; i++) {
        // Verificamos si el número es par
        if (i % 2 == 0) {
            cout << i << endl;  // Imprimimos el número par
        }
    }

    return 0;
}
