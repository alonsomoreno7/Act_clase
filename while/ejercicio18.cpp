#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

int main() {
    int numeroSecreto, intento, intentosRestantes = 5;
    int adivina;

    // Inicializar la semilla para números aleatorios
    srand(time(0));

    // Generar número aleatorio entre 1 y 50
    numeroSecreto = rand() % 50 + 1;

    cout << "¡Adivina el número entre 1 y 50! Tienes 5 intentos.\n";

    while (intentosRestantes > 0) {
        cout << "Ingresa tu intento: ";
        cin >> adivina;

        if (adivina == numeroSecreto) {
            cout << "¡Felicidades! Adivinaste el número.\n";
            break;
        } else if (adivina < numeroSecreto) {
            cout << "El número es mayor.\n";
        } else {
            cout << "El número es menor.\n";
        }

        intentosRestantes--;
        cout << "Te quedan " << intentosRestantes << " intento(s).\n";
    }

    if (intentosRestantes == 0) {
        cout << "Se te acabaron los intentos. El número era: " << numeroSecreto << "\n";
    }

    return 0;
}
