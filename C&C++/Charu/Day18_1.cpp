#include <iostream>
using namespace std;
void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    swap(&num1, &num2);

    cout << "After swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
