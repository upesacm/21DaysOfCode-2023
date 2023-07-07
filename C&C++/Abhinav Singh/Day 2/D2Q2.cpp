#include <iostream>
using namespace std;
void swapIntegers(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

int main() {
    int num1;
    int num2;

    cout << "Enter Num1: ";
    cin>>num1;

    cout<< "Enter Num2";
    cin>>num2;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapIntegers(num1, num2);

    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
