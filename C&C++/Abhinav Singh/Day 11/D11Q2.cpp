//Define a structure called "Date" with members for day, month, and year. Write a function to compare two dates and determine which one is earlier. 
#include<iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    Date(const int& day,const int& month,const int& year)
    :day(day),month(month),year(year) {
    }
};

void Earlier(const Date& date1,const Date& date2){
{
    if (date1.year < date2.year) {
        cout << "Date 1 is Earlier" << endl;
    }
    else if (date1.year > date2.year) {
        cout << "Date 2 is Earlier" << endl;
    }
    else { // If the years are equal, compare months
        if (date1.month < date2.month) {
            cout << "Date 1 is Earlier" << endl;
        }
        else if (date1.month > date2.month) {
            cout << "Date 2 is Earlier" << endl;
        }
        else { // If the months are equal, compare days
            if (date1.day < date2.day) {
                cout << "Date 1 is Earlier" << endl;
            }
            else if (date1.day > date2.day) {
                cout << "Date 2 is Earlier" << endl;
            }
            else {
                cout << "Both dates are the same" << endl;
            }
        }
    }
}
}

int main(){
    int day1,day2;
    int month1,month2;
    int year1,year2;
    cout << "Enter day 1: ";
    cin>>day1;
    cout << "Enter month 1: ";
    cin>>month1;
    cout << "Enter year 1: ";
    cin>>year1;
    cout << "Enter day 2: ";
    cin>>day2;
    cout << "Enter month 2: ";
    cin>>month2;
    cout << "Enter year 2: ";
    cin>>year2;
    Date date1(day1,month1,year1);
    Date date2(day2,month2,year2);

    Earlier(date1,date2);
return 0;
}