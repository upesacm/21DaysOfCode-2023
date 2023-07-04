//Leap Year or not
#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the year you want to check: "<< endl;
    cin>>year;
    if(year%400==0){
        cout<<"It is a leap year";
    }
    else if(year%4==0){
        cout<<"It is a Leap Year.";
    }
    else if(year%100==0){
        cout<<"Not a Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
    return 0;
}