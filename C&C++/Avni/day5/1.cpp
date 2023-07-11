#include<iostream>
using namespace std;

int main()
{
    int n,result;
    cout<<"enter the limit"<<endl;
    cin>>n;
    int a=0,b=1;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        result=a;
        a=b;
        b=result+b;
    }
}