/*Write a program that dynamically allocates memory for a two-dimensional array of integers with user-defined rows and columns. 
Populate the array with values entered by the user and print the sum of all elements.*/
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows in the array: "<<endl;
    cin>>n;
    cout<<"Enter the number of columns in the array: "<<endl;
    cin>>m;
    int **a;
    cout<<"Enter the elements in the array: "<<endl;
    //dynamically adds storage for rows
    a=new int *[n];
    //dynamically adds storage for columns
    for(int z=0;z<n;z++)
    { 
        a[z]= new int [m];
    }
    //insert elements in array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        cin>>a[i][j];
        }
    }
    //display the array
    cout<<"The array is: "<<endl;
    for(int p=0;p<n;p++)
    {
        for(int q=0;q<m;q++)
        {
        cout<<a[p][q]<<" ";
        }
        cout<<endl;
    }
    //calculate sum of elements
    int sum=0;
    cout<<"The sum is: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        sum=sum+a[i][j];
        }
    }
    cout<<sum;
    return 0;
}
