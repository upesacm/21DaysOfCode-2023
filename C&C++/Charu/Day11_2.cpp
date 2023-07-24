#include<iostream>
using namespace std;

struct Date{
    int day;
    int month;
    int year;
};

int compareDates(const Date& date1, const Date& date2) {
    {
    if (date1.year < date2.year) {
        return -1;
    } else if (date1.year > date2.year) {
        return 1;
    } else {
        if (date1.month < date2.month) {
            return -1;
        } else if (date1.month > date2.month) {
            return 1;
        } else {
            if (date1.day < date2.day) {
                return -1;
            } else if (date1.day > date2.day) {
                return 1;
            } else {
                return 0;
            }
        }
    }
}

}

int main(){
    Date date1, date2;
    
    cout << "Enter the first date (day month year): ";
    cin >> date1.day >> date1.month >> date1.year;
    
    cout << "Enter the second date (day month year): ";
    cin >> date2.day >> date2.month >> date2.year;
    
    int result = compareDates(date1, date2);

    if (result < 0) {
        cout << "The first date is earlier." << endl;
    } else if (result > 0) {
        cout << "The second date is earlier." << endl;
    } else {
        cout << "Both dates are the same." << endl;
    }

    return 0;
}