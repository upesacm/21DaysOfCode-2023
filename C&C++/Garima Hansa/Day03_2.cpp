// 2. Write a program to calculate the natural logarithm (base e) of a given number using the log() function from the <cmath> library.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout << "-------------------------CALCULATE NATURAL LOG OF A NUMBER-------------------------"<<endl;
    cout << "Enter a number: ";
    double num;
    cin >> num;
    cout << "The natural log of the number is: " << log(num) << endl;
    cout << "-------------------------END-------------------------"<<endl;
}
