#include <iostream>
#include <string>
using namespace std;

int main() {
    const string usuario_correcto = "admin";
    const string contrasena_correcta = "1234";
    string usuario_ingresado, contrasena_ingresada;
    int intentos = 0;
    const int max_intentos = 3;

    while (intentos < max_intentos) {
        cout << "Usuario: ";
        cin >> usuario_ingresado;
        cout << "Contraseña: ";
        cin >> contrasena_ingresada;

        if (usuario_ingresado == usuario_correcto && contrasena_ingresada == contrasena_correcta) {
            cout << "¡Acceso concedido!" << endl;
            break; // Salir del ciclo si autenticación correcta
        } else {
            intentos++;
            cout << "Usuario o contraseña incorrectos. Intento " << intentos << " de " << max_intentos << "." << endl;
        }
    }

    if (intentos == max_intentos) {
        cout << "Has agotado el número máximo de intentos. Acceso denegado." << endl;
    }

    return 0;
}
