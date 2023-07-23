#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number to generate  multiplication table : ";
    cin >> n;


    cout << "Multiplication Table of " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }

    return 0;
}
