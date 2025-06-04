#include <iostream>
using namespace std;

int main() {
    int N;
    double suma = 0.0;

    // Pedimos al usuario cuántos números quiere ingresar
    cout << "¿Cuántos números quieres ingresar? ";
    cin >> N;

    // Verificamos que N sea positivo
    if (N <= 0) {
        cout << "El número debe ser mayor que cero." << endl;
    } else {
        double num;

        // Pedimos los N números y los sumamos
        for (int i = 1; i <= N; i++) {
            cout << "Ingresa el número " << i << ": ";
            cin >> num;
            suma += num;
        }

        // Calculamos el promedio
        double promedio = suma / N;

        // Mostramos el resultado
        cout << "El promedio de los " << N << " números es: " << promedio << endl;
    }

    return 0;
}
