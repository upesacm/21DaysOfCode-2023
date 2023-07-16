#include<iostream>
using namespace std;

int sorted(int arr[],int n)
{
    if (n == 1 || n == 0)
        return 1;
    if (arr[n - 1] < arr[n - 2])
        return 0;
    return sorted(arr, n - 1);
}

int main()
{
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if (sorted(arr, n))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}