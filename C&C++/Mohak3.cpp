//                                                                {Day-3 Programs}
//Q-1. Write a program to calculate the power of a number using the pow() function from the <cmath> library.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double base, exponent, result;
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    //now calculating the rezult using the pow() function.
    result = pow(base, exponent);
    cout << "Result: " << result << endl;

    return 0;
}
//Q-2. Write a program to calculate the natural logarithm (base e) of a given number using the log() function from the <cmath> library.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double number, result;
    cout << "Enter a number: ";
    cin >> number;
    //now calculating the rezult using the log() function
    result = log(number);
    cout << "Natural logarithm of " << number << ": " << result << endl;

    return 0;
}

