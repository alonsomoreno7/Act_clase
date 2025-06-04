#include <iostream>
using namespace std;

int main() {
    int num, inverso = 0;

    // Pedimos al usuario que ingrese un número
    cout << "Ingresa un número entero: ";
    cin >> num;

    int temp = num;  // Guardamos el número original en una variable temporal

    // Mientras temp sea distinto de 0
    while (temp != 0) {
        int digito = temp % 10;   // Obtenemos el último dígito
        inverso = inverso * 10 + digito;  // Agregamos el dígito al inverso
        temp /= 10;               // Eliminamos el último dígito de temp
    }

    // Mostramos el número invertido
    cout << "El número invertido de " << num << " es: " << inverso << endl;

    return 0;
}
