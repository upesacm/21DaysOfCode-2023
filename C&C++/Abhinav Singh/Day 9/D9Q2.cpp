//Implement a function that takes an array of integers and its size as parameters. 
// The function should rearrange the array in such a way that all the negative numbers appear before the positive numbers 
// while preserving the relative order of the negative and positive numbers

#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void shift(int arr[],int n){
    int a[n];
    int index = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            a[index] = arr[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            a[index] = arr[i];
            index++;
        }
    }

    print(a,n);
}

int main(){
    int a[5] = {1,-1,-2,-6,-3};
    cout<<"Before Shift : "; 
    print(a,5);
    cout<<endl << "After Shift : ";
    shift(a,5);
return 0;
}