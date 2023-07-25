#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a number to generate its multiplication table up to 10: ";
    cin >> number;

    if (cin.fail()) {
        cout << "Invalid input. Please enter a valid number." << endl;
        return 1;
    }

    cout << "Multiplication Table of " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
