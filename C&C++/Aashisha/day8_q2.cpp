//Write a program to find the sum of each row and each column in a 2D integer array.//
#include <iostream>
using namespace std;
int main()
{
    int row,col;
    int arr[10][10];
    cout<<"Enter the number of rows and columns in the 2D array: "<<endl;
    cin>>row>>col;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
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
    //sum of rows:    
       
    for(int i=0;i<row;i++)
    {   int sum=0;
        for(int j=0;j<col;j++)
        {
       sum= sum + arr[i][j];
    }
    cout<<"The sum of row" <<i+1<<" is: "<<sum<<endl;
    } 
    // sum of column
    
    for(int j=0;j<col;j++)
    {   int sum1=0;
        for(int i=0;i<row;i++)
        {
            sum1=sum1+arr[i][j];
        }
        cout<<"The sum of column" <<j+1<<" is: "<<sum1<<endl;
    }
    return 0;
}
