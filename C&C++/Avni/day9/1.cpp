#include<iostream>
using namespace std;

int calculate(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int result=sum/n;
    return result;
}


int main()
{
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the average of array is "<<calculate(arr,n)<<endl;
}