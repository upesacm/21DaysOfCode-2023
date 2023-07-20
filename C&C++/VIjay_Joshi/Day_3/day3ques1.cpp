

// 1. Write a program to calculate the power of a number using the pow() function from the <cmath> library.


#include<iostream>
#include<cmath>
using namespace std;

int main(){

double number;
double power;

cout<<"Enter the number";
cin>>number;

cout<<"Enter the power";
cin>>power;

long double ans= pow(number,power);

cout<<"the ans is"<<ans;
return 0;
}
