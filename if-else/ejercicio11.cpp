#include <iostream>
#include <cmath> // para usar abs()
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    // Calculamos la distancia absoluta a 100
    int distancia1 = abs(100 - num1);
    int distancia2 = abs(100 - num2);

    if (distancia1 < distancia2) {
        cout << num1 << " está más cerca de 100." << endl;
    } else if (distancia2 < distancia1) {
        cout << num2 << " está más cerca de 100." << endl;
    } else {
        cout << "Ambos números están a la misma distancia de 100." << endl;
    }

    return 0;
}
