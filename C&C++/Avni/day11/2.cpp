#include<iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};
bool isEarlier(const Date& date1, const Date& date2) {
    if (date1.year < date2.year)
        return true;
    else if (date1.year == date2.year && date1.month < date2.month)
        return true;
    else if (date1.year == date2.year && date1.month == date2.month && date1.day < date2.day)
        return true;

    return false;
}
int main() {
    Date date1 = { 13, 7, 2023 };
    Date date2 = { 1, 1, 2023 };

    if (isEarlier(date1, date2))
        cout << "Date 1 is earlier than Date 2" << endl;
    else
        cout << "Date 1 is not earlier than Date 2" << endl;

    return 0;
}