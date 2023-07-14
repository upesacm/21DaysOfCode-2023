

//2. Define a structure called "Date" with members for day, month, and year. Write a function to compare two dates and determine
//which one is earlier.


#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool isEarlier(const Date& d1, const Date& d2) {
    if (d1.year < d2.year) return true;
    if (d1.year > d2.year) return false;
    if (d1.month < d2.month) return true;
    if (d1.month > d2.month) return false;
    return d1.day < d2.day;
}

int main() {
    Date d1, d2;

    cout << "Enter the first date (day month year): ";
    cin >> d1.day >> d1.month >> d1.year;

    cout << "Enter the second date (day month year): ";
    cin >> d2.day >> d2.month >> d2.year;

    if (isEarlier(d1, d2)) {
        cout << "The first date is earlier." << endl;
    } else {
        cout << "The second date is earlier." << endl;
    }

    return 0;
}
