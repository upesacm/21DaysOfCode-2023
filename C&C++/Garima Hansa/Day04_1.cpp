//1. Write a program to determine the type of a triangle based on the lengths of its sides and print the result (e.g., equilateral, isosceles, scalene). Take the input of the length of sides from the User.

#include<iostream>
using namespace std;

int main(){
    cout << "---------------------Type of Triangle---------------------"<< endl;

    double a,b,c;
    cout << "Enter the sides of triangle: "<<endl;
    cin >> a >> b >> c;

    if(a == b && b == c && c == a){
        cout << "This is an equilateral triangle."<<endl;
    }else if ((a == b || b==c || c==a) && (a!=b!=c))
    {
        cout << "This is an isoceles triangle." << endl;
    }else if (a!=b!=c)
    {
        cout << "This is a scalene triangle." << endl;
    }else{
        cout << "This is not a triangle." << endl;
    }
    
    cout << "---------------------END---------------------";
}