/*Create a function that takes an array of integers and its size as parameters, 
and returns the average of all the elements in the array.*/
#include <iostream>
using namespace std;
int avg(int arr[100],int n)
{
    int sum=0;
    int avg;
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    avg= sum/n;
    return avg;
}
int main()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int a[100];
    cout<<"Enter the elements "<<endl;
    for(int j=0;j<size;j++)
    {
       cin>>a[j];
    }
    cout<<"The average is: "<<avg(a,size);
    return 0;
}
