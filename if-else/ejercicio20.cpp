#include <iostream>
using namespace std;

int main() {
    int edad, infracciones, experiencia;
    string estado;

    // Pedimos los datos del conductor
    cout << "Ingresa la edad del conductor: ";
    cin >> edad;
    cout << "Ingresa el número de infracciones: ";
    cin >> infracciones;
    cout << "Ingresa los años de experiencia conduciendo: ";
    cin >> experiencia;

    // Evaluamos el estado del conductor según los criterios
    if (edad < 18) {
        estado = "No autorizado para conducir (menor de edad).";
    } else if (infracciones > 3) {
        estado = "Estado: Peligroso - demasiadas infracciones.";
    } else if (experiencia < 2) {
        estado = "Estado: Novato - poca experiencia.";
    } else if (infracciones == 0 && experiencia >= 5) {
        estado = "Estado: Excelente - sin infracciones y experiencia considerable.";
    } else {
        estado = "Estado: Regular - con infracciones o experiencia moderada.";
    }

    // Mostramos el resultado
    cout << estado << endl;

    return 0;
}
