//2. Write a program to determine the roots of a quadratic equation (ax^2 + bx + c = 0) based on the values of a, b, and c entered by the user. Handle all possible cases (real and distinct roots, real and equal roots, imaginary roots) and print the appropriate message.

#include<iostream>
using namespace std;

int main(){
    cout <<  endl <<"---------------------Roots of Quadratic Equation---------------------"<< endl;

    double a, b, c;
    cout  << "Enter a, b, c (ax^2 + bx + c = 0)" <<endl ;
    cin >> a >> b >> c;

    cout << endl << "...Calculating Determinant..."<< endl << endl ;
    int D = b*b - 4*a*c;

    if (D == 0)
    {
        cout << "Your roots are real and equal"<<endl;
    }else if (D > 0)
    {
        cout << "Your roots are real and distinct." << endl;
    }else{
        cout << "Your roots are imaginary." << endl;
    }
    
    cout << endl <<"---------------------END---------------------"<< endl;
}