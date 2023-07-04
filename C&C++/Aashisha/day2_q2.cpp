#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a number 1"<<endl;
    cin>>a;
    cout<<"Enter a number 2"<<endl;
    cin>>b;
    cout<<"Before swapping: a= "<<a<<" and b= "<<b<<endl;
    a= a^b;
    b= a^b;
    a=a^b;
     cout<<"After swapping: a= "<<a<<" and b= "<<b<<endl;
     return 0;
}
