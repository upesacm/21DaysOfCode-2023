//Write a program to determine the roots of a quadratic equation (ax^2 + bx + c = 0) based on the values of a, b, and c entered by the user. Handle all possible cases (real and distinct roots, real and equal roots, imaginary roots) and print the appropriate message.

#include <iostream>
#include <cmath>
using namespace std;

void findRoots(float a, float b, float c) {
    float discriminant, realPart, imaginaryPart;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "The quadratic equation has two distinct real roots: " << root1 << " and " << root2 << std::endl;
    }
    else if (discriminant == 0) {
        float root = -b / (2 * a);
        std::cout << "The quadratic equation has a real and equal root: " << root << std::endl;
    }
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "The quadratic equation has two imaginary roots: " << realPart << " + " << imaginaryPart << "i and "
                  << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}

int main() {
    float a, b, c;

    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    findRoots(a, b, c);

    return 0;
}

