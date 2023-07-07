#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the coefficients (a, b, c): ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Real and distinct roots: " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Real and equal roots: " << root << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex roots: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
