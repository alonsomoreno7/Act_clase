#include <iostream>
using namespace std;

int main() {
    float monto, total;

    // Solicitamos el monto de la compra
    cout << "Ingresa el monto de la compra: $";
    cin >> monto;

    // Verificamos si aplica descuento
    if (monto > 100) {
        total = monto * 0.90;  // Aplica 10% de descuento
        cout << "Se aplicó un 10% de descuento." << endl;
    } else {
        total = monto;  // No hay descuento
        cout << "No se aplicó descuento." << endl;
    }

    // Mostramos el total a pagar
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
