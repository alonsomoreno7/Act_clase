//10. Serie de Fibonacci
//Muestra los primeros N términos de la serie de Fibonacci.

#include <iostream>
using namespace std;

int main() {
// Cantidad de términos que el usuario quiere ver
    int n;
// Primer término de la serie (0)
    int a = 0;
// Segundo término de la serie (1)
    int b = 1;
// Variable para guardar la suma de los dos últimos términos     
    int suma;       


// Pedimos al usuario la cantidad de términos a mostrar
    cout << "¿Cuántos términos de la serie Fibonacci quieres ver?: ";
    cin >> n;

    cout << "Serie Fibonacci: ";

// Ciclo para generar y mostrar los primeros n términos
    for (int i = 0; i < n; i++) {
        // Mostrar el término actual
        cout << a << " ";  
        // Se suman los dos últimos términos
        suma = a + b;       
        // Actualizamos a con el valor de b
        a = b;            
        // Actualizamos b con la suma para el siguiente término
        b = suma;           
    }

    cout << endl; 
 
    return 0;
}
