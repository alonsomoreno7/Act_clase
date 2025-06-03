#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuarioCorrecto = "admin";
    string contrasenaCorrecta = "1234";

    string usuarioIngresado, contrasenaIngresada;

    // Pedimos al usuario que ingrese sus datos
    cout << "Usuario: ";
    cin >> usuarioIngresado;

    cout << "Contraseña: ";
    cin >> contrasenaIngresada;

    // Verificamos si ambos coinciden
    if (usuarioIngresado == usuarioCorrecto && contrasenaIngresada == contrasenaCorrecta) {
        cout << "Acceso concedido. Bienvenido, " << usuarioIngresado << "!" << endl;
    } else {
        cout << "Acceso denegado. Usuario o contraseña incorrectos." << endl;
    }

    return 0;
}
