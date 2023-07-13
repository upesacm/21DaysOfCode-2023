//Define a structure called "Date" with members for day, month, and year. Write a function to compare two dates and determine which one is earlier. 

#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

void dateComp(Date d1, Date d2) {
    if (d1.day == d2.day && d1.month == d2.month && d1.year ==d2.year) {
        cout << "\nBoth the dates are equal" << endl;
    }

    else if ( (d1.year > d2.year) || (d1.year == d2.year && d1.month > d2.month) || (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day) ) {
        cout << "\n" << d2.day << "/" << d2.month << "/" << d2.year << " is earlier than " << d1.day << d1.month << d1.year;
    }

    else if ( (d2.year > d1.year) || (d2.year == d1.year && d2.month > d1.month) || (d2.year == d1.year && d2.month == d1.month && d2.day > d1.day) ) {
        cout << "\n" << d1.day << "/" << d1.month << "/" << d1.year << " is earlier than " << d2.day << d2.month << d2.year;
    }
}

int main() {

    Date d1, d2;

    cout << "Enter the day of the first day: ";
    cin >> d1.day;
    cout << "Enter the month of the first date: ";
    cin >> d1.month;
    cout << "Enter the year of the first date: ";
    cin >> d1.year;

    cout << "\nEnter the day of the second date: ";
    cin >> d2.day;
    cout << "Enter the month of the second date: ";
    cin >> d2.month;
    cout << "Enter the year of the second date: ";
    cin >> d2.year;

    dateComp(d1, d2);

    return 0;
}
