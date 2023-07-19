#include<iostream>
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
    int i,j,sum = 0;
 
    cout << "Finding Sum of each row:"<<endl;
    for (i = 0; i < n; ++i) 
    {
        for (j = 0; j < m; ++j) {
            sum = sum + arr[i][j];
        }
        cout<< "Sum of the row "<< i << " = " << sum<< endl;
        sum = 0;
    }

    cout << "\nFinding Sum of each column:\n\n";
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) 
        {
            sum = sum + arr[j][i];
        }
        cout<< "Sum of the column "<< i << " = " << sum<< endl;
        sum = 0;
    }
}
