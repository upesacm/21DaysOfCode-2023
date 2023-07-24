#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number to generate its multiplication table (up to 10): ";
    cin >> number;

    if (cin.fail()) {
        cout << "Invalid input. Please enter a valid integer." << endl;
        return 1;
    }

    if (number <= 0) {
        cout << "Please enter a positive integer greater than zero." << endl;
        return 1;
    }

    cout << "Multiplication Table of " << number << ":\n";
    cout << "-------------------\n";

    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }

    return 0;
}
