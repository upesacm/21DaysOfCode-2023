//Write a C++ program to sort an integer array in ascending order using a sorting algorithm 
//Using Insertion Sort Technique

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {

    for (int i=1; i<n; i++) {
        int temp = arr[i];
        int j=i-1;
        for (; j>=0; j--) {
            if (arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
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

    cout << "The sorted array is: " << endl;
    insertionSort(arr, n);

    return 0;
}
