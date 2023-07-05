#include<iostream>
using namespace std;

void checkLeap(int year){
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        cout << year << " leap year.";
      }
      else {
        cout << year << " not a leap year.";
      }
    }
    else {
      cout << year << " a leap year.";
    }
  }
  else {
    cout << year << " not a leap year.";
  }
}

int main(){
    int year;
    cout << "Enter Year : ";
    cin>> year;
    checkLeap(year);
}