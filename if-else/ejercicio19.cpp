#include <iostream>
using namespace std;

int main() {
    float consumo;
    string tarifa;

    // Pedimos al usuario el consumo en kWh
    cout << "Ingresa el consumo de electricidad en kWh: ";
    cin >> consumo;

    // Determinamos la tarifa según el consumo
    if (consumo < 100) {
        tarifa = "tarifa baja";
    } else if (consumo >= 100 && consumo <= 200) {
        tarifa = "tarifa media";
    } else {
        tarifa = "tarifa alta";
    }

    // Mostramos el resultado
    cout << "El consumo es de " << consumo << " kWh, por lo tanto la " << tarifa << "." << endl;

    return 0;
}
