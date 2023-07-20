// 1. Write a C program that takes an array of integers as input and finds the largest and smallest numbers in the array. The program should return the sum of the indices of the largest and the smallest number.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int largeIndex(int arr[], int n){
    int large = arr[0];
    int index = 0;
    for (int i = 1; i < n; i++){
        if(arr[i] > large){
            large = arr[i];
            index = i;
        }else if(arr[i] == large){
            continue;
        }
  
    }
    return index;
}
int smallIndex(int arr[], int n){
    int small = arr[0];
    int index = 0;
    for (int i = 1; i < n; i++){
        if(arr[i] < small){
            small = arr[i];
            index = i;
        }else if(arr[i] == small){
            continue;
        }
    }
    return index;
}

int main() {
    int size;
    cin >> size;
    
    int arr[100000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    int a = smallIndex (arr, size);
    int b = largeIndex (arr, size);
    int c = a + b;
    cout << c;
    
    return 0 ;
}

