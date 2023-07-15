// 1. Write a program to check if a given year is a leap year or not using the logical operators.

#include <iostream>
using namespace std;

int main()
{
    cout << "-----------------------------TO CHECK FOR LEAP YEAR-----------------------------" << endl
         << endl
         << endl;
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << year << " is a Leap year." << endl
             << endl
             << endl;
    }
    else if (year % 400 == 0)
    {
        cout << year << " is a Leap year." << endl
             << endl
             << endl;
    }
    else
    {
        cout << year << " is not a Leap year" << endl
             << endl
             << endl;
    }
    cout << "---------------------------------------END---------------------------------------";
}