#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter the first numbers"<<endl;
    cin>>a;
    cout<<"enter the second numbers"<<endl;
    cin>>b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"first number is "<<a<<endl;
    cout<<"second number is "<<b<<endl;
}