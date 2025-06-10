#include <iostream>  // Para entrada y salida de datos
#include <string>    // Para manejar cadenas de texto (string)

using namespace std;

// Definición de la estructura Libro
struct Libro {
    string titulo;
    string autor;
    int anioPublicacion;
};

int main() {
    Libro miLibro; // Variable de tipo Libro

    // Pedimos al usuario los datos del libro
    cout << "Ingrese el título del libro: ";
    getline(cin, miLibro.titulo); // Usamos getline para permitir espacios

    cout << "Ingrese el autor del libro: ";
    getline(cin, miLibro.autor);

    cout << "Ingrese el año de publicación: ";
    cin >> miLibro.anioPublicacion;

    // Mostramos los datos ingresados
    cout << "\n--- Datos del Libro ---" << endl;
    cout << "Título: " << miLibro.titulo << endl;
    cout << "Autor: " << miLibro.autor << endl;
    cout << "Año de publicación: " << miLibro.anioPublicacion << endl;

    return 0;
}
