#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter an integer, please" << endl;
    cin >> number;

    if (number < 0){
        cout << "The number is negative" << endl;
    }
    else if (number == 0){
        cout << "The number is zero" << endl;
    }
    else{
        cout << "The number is positive" << endl;
    }

    if (number % 2 == 0){
        cout << "The number is even" << endl;
    }
    else{
        cout << "The number is odd" << endl;
    }

    return 0;
}