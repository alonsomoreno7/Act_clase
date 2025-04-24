#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    if (a == 0) {
        cout << "The equation is not quadratic, it is a linear equation." << endl;
        if (b != 0) {
            double x = -c / b;
            cout << "The root is: x = " << x << endl;
        } else {
            if (c == 0) {
                cout << "The equation has infinite solutions." << endl;
            } else {
                cout << "The equation has no solution." << endl;
            }
        }
    } else {
        double discriminant = b * b - 4 * a * c;
        cout << "The value of the discriminant is: " << discriminant << endl;

        if (discriminant < 0) {
            cout << "The roots are complex conjugates." << endl;
        } else {
            double discriminantRoot = sqrt(discriminant);
            cout << "The root of the discriminant is: " << discriminantRoot << endl;
            if (discriminant == 0) {
                double x = -b / (2 * a);
                cout << "The equation has a double real root: x = " << x << endl;
            } else {
                double x1 = (-b + discriminantRoot) / (2 * a);
                double x2 = (-b - discriminantRoot) / (2 * a);
                cout << "The real roots are:" << endl;
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
        }
    }

    return 0;
}