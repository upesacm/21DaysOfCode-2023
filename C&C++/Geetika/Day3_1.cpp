//1. Write a program to calculate the power of a number using the pow() function from the <cmath> library.

#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int base, exp;
 
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;
 
    cout << base << "^" << exp << " = " << pow(base, exp);
    return 0;
}
