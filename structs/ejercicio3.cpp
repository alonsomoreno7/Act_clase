#include <iostream>  // Entrada y salida
#include <string>    // Para usar strings
using namespace std;

// Definimos la estructura Producto
struct Producto {
    string nombre;
    float precio;
    int cantidad;
};

int main() {
    int n;

    // Pedimos la cantidad de productos
    cout << "¿Cuántos productos desea registrar? ";
    cin >> n;
    cin.ignore(); // Limpiar el buffer antes de usar getline

    Producto productos[100]; // Arreglo de productos (máx. 100)

    // Registro de productos
    for (int i = 0; i < n; i++) {
        cout << "\nProducto #" << (i + 1) << endl;

        cout << "Nombre: ";
        getline(cin, productos[i].nombre);

        cout << "Precio: ";
        cin >> productos[i].precio;

        cout << "Cantidad en inventario: ";
        cin >> productos[i].cantidad;
        cin.ignore(); // Limpiar el buffer para el siguiente getline
    }

    // Mostrar los productos registrados
    cout << "\n--- Lista de Productos ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nProducto #" << (i + 1) << endl;
        cout << "Nombre: " << productos[i].nombre << endl;
        cout << "Precio: $" << productos[i].precio << endl;
        cout << "Cantidad en inventario: " << productos[i].cantidad << endl;
    }

    return 0;
}
