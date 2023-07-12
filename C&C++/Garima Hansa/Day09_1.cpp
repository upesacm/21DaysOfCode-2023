//1. Create a function that takes an array of integers and its size as parameters, and returns the average of all the elements in the array.

#include<iostream>
using namespace std;

int calAvg(int arr[], int size){
    int sum=0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
     cout <<"The average of all the elements in the array is "<< sum/size << endl;
    
}

int main(){
    int arr[10] = {3,3,3,3,3,3,3,3,3,3};

    calAvg(arr, 10);
    return 0;

}