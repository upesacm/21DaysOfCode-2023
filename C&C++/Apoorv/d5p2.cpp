#include<iostream>

using namespace std;

int main()
{
    int a , b ;
    cout<<"Enter first number (a) : ";
    cin>>a;
    cout<<"Enter second numeber (b) : ";
    cin>>b;

    int checker;
    if (a>b)
    {
        checker=a;
    }
    else
    {
        checker=b;
    }

    while (checker%a!=0 || checker%b!=0)
    {
        checker+=1;
    }

    cout<<"LCM is: "<<checker;

    return 0;
    
}
