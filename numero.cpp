//4. Búsqueda de un Número
//Pide N números, guárdalos en un arreglo y busca si un número dado por el usuario está en él.

#include <iostream>
using namespace std;

int main()
{
    //Declaramos el arreglo y la varaible del numero que se va usar en el arreglo
    int numeros[5], Buscar;
    bool Esta = false;
    // Pedimos al usuario que ingrese los numeros al sistema
    cout << "Bienvenido al sistema porfavor.Ingrese 5 numeros: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    // Le pedimos al usuario que ingrese el numero a buscar
    cout << "Ingrese un numero que quiere que el sistema busque en el arreglo: ";
    cin >> Buscar;

    for (int i = 0; i < 5; i++)
    {
        //Se busca si el numero que el usuario solicito a buscar se encuentra 
        if (Buscar == numeros[i])
        {
            Esta = true;
        }
        
    }

    //Posteriormente se imprime el resultado de la busqueda en el arreglo
    if (Esta)
    {
        cout << "El numero que solicito a buscar si se encuentra en el arreglo: " << Buscar << endl;
    }
    else{
        cout << "El numero que solicito a buscar no se encuentra en el arreglo: " << Buscar << endl;
    }


    return 0;
}