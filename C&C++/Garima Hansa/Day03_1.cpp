// 1. Write a program to calculate the power of a number using the pow() function from the <cmath> library.']

#include<iostream>  //endl
#include<cmath>
using namespace std;

int main(){
    cout << "-------------------------CALCULATE POWER OF A NUMBER-------------------------"<<endl;
    cout << "Enter a number: ";
    double num;
    cin >> num;
    cout << "Enter its power: ";
    double p;
    cin >> p;
    cout << "Number raised to the power is: " << pow(num, p) << endl;
    cout << "-------------------------END-------------------------"<<endl;
}
