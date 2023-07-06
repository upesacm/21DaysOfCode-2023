//                                                                    {Day - 4 Programs}
//1. Write a program to determine the type of a triangle based on the lengths of its sides and print the result 
//for ex - (equilateral, isosceles, scalene). Take the input of the length of sides from the User.
#include <iostream>
using namespace std;
string triangleType(int a, int b, int c);
int main() {
    int side1, side2, side3;
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;
    
    string type = triangleType(side1, side2, side3);
    cout << "The triangle is " << type << endl;
    
    return 0;
}
string triangleType(int a, int b, int c) {
    if (a == b && b == c) {
        return "Equilateral";
    } else if (a == b || b == c || a == c) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}
//2. Write a program to determine the roots of a quadratic equation (ax^2 + bx + c = 0) based on the values of a, b, and c entered by the user. 
//Handle all possible cases (real and distinct roots, real and equal roots, imaginary roots) and print the appropriate message.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        cout << "Roots: ";
        if (discriminant > 0) {
            cout << "Real and distinct" << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        } else {
            cout << "Real and equal" << endl;
            cout << "Root 1 = Root 2 = " << root1 << endl;
        }
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots: Imaginary" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
cout << "\n" << endl;
    return 0;
}

