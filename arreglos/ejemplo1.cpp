#include <iostream>
using namespace std;

int main(){
    
    int numero[5] ={1,2,3,4,5};

    cout <<"Contenido del arreglo: "<<endl;

    //Recorrer el arreglo y mostrar sus elementos 
    for (int i = 5; i >= 0; i--)
    {
        cout <<"Elemento en la posicion " << i << ": " << numero[i] <<endl;
    }
    return 0;
}