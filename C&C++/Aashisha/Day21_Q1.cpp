#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number to generate its multiplication table (up to 10): ";
    cin >> number;
    if (number <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }
    cout << "Multiplication table of " << number << ":" << endl;
    cout << "-------------------------" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }
    cout << "-------------------------" << endl;

    return 0;
}
