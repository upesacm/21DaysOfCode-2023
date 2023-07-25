#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the total no of elements"<<endl;
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"enter the elements in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"sum is "<<sum<<endl;
}