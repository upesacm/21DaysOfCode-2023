#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0; i < n-1; i++)
    {
        for (int j =i+ 1; j <n; j++)
        {
            if (arr[j] < arr[i]){
                swap(arr[j] , arr[i]);
            }
        }
    }  
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }   
    return 0;
}