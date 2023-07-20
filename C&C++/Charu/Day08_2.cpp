#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cout<<"Enter the rows of array:"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the columns of array:"<<endl;
    cin>>m;
    int arr[n][m];
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        } 
    }
    int sum_row=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sum_row = sum_row + arr[i][j];
        }
        cout<< "Sum of the row "<< i << " = " << sum_row<< endl;

        sum_row=0;
    }
    int sum_col=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sum_col = sum_col + arr[j][i];

        }
        cout<< "Sum of the column "<< i << " = " << sum_col<< endl;

        sum_col=0;
    }
    return 0;
}
    
