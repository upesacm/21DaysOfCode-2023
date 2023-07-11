/*
Implement a function that takes an array of integers and its size as parameters. The function should rearrange the array in such a way that all
the negative numbers appear before the positive numbers while preserving the relative order of the negative and positive numbers.
*/

#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {

    int i=0;
    int j=n-1;
    while (i < j) {
        if ((arr[i] >= 0) && (arr[j] < 0)) {
            swap(arr[i], arr[j]);
            i = i+1;
            j = j-1;
        }

        else if (arr[i] < 0) {
            i = i+1;
        }

        else if (arr[j] >= 0) {
            j = j-1;
        }
    }

    cout << "The new array is: " << endl;
    for (int k=0; k<n; k++) {
        cout << arr[k] << " ";
    }

}

int main() {

    int arr[10];
    int n = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sortArray(arr, n);

    return 0;
}
