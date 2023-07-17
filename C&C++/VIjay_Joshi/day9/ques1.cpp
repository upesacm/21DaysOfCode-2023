
// 1. Create a function that takes an array of integers and its size as parameters, and returns the average of all the elements in the array.

#include <iostream>
using namespace std;

float calculateAverage(int arr[], int size) {
    float sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    float average = sum / size;
    return average;
}

int main() {
  int n;
  cin>> n;
    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

    float avg = calculateAverage(arr, n);

    cout << "Average: " << avg << endl;

    return 0;
}
