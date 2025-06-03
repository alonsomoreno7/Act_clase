#include <iostream>
using namespace std;

int main() {
    float temperatura;

    // Pedimos la temperatura en grados Celsius
    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> temperatura;

    // Evaluamos la temperatura
    if (temperatura < 15) {
        cout << "La temperatura está fría." << endl;
    } else if (temperatura <= 25) {
        cout << "La temperatura está templada." << endl;
    } else {
        cout << "La temperatura está caliente." << endl;
    }

    return 0;
}
