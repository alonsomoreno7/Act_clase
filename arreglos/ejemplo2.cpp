#include <iostream>
using namespace std;

int main(){
    int numero[5];
    cout <<"Ingrese 5 numeros: " <<endl;
    for(int i=0; i < 5; i++){
        cout <<"Numero: " << i + 1 << ": ";
        cin >> numero[i];
    }

    cout <<"Números ingresados: " <<endl;
    for (int i= 0; i < 5; i++){
        cout <<"Número " << i + 1 << ": " << numero[i] <<endl;
    }
}