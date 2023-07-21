//Write a program to swap the values of two variables using pointers.

#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Before swapping: First Number = " << num1 << " and Second Number = " << num2 << endl;

    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "After swapping: First Number = " << num1 << " and Second Number = " << num2 << endl;

    return 0;
}
