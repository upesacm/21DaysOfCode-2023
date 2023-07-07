
/*2. Write a program to determine the roots of a quadratic equation (ax^2 + bx + c = 0) based on the 
values of a, b, and c entered by the user. Handle all possible cases (real and distinct roots, real and equal
 roots, imaginary roots) and print the appropriate message.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double dic, realPart, imgPart;

    cout << "Enter the coefficients (a, b, c) of the quadratic equation: ";
    cin >> a >> b >> c;

    dic = b * b - 4 * a * c;

    if (dic > 0) {
        double root1 = (-b + sqrt(dic)) / (2 * a);
        double root2 = (-b - sqrt(dic)) / (2 * a);
        cout << "The quadratic equation has two distinct real roots: " << root1 << " and " << root2 << endl;
    } else if (dic == 0) {
        double root = -b / (2 * a);
        cout << "The quadratic equation has one real root: " << root << endl;
    } else {
        realPart = -b / (2 * a);
        imgPart = sqrt(-dic) / (2 * a);
        cout << "The quadratic equation has two imaginary roots: " << realPart << " + " << imgPart << "i and " << realPart << " - " << imgPart << "i" << endl;
    }

    return 0;
}
