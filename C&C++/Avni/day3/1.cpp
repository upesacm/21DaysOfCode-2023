#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int power;
    cout<<"enter till which power to be calculated"<<endl;
    cin>>power;
    int result=pow(n,power);
    cout<<result<<endl;
}