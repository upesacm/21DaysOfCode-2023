//Create a function that takes an array of integers and its size as parameters, and returns the average of all the elements in the array.

#include <iostream>
using namespace std;

float average(int arr[], int n) {

    float sum = 0;

    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    
    float avg = (sum / n);
    return avg;
}

int main() {

    int arr[10], n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    float ans = average(arr, n);
    cout << "The average of all the elements in the array is: " << ans;

    return 0;
}
