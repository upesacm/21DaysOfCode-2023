//Write a C/C++ program that uses a global constant PI with a value of 3.14159. The program should prompt the user to enter the radius of a circle, calculate the circumference using the constant, and print the result on the console.

#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double circumference = 2 * PI * radius;

    cout << "The circumference of the circle is: " << circumference << endl;

    return 0;
}
