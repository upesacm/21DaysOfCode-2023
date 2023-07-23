#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number to generate  multiplication table (1-10): ";
    cin >> n;

    
if (cin.fail() || number < 1 || number > 10) {
        cout << "Invalid input" << endl;
        return 1;
    }

    cout << "Multiplication Table of " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }

    return 0;
}
