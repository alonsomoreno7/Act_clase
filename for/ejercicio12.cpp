#include <iostream>
using namespace std;

int main() {
    int base, exponente;
    long long resultado = 1;  // Usamos long long para números más grandes

    // Pedimos al usuario la base y el exponente
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente (entero no negativo): ";
    cin >> exponente;

    // Validamos que el exponente sea no negativo
    if (exponente < 0) {
        cout << "El exponente debe ser un entero no negativo." << endl;
    } else {
        // Calculamos la potencia usando un ciclo for
        for (int i = 1; i <= exponente; i++) {
            resultado *= base;  // Multiplicamos resultado por la base en cada iteración
        }

        // Mostramos el resultado
        cout << base << "^" << exponente << " = " << resultado << endl;
    }

    return 0;
}
