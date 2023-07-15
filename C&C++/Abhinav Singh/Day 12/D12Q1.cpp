//Write a program that sorts an array of integers in ascending order using the bubble sort algorithm.
#include<iostream>
using namespace std;

void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    cout << "Sorted: ";
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}

int main(){
    int arr[5] = {1,5,4,3,2};
    sort(arr,5);
return 0;
}