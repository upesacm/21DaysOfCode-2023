/*Write a program to reverse the words in a given string. 
The program should reverse the order of the words while keeping the individual words unchanged.*/
#include <iostream>
using namespace std;
int main()
{
    string arr[100];
    int size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The original array is: "<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<"The reversed array is: "<<endl;
    for(int i=size-1;i>=0;i--)
    {
           cout<<arr[i]<<" ";
    }
    return 0;
}
