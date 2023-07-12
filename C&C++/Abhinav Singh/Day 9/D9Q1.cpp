//Create a function that takes an array of integers and its size as parameters, and returns the average of all the elements in the array.

#include<iostream>
using namespace std;

int AvgA(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }

    int avg = sum/size;
    return avg;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    cout << "Avg of the Array is: " << AvgA(arr,5);
return 0;
}