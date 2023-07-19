#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double number , power;
    cout<<"Enter number - ";
    cin>>number;
    cout<<"Enter power - ";
    cin>>power;
    cout<<number<<" rised to power "<<power<<" is : "<<pow(number , power);
    return 0;
}
