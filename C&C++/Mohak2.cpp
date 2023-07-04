//                                                                 {Day-2 Programs}
//Q-1. Write a program to check if a given year is a leap year or not using the logical operators.
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            } else {
                cout << year << " is not a leap year." << endl;
            }
        } else {
            cout << year << " is a leap year." << endl;
        }
    } else {
        cout << year << " is not a leap year." << endl;
    }
    
  return 0;
}
//Q-2. Write a program to swap the values of two variables without using a third variable using the bitwise XOR operator.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;

    cout << "Before swapping: num1 : " << num1 << ", num2 : " << num2 << endl;

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    cout << "After swapping: num1 : " << num1 << ", num2 : " << num2 << endl;

    return 0;
}
