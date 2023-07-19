#include<iostream>
using namespace std;

double avg_array(int arr[],int n){
      int sum=0;
      for(int i=0;i<n;i++){
        sum+=arr[i];
      }
      double avg=sum/n;
      return avg;
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<n;i++){
        
            cin>>arr[i];
        
    }
    double average= avg_array( arr,n);
    cout<<average;
   
    return 0;
}