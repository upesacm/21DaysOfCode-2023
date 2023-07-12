/*Implement a function that takes an array of integers and its size as parameters. 
The function should rearrange the array in such a way that all the negative numbers appear before 
the positive numbers while preserving the relative order of the negative and positive numbers.*/
#include <iostream>
using namespace std;
int arrange(int arr[100],int n)
{
   for(int i=0;i<n;i++)
   {
      if(arr[i]<0)
      {
        cout<<arr[i]<<" ";
      }
   }
   for(int j=0;j<n;j++)
   {
    if (arr[j]>=0)
    {
        cout<<arr[j]<<" ";
    }
   }
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
    cout<<"The original array is: "<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<a[j]<<" "<<endl;
    }
    cout<<"The array after rearrangement is: "<<endl;
    arrange(a,size);
    return 0;
}
