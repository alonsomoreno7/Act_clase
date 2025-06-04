#include <iostream>
#include <cmath>  // Para usar pow
using namespace std;

int main() {
    int num, originalNum, suma = 0, digitos = 0;

    cout << "Ingresa un número: ";
    cin >> num;

    originalNum = num;

    // Contar cuántos dígitos tiene el número
    for (int temp = num; temp > 0; temp /= 10) {
        digitos++;
    }

    // Calcular la suma de cada dígito elevado a la cantidad de dígitos
    for (int temp = num; temp > 0; temp /= 10) {
        int digito = temp % 10;
        suma += pow(digito, digitos);
    }

    // Verificamos si la suma es igual al número original
    if (suma == originalNum) {
        cout << originalNum << " es un número Armstrong." << endl;
    } else {
        cout << originalNum << " NO es un número Armstrong." << endl;
    }

    return 0;
}
