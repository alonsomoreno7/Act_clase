#include <iostream>
using namespace std;

int main() {
    int N;
    int encontrados = 0;

    cout << "Ingresa la cantidad de números perfectos a mostrar: ";
    cin >> N;

    // Empezamos desde el número 1 y seguimos hasta encontrar N números perfectos
    for (int num = 1; encontrados < N; num++) {
        int suma = 0;

        // Calculamos la suma de los divisores propios de num
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                suma += i;
            }
        }

        // Si la suma de divisores es igual al número, es perfecto
        if (suma == num) {
            cout << num << endl;
            encontrados++;
        }
    }

    return 0;
}
