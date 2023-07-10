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
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((arr[i][j])%2==0) {
                count++;
            }
        } 
    }
    cout<<count;
   
    return 0;
}