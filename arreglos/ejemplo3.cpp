#include <iostream>
using namespace std;

int main(){

    int numeros[5] = {5, 8, 12, 3,7};
    int maximo = numeros[0];

    for (int i= 1; i <5; i++){

        if(numeros[i] > maximo){
            maximo = numeros[i];
        }
    }

    cout <<"El valor máximo es: " << maximo << endl;

    return 0;
}