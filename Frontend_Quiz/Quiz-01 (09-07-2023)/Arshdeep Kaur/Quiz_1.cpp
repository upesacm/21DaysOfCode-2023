//Write a C program that takes an array of integers as input and finds the largest and smallest numbers in the array. The program should return the sum of the indices of the largest and the smallest number.

#include <iostream>
using namespace std;


int main() {
    
    int n, arr[10];
    //cout << "Enter the size of the array: ";
    cin >> n;
    
    //cout << "Enter the elements of the array";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int largest = arr[0];
    int smallest = arr[0];
    int largeIndex = 0;
    int smallIndex = 0;
    
    for (int i=0; i<n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            largeIndex = i;
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallIndex = i;
        }
    }
    
    //cout << "Sum of the indices of the largest and the smallest number is: " << largeIndex + smallIndex << endl;
    
    int ans = largeIndex + smallIndex;
    cout << ans;
    
    return 0;
}
