//Write a program to count the number of even elements in a 2D integer array.//
#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the number of rows and column in the 2D array: "<<endl;
    cin>>row>>col;
    int arr[10][10];
    //taking the input for elements
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing array elements:
    cout<<"The elements in the array are: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"["<<i<<"]"<<"["<<j<<"] "<<arr[i][j]<<endl;
        }
    }
    //checking the even elements:
    cout<<"The even elements are: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if((arr[i][j])%2==0)
            {
                cout<<arr[i][j]<<endl;
            }
        }
    }
    return 0;
}
