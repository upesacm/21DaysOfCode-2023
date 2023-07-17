#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    int a=INT_MIN;
    for(int i=0;i<n-1;i++){
        if(arr[i]>a){
            a=arr[i];
        }
    }
    cout<<a;
    return 0;
}