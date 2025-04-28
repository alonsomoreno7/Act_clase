/*10. **Shipping Rate Calculator**  
Ask for the weight of a package and charge $5 if it weighs up to 5kg, $10 if it weighs between 6kg and 10kg, and $15 if it weighs more than 10kg.*/

#include <iostream>

using namespace std;

int main() {

    /* Create a variable to store the information entered by the user, called "weight" */
    int weight;

    /* Ask the user for the weight of the package to be shipped */
    cout << "Enter the weight of the package to be shipped: ";

    /* Store the entered weight */
    cin >> weight;

    /* This condition will be applied if the weight is up to 5kg */
    if (weight <= 5) {
        cout << "Your charge will be 5 dollars" << endl;
    } 
    /* This condition will be applied if the weight is between 6kg and 10kg */
    else if (weight >= 6 && weight <= 10) {
        cout << "Your charge will be 10 dollars" << endl;
    }
    /* This condition will be applied if the weight exceeds 10kg */
    else {
        cout << "Your charge will be 15 dollars" << endl;
    }

    return 0;
}
