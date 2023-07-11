#include <iostream>

using namespace std;

bool isLeap(int year)
{

    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 4 == 0));
}

int main()
{
    int year;

    cin >> year;

    isLeap(year) ? cout << "Leap Year" : cout << "Not a leap Year";

    return 0;
}