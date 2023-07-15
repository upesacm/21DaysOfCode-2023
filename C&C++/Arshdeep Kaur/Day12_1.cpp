//Write a program that sorts an array of integers in ascending order using the bubble sort algorithm

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    for (int i=0; i<(n-1); i++) {
        for (int j=0; j<(n-i-1); j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int k=0; k<n; k++) {
        cout << arr[k] << " ";
    }
}

int main() {
    int arr[10], n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "\nThe sorted array is: " << endl;
    bubbleSort(arr, n);

    return 0;
}
