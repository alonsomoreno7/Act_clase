#include <iostream>
#include <string>
using namespace std;

int main() {
    string contrasena1, contrasena2;

    // Pedimos la primera contraseña
    cout << "Ingresa la contraseña: ";
    getline(cin, contrasena1);

    // Pedimos la segunda contraseña para confirmarla
    cout << "Confirma la contraseña: ";
    getline(cin, contrasena2);

    // Verificamos si ambas contraseñas coinciden
    if (contrasena1 == contrasena2) {
        cout << "Las contraseñas coinciden. Continuando..." << endl;
        // Aquí puedes continuar con el siguiente paso del programa
    } else {
        cout << "Las contraseñas no coinciden. Intenta de nuevo." << endl;
        // Aquí podrías pedirlas otra vez o terminar el programa
    }

    return 0;
}
