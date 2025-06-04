#include <iostream>
using namespace std;

int main() {
    double salario;
    int categoria;

    // Pedir salario al usuario
    cout << "Ingrese su salario mensual: ";
    cin >> salario;

    // Determinar categoría según rango salarial usando if
    if (salario < 0) {
        categoria = 0; // Salario inválido
    } else if (salario <= 1000) {
        categoria = 1; // 5%
    } else if (salario <= 3000) {
        categoria = 2; // 10%
    } else if (salario <= 5000) {
        categoria = 3; // 15%
    } else {
        categoria = 4; // 20%
    }

    // Mostrar impuesto con switch
    switch (categoria) {
        case 0:
            cout << "Salario inválido. Ingrese un valor correcto." << endl;
            break;
        case 1:
            cout << "Debe pagar el 5% de impuestos." << endl;
            break;
        case 2:
            cout << "Debe pagar el 10% de impuestos." << endl;
            break;
        case 3:
            cout << "Debe pagar el 15% de impuestos." << endl;
            break;
        case 4:
            cout << "Debe pagar el 20% de impuestos." << endl;
            break;
        default:
            cout << "Error desconocido." << endl;
            break;
    }

    return 0;
}
