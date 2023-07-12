// Implement a recursive function to check if a given array is sorted in ascending order.
#include <iostream>
using namespace std;
bool check (int arr[100],int n)
{
    if(n==0||n==1)
    return true;
    if (arr[n-1]<arr[n-2])
    return false;
    return check(arr,n-1);
}
int main()
{
    int size;
    int a[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"The array is: ";
    for(int j=0;j<size;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl<<"Is the array in ascending order? "<<endl;
    cout<<check(a,size);
    return 0;
}
