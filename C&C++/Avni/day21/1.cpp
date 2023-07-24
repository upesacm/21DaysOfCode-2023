#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"tell number other than 0"<<endl;
    }
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"= "<<n*i<<endl;
    }
}