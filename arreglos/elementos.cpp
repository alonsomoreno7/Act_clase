//6. Invertir un Arreglo
//Llena un arreglo con N números e invierte el orden de los elementos.

#include <iostream>
using namespace std;

int main()
{
    // Declaracion de los arreglos
    int Normal[5], Inverso[5];
    cout << "Bienvenido al sistema.Ingrese 5 numeros: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Numero: " << i + 1 << ": ";
        cin >> Normal[i];
    }

    // Logica para invertir los numeros
    for (int i = 4, e = 0; i >= 0; i--, e++)
    {
        Inverso[e] = Normal[i];
    }

    // Arreglo de los numeros en su posicion invertida
    cout << "Numeros en su posicion invertida" << endl;
    for (int i = 0;  i < 5; i++)
    {
        cout << "Elemento en la posicion: " << i << ": " << Inverso[i] << endl;
    }

    // Arreglo de los numeros en su posicion normal
    cout << "Numeros en su posicion normal" << endl;
    for (int i = 0;  i < 5; i++)
    {
        cout << "Elemento en la posicion: " << i << ": " << Normal[i] << endl;
    }

    return 0;
}