//2. Write a program to find the LCM (Least Common Multiple) of two numbers using a while loop.
#include <iostream>
using namespace std;

int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return calculateGCD(b, a % b);
}

int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int lcm = calculateLCM(num1, num2);

    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}
