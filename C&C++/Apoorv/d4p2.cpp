#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a , b , c ;
    cout<<"Lets find the roots of a quadratic equation which is in form ax^2 + bx + c = 0.\n";
    cout<<"Enter the value for (a) :  ";
    cin>>a;
    cout<<"Enter the value for (b) :  ";
    cin>>b;
    cout<<"Enter the value for (c) :  ";
    cin>>c;

    int discriminent  = ( pow(b,2) - (4 * a * c) );

    if (discriminent<0)
    {
        cout<<"The quadratic equation has 2 COMPLEX roots";
    }
    else if (discriminent>0)
    {
        cout<<"The quadratic equation has 2 REAL and DIFFRENT roots.";
    }
    else
    {
        cout<<"The quadratic equation has 2 REAL and EQUAL roots.";
    }


    
    return 0 ; 
    
}
