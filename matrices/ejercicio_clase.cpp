#include <iostream>   // Entrada y salida
#include <cstring>    // Para funciones como strlen()
#include <cctype>     // Para tolower()

using namespace std;

int main() {
    const int MAX = 100;     // Tamaño máximo de la palabra
    char palabra[MAX];       // Matriz de caracteres (array tipo C)

    // Pedimos la palabra al usuario
    cout << "Ingrese una palabra: ";
    cin >> palabra; // Se detiene en el primer espacio

    int izquierda = 0;
    int derecha = strlen(palabra) - 1; // Longitud de la palabra - 1
    bool esPalindromo = true;

    // Verificamos letra por letra desde los extremos
    while (izquierda < derecha) {
        if (tolower(palabra[izquierda]) != tolower(palabra[derecha])) {
            esPalindromo = false;
            break;
        }
        izquierda++;
        derecha--;
    }

    // Resultado
    if (esPalindromo) {
        cout << "La palabra \"" << palabra << "\" es un palindromo.\n";
    } else {
        cout << "La palabra \"" << palabra << "\" no es un palindromo.\n";
    }

    return 0;
}
