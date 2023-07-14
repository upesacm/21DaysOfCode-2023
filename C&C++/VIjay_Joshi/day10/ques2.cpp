#include <iostream>
using namespace std;

bool isSorted(int arr[], int s) {
    if (s <= 1) {
        return true;
    }

    if (arr[s - 1] < arr[s - 2]) {
        return false;
    }

    return isSorted(arr, s - 1);
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool sorted = isSorted(arr, size);

    if (sorted) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }

    return 0;
}
