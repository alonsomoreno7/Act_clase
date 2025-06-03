#include <iostream>
using namespace std;

int main() {
    int ano;

    cout << "Ingresa un año: ";
    cin >> ano;

    // Un año es bisiesto si:
    // Es divisible por 400, o
    // Es divisible por 4 pero no por 100
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        cout << ano << " es un año bisiesto." << endl;
    } else {
        cout << ano << " no es un año bisiesto." << endl;
    }

    return 0;
}
