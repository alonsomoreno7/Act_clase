#include <iostream>
using namespace std;

int main() {
    float promedio;
    int faltas;

    // Pedimos los datos al usuario
    cout << "Ingresa el promedio del estudiante: ";
    cin >> promedio;

    cout << "Ingresa el número de faltas del estudiante: ";
    cin >> faltas;

    // Verificamos si cumple ambas condiciones
    if (promedio >= 85 && faltas < 3) {
        cout << "¡El estudiante recibe beca!" << endl;
    } else {
        cout << "El estudiante no cumple los requisitos para la beca." << endl;
    }

    return 0;
}
