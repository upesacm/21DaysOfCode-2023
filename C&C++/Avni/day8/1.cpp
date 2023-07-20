#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of rows"<<endl;
    cin>>n;
    int m;
    cout<<"enter the size of columns"<<endl;
    cin>>m;
    int arr[n][m];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]%2==0)
            {
                c+=1;
            }
        }
    }
    cout<<"no of even elements are "<<c<<endl;
}